// swift-tools-version:5.5
// The swift-tools-version declares the minimum version of Swift required to build this package.
import PackageDescription

let package = Package(
    name: "MulitPing",
    products: [
        .library(
          name: "MulitPing",
          targets: ["MulitPing"]),
    ],
    dependencies: [],
    targets: [
        .target(
            name: "MulitPing",
            dependencies: []
        )
    ]
)
