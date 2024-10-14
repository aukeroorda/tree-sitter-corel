// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterCorel",
    products: [
        .library(name: "TreeSitterCorel", targets: ["TreeSitterCorel"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterCorel",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterCorelTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterCorel",
            ],
            path: "bindings/swift/TreeSitterCorelTests"
        )
    ],
    cLanguageStandard: .c11
)
