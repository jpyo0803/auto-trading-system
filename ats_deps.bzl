load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

def ats_deps():
    http_archive(
        name = "com_google_googletest",
        urls = ["https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip"],
        strip_prefix = "googletest-609281088cfefc76f9d0ce82e1ff6c30cc3591e5",
    )

    http_archive(
        name = "io_bazel_rules_go",
        sha256 = "2b1641428dff9018f9e85c0384f03ec6c10660d935b750e3fa1492a281a53b0f",
        urls = [
            "https://mirror.bazel.build/github.com/bazelbuild/rules_go/releases/download/v0.29.0/rules_go-v0.29.0.zip",
            "https://github.com/bazelbuild/rules_go/releases/download/v0.29.0/rules_go-v0.29.0.zip",
        ],
    )
