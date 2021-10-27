workspace(name = "com_github_jpyo0803_ats")

# ATS setup
load(":ats_deps.bzl", "ats_deps")

ats_deps()

# Buildifer setup
load(":buildifier_deps.bzl", "buildifier_deps")

buildifier_deps()

load("@io_bazel_rules_go//go:deps.bzl", "go_register_toolchains", "go_rules_dependencies")

go_rules_dependencies()

go_register_toolchains(version = "1.17.2")

load("@bazel_gazelle//:deps.bzl", "gazelle_dependencies")

gazelle_dependencies()

load("@com_google_protobuf//:protobuf_deps.bzl", "protobuf_deps")

protobuf_deps()
