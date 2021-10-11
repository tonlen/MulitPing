// swift-tools-version:5.3
// The swift-tools-version declares the minimum version of Swift required to build this package.
import PackageDescription

let package = Package(
    name: "MulitPing",
    platforms: [
        .iOS(.v9),
        .macOS(.v10_10),
        .tvOS(.v9)
    ],
    products: [
        .library(
          name: "MulitPing",
          targets: ["MulitPing"]),
    ],
    dependencies: [],
    targets: [
        .target(
            name: "MulitPing",
            dependencies: [],
            path: "Source"
        )
    ]
)
