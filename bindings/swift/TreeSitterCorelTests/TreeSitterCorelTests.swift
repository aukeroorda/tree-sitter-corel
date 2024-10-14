import XCTest
import SwiftTreeSitter
import TreeSitterCorel

final class TreeSitterCorelTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_corel())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Corel grammar")
    }
}
