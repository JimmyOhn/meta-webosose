# Autogenerated with 'bitbake -c update_crates sugar'

# from Cargo.lock
SRC_URI += " \
    crate://crates.io/Inflector/0.11.4 \
    crate://crates.io/addr2line/0.17.0 \
    crate://crates.io/adler/1.0.2 \
    crate://crates.io/adler32/1.2.0 \
    crate://crates.io/ahash/0.7.6 \
    crate://crates.io/aho-corasick/0.7.18 \
    crate://crates.io/aliasable/0.1.3 \
    crate://crates.io/anchor-attribute-access-control/0.24.2 \
    crate://crates.io/anchor-attribute-account/0.24.2 \
    crate://crates.io/anchor-attribute-constant/0.24.2 \
    crate://crates.io/anchor-attribute-error/0.24.2 \
    crate://crates.io/anchor-attribute-event/0.24.2 \
    crate://crates.io/anchor-attribute-interface/0.24.2 \
    crate://crates.io/anchor-attribute-program/0.24.2 \
    crate://crates.io/anchor-attribute-state/0.24.2 \
    crate://crates.io/anchor-client/0.24.2 \
    crate://crates.io/anchor-derive-accounts/0.24.2 \
    crate://crates.io/anchor-lang/0.24.2 \
    crate://crates.io/anchor-spl/0.24.2 \
    crate://crates.io/anchor-syn/0.24.2 \
    crate://crates.io/ansi_term/0.12.1 \
    crate://crates.io/anyhow/1.0.60 \
    crate://crates.io/arrayref/0.3.6 \
    crate://crates.io/arrayvec/0.7.2 \
    crate://crates.io/assert_matches/1.5.0 \
    crate://crates.io/async-recursion/0.3.2 \
    crate://crates.io/async-stream/0.3.3 \
    crate://crates.io/async-stream-impl/0.3.3 \
    crate://crates.io/async-trait/0.1.57 \
    crate://crates.io/attohttpc/0.19.1 \
    crate://crates.io/atty/0.2.14 \
    crate://crates.io/autocfg/1.1.0 \
    crate://crates.io/avro-rs/0.13.0 \
    crate://crates.io/aws-creds/0.29.1 \
    crate://crates.io/aws-region/0.24.1 \
    crate://crates.io/backtrace/0.3.66 \
    crate://crates.io/base32/0.4.0 \
    crate://crates.io/base64/0.12.3 \
    crate://crates.io/base64/0.13.0 \
    crate://crates.io/base64ct/1.5.1 \
    crate://crates.io/bincode/1.3.3 \
    crate://crates.io/bitflags/1.3.2 \
    crate://crates.io/bitvec/0.20.4 \
    crate://crates.io/bitvec/1.0.1 \
    crate://crates.io/blake3/1.3.1 \
    crate://crates.io/block-buffer/0.9.0 \
    crate://crates.io/block-buffer/0.10.2 \
    crate://crates.io/block-padding/0.2.1 \
    crate://crates.io/borsh/0.9.3 \
    crate://crates.io/borsh-derive/0.9.3 \
    crate://crates.io/borsh-derive-internal/0.9.3 \
    crate://crates.io/borsh-schema-derive-internal/0.9.3 \
    crate://crates.io/bs58/0.3.1 \
    crate://crates.io/bs58/0.4.0 \
    crate://crates.io/bumpalo/3.10.0 \
    crate://crates.io/bundlr-sdk/0.2.0 \
    crate://crates.io/bv/0.11.1 \
    crate://crates.io/byte-slice-cast/1.2.1 \
    crate://crates.io/bytemuck/1.11.0 \
    crate://crates.io/bytemuck_derive/1.1.1 \
    crate://crates.io/byteorder/1.4.3 \
    crate://crates.io/bytes/1.2.1 \
    crate://crates.io/bzip2/0.4.3 \
    crate://crates.io/bzip2-sys/0.1.11+1.0.8 \
    crate://crates.io/caps/0.5.4 \
    crate://crates.io/cargo-husky/1.5.0 \
    crate://crates.io/cc/1.0.73 \
    crate://crates.io/cfg-if/1.0.0 \
    crate://crates.io/chrono/0.4.20 \
    crate://crates.io/clap/2.34.0 \
    crate://crates.io/clap/3.2.16 \
    crate://crates.io/clap_derive/3.2.15 \
    crate://crates.io/clap_lex/0.2.4 \
    crate://crates.io/configparser/1.0.0 \
    crate://crates.io/console/0.15.1 \
    crate://crates.io/console_error_panic_hook/0.1.7 \
    crate://crates.io/console_log/0.2.0 \
    crate://crates.io/const-oid/0.7.1 \
    crate://crates.io/constant_time_eq/0.1.5 \
    crate://crates.io/convert_case/0.4.0 \
    crate://crates.io/core-foundation/0.9.3 \
    crate://crates.io/core-foundation-sys/0.8.3 \
    crate://crates.io/cpufeatures/0.2.2 \
    crate://crates.io/crc32fast/1.3.2 \
    crate://crates.io/crossbeam-channel/0.5.6 \
    crate://crates.io/crossbeam-deque/0.8.2 \
    crate://crates.io/crossbeam-epoch/0.9.10 \
    crate://crates.io/crossbeam-utils/0.8.11 \
    crate://crates.io/crunchy/0.2.2 \
    crate://crates.io/crypto-bigint/0.3.2 \
    crate://crates.io/crypto-common/0.1.6 \
    crate://crates.io/crypto-mac/0.8.0 \
    crate://crates.io/crypto-mac/0.9.1 \
    crate://crates.io/crypto-mac/0.11.1 \
    crate://crates.io/ctrlc/3.2.2 \
    crate://crates.io/curve25519-dalek/3.2.0 \
    crate://crates.io/darling/0.12.4 \
    crate://crates.io/darling_core/0.12.4 \
    crate://crates.io/darling_macro/0.12.4 \
    crate://crates.io/dashmap/4.0.2 \
    crate://crates.io/data-encoding/2.3.2 \
    crate://crates.io/dateparser/0.1.6 \
    crate://crates.io/der/0.5.1 \
    crate://crates.io/derivation-path/0.1.3 \
    crate://crates.io/derive_builder/0.10.2 \
    crate://crates.io/derive_builder_core/0.10.2 \
    crate://crates.io/derive_builder_macro/0.10.2 \
    crate://crates.io/derive_more/0.99.17 \
    crate://crates.io/dialoguer/0.9.0 \
    crate://crates.io/dialoguer/0.10.2 \
    crate://crates.io/digest/0.9.0 \
    crate://crates.io/digest/0.10.3 \
    crate://crates.io/dir-diff/0.3.2 \
    crate://crates.io/dirs/4.0.0 \
    crate://crates.io/dirs-next/2.0.0 \
    crate://crates.io/dirs-sys/0.3.7 \
    crate://crates.io/dirs-sys-next/0.1.2 \
    crate://crates.io/dlopen/0.1.8 \
    crate://crates.io/dlopen_derive/0.1.4 \
    crate://crates.io/dlv-list/0.3.0 \
    crate://crates.io/ed25519/1.5.2 \
    crate://crates.io/ed25519-dalek/1.0.1 \
    crate://crates.io/ed25519-dalek-bip32/0.1.1 \
    crate://crates.io/either/1.7.0 \
    crate://crates.io/encode_unicode/0.3.6 \
    crate://crates.io/encoding_rs/0.8.31 \
    crate://crates.io/env_logger/0.9.0 \
    crate://crates.io/ethabi/16.0.0 \
    crate://crates.io/ethbloom/0.11.1 \
    crate://crates.io/ethereum-types/0.12.1 \
    crate://crates.io/failure/0.1.8 \
    crate://crates.io/failure_derive/0.1.8 \
    crate://crates.io/fastrand/1.8.0 \
    crate://crates.io/feature-probe/0.1.1 \
    crate://crates.io/filetime/0.2.17 \
    crate://crates.io/fixed-hash/0.7.0 \
    crate://crates.io/flate2/1.0.24 \
    crate://crates.io/fnv/1.0.7 \
    crate://crates.io/foreign-types/0.3.2 \
    crate://crates.io/foreign-types-shared/0.1.1 \
    crate://crates.io/form_urlencoded/1.0.1 \
    crate://crates.io/fs_extra/1.2.0 \
    crate://crates.io/funty/1.1.0 \
    crate://crates.io/funty/2.0.0 \
    crate://crates.io/futures/0.3.21 \
    crate://crates.io/futures-channel/0.3.21 \
    crate://crates.io/futures-core/0.3.21 \
    crate://crates.io/futures-executor/0.3.21 \
    crate://crates.io/futures-io/0.3.21 \
    crate://crates.io/futures-macro/0.3.21 \
    crate://crates.io/futures-sink/0.3.21 \
    crate://crates.io/futures-task/0.3.21 \
    crate://crates.io/futures-timer/3.0.2 \
    crate://crates.io/futures-util/0.3.21 \
    crate://crates.io/generic-array/0.14.6 \
    crate://crates.io/gethostname/0.2.3 \
    crate://crates.io/getrandom/0.1.16 \
    crate://crates.io/getrandom/0.2.7 \
    crate://crates.io/gimli/0.26.2 \
    crate://crates.io/glob/0.3.0 \
    crate://crates.io/h2/0.3.13 \
    crate://crates.io/hashbrown/0.11.2 \
    crate://crates.io/hashbrown/0.12.3 \
    crate://crates.io/headers/0.3.7 \
    crate://crates.io/headers-core/0.2.0 \
    crate://crates.io/heck/0.3.3 \
    crate://crates.io/heck/0.4.0 \
    crate://crates.io/hermit-abi/0.1.19 \
    crate://crates.io/hex/0.4.3 \
    crate://crates.io/hidapi/1.4.1 \
    crate://crates.io/hmac/0.8.1 \
    crate://crates.io/hmac/0.9.0 \
    crate://crates.io/hmac/0.11.0 \
    crate://crates.io/hmac/0.12.1 \
    crate://crates.io/hmac-drbg/0.3.0 \
    crate://crates.io/http/0.2.8 \
    crate://crates.io/http-body/0.4.5 \
    crate://crates.io/httparse/1.7.1 \
    crate://crates.io/httpdate/1.0.2 \
    crate://crates.io/humantime/2.1.0 \
    crate://crates.io/hyper/0.14.20 \
    crate://crates.io/hyper-rustls/0.23.0 \
    crate://crates.io/hyper-tls/0.5.0 \
    crate://crates.io/ident_case/1.0.1 \
    crate://crates.io/idna/0.2.3 \
    crate://crates.io/impl-codec/0.5.1 \
    crate://crates.io/impl-codec/0.6.0 \
    crate://crates.io/impl-rlp/0.3.0 \
    crate://crates.io/impl-serde/0.3.2 \
    crate://crates.io/impl-trait-for-tuples/0.2.2 \
    crate://crates.io/index_list/0.2.7 \
    crate://crates.io/indexmap/1.9.1 \
    crate://crates.io/indicatif/0.16.2 \
    crate://crates.io/ini/1.3.0 \
    crate://crates.io/instant/0.1.12 \
    crate://crates.io/ipnet/2.5.0 \
    crate://crates.io/itertools/0.10.3 \
    crate://crates.io/itoa/1.0.3 \
    crate://crates.io/jobserver/0.1.24 \
    crate://crates.io/js-sys/0.3.59 \
    crate://crates.io/jsonrpc-core/18.0.0 \
    crate://crates.io/jsonwebkey/0.3.5 \
    crate://crates.io/keccak/0.1.2 \
    crate://crates.io/lazy_static/1.4.0 \
    crate://crates.io/libc/0.2.127 \
    crate://crates.io/libflate/1.2.0 \
    crate://crates.io/libflate_lz77/1.1.0 \
    crate://crates.io/libloading/0.7.3 \
    crate://crates.io/libm/0.2.3 \
    crate://crates.io/libsecp256k1/0.6.0 \
    crate://crates.io/libsecp256k1-core/0.2.2 \
    crate://crates.io/libsecp256k1-gen-ecmult/0.2.1 \
    crate://crates.io/libsecp256k1-gen-genmult/0.2.1 \
    crate://crates.io/linked-hash-map/0.5.6 \
    crate://crates.io/lock_api/0.4.7 \
    crate://crates.io/log/0.4.17 \
    crate://crates.io/matchers/0.1.0 \
    crate://crates.io/matches/0.1.9 \
    crate://crates.io/maybe-async/0.2.6 \
    crate://crates.io/md5/0.7.0 \
    crate://crates.io/memchr/2.5.0 \
    crate://crates.io/memmap2/0.5.5 \
    crate://crates.io/memoffset/0.6.5 \
    crate://crates.io/mime/0.3.16 \
    crate://crates.io/mime_guess/2.0.4 \
    crate://crates.io/minidom/0.14.0 \
    crate://crates.io/miniz_oxide/0.5.3 \
    crate://crates.io/mio/0.8.4 \
    crate://crates.io/mpl-candy-machine/4.4.0 \
    crate://crates.io/mpl-token-metadata/1.3.6 \
    crate://crates.io/mpl-token-vault/0.1.1 \
    crate://crates.io/native-tls/0.2.10 \
    crate://crates.io/nix/0.23.1 \
    crate://crates.io/nix/0.24.2 \
    crate://crates.io/num-bigint/0.2.6 \
    crate://crates.io/num-bigint/0.4.3 \
    crate://crates.io/num-bigint-dig/0.8.1 \
    crate://crates.io/num-derive/0.3.3 \
    crate://crates.io/num-integer/0.1.45 \
    crate://crates.io/num-iter/0.1.43 \
    crate://crates.io/num-traits/0.2.15 \
    crate://crates.io/num_cpus/1.13.1 \
    crate://crates.io/num_enum/0.5.7 \
    crate://crates.io/num_enum_derive/0.5.7 \
    crate://crates.io/num_threads/0.1.6 \
    crate://crates.io/number_prefix/0.4.0 \
    crate://crates.io/object/0.29.0 \
    crate://crates.io/once_cell/1.13.0 \
    crate://crates.io/opaque-debug/0.3.0 \
    crate://crates.io/openssl/0.10.41 \
    crate://crates.io/openssl-macros/0.1.0 \
    crate://crates.io/openssl-probe/0.1.5 \
    crate://crates.io/openssl-sys/0.9.75 \
    crate://crates.io/ordered-multimap/0.4.3 \
    crate://crates.io/os_str_bytes/6.2.0 \
    crate://crates.io/ouroboros/0.13.0 \
    crate://crates.io/ouroboros_macro/0.13.0 \
    crate://crates.io/parity-scale-codec/2.3.1 \
    crate://crates.io/parity-scale-codec/3.1.5 \
    crate://crates.io/parity-scale-codec-derive/2.3.1 \
    crate://crates.io/parity-scale-codec-derive/3.1.3 \
    crate://crates.io/parking_lot/0.11.2 \
    crate://crates.io/parking_lot/0.12.1 \
    crate://crates.io/parking_lot_core/0.8.5 \
    crate://crates.io/parking_lot_core/0.9.3 \
    crate://crates.io/pbkdf2/0.4.0 \
    crate://crates.io/pbkdf2/0.9.0 \
    crate://crates.io/pem-rfc7468/0.3.1 \
    crate://crates.io/percent-encoding/2.1.0 \
    crate://crates.io/phf/0.10.1 \
    crate://crates.io/phf_generator/0.10.0 \
    crate://crates.io/phf_macros/0.10.0 \
    crate://crates.io/phf_shared/0.10.0 \
    crate://crates.io/pin-project/1.0.11 \
    crate://crates.io/pin-project-internal/1.0.11 \
    crate://crates.io/pin-project-lite/0.2.9 \
    crate://crates.io/pin-utils/0.1.0 \
    crate://crates.io/pipe/0.4.0 \
    crate://crates.io/pkcs1/0.3.3 \
    crate://crates.io/pkcs8/0.8.0 \
    crate://crates.io/pkg-config/0.3.25 \
    crate://crates.io/ppv-lite86/0.2.16 \
    crate://crates.io/primitive-types/0.10.1 \
    crate://crates.io/primitive-types/0.11.1 \
    crate://crates.io/proc-macro-crate/0.1.5 \
    crate://crates.io/proc-macro-crate/1.2.1 \
    crate://crates.io/proc-macro-error/1.0.4 \
    crate://crates.io/proc-macro-error-attr/1.0.4 \
    crate://crates.io/proc-macro-hack/0.5.19 \
    crate://crates.io/proc-macro2/0.4.30 \
    crate://crates.io/proc-macro2/1.0.43 \
    crate://crates.io/proc-macro2-diagnostics/0.9.1 \
    crate://crates.io/qstring/0.7.2 \
    crate://crates.io/quick-xml/0.22.0 \
    crate://crates.io/quote/0.6.13 \
    crate://crates.io/quote/1.0.21 \
    crate://crates.io/radium/0.6.2 \
    crate://crates.io/radium/0.7.0 \
    crate://crates.io/rand/0.7.3 \
    crate://crates.io/rand/0.8.5 \
    crate://crates.io/rand_chacha/0.2.2 \
    crate://crates.io/rand_chacha/0.3.1 \
    crate://crates.io/rand_core/0.5.1 \
    crate://crates.io/rand_core/0.6.3 \
    crate://crates.io/rand_hc/0.2.0 \
    crate://crates.io/rayon/1.5.3 \
    crate://crates.io/rayon-core/1.9.3 \
    crate://crates.io/redox_syscall/0.2.16 \
    crate://crates.io/redox_users/0.4.3 \
    crate://crates.io/regex/1.6.0 \
    crate://crates.io/regex-automata/0.1.10 \
    crate://crates.io/regex-syntax/0.6.27 \
    crate://crates.io/remove_dir_all/0.5.3 \
    crate://crates.io/reqwest/0.11.11 \
    crate://crates.io/retry/1.3.1 \
    crate://crates.io/ring/0.16.20 \
    crate://crates.io/rle-decode-fast/1.0.3 \
    crate://crates.io/rlp/0.5.1 \
    crate://crates.io/rpassword/5.0.1 \
    crate://crates.io/rsa/0.6.1 \
    crate://crates.io/rust-ini/0.18.0 \
    crate://crates.io/rust-s3/0.31.0 \
    crate://crates.io/rustc-demangle/0.1.21 \
    crate://crates.io/rustc-hash/1.1.0 \
    crate://crates.io/rustc-hex/2.1.0 \
    crate://crates.io/rustc_version/0.4.0 \
    crate://crates.io/rustls/0.20.6 \
    crate://crates.io/rustls-pemfile/1.0.1 \
    crate://crates.io/rustversion/1.0.9 \
    crate://crates.io/ryu/1.0.11 \
    crate://crates.io/same-file/1.0.6 \
    crate://crates.io/schannel/0.1.20 \
    crate://crates.io/scopeguard/1.1.0 \
    crate://crates.io/sct/0.7.0 \
    crate://crates.io/secp256k1/0.21.3 \
    crate://crates.io/secp256k1/0.22.1 \
    crate://crates.io/secp256k1-sys/0.4.2 \
    crate://crates.io/secp256k1-sys/0.5.2 \
    crate://crates.io/security-framework/2.6.1 \
    crate://crates.io/security-framework-sys/2.6.1 \
    crate://crates.io/semver/1.0.13 \
    crate://crates.io/serde/1.0.142 \
    crate://crates.io/serde-xml-rs/0.5.1 \
    crate://crates.io/serde_bytes/0.11.7 \
    crate://crates.io/serde_derive/1.0.142 \
    crate://crates.io/serde_json/1.0.83 \
    crate://crates.io/serde_urlencoded/0.7.1 \
    crate://crates.io/serde_yaml/0.8.26 \
    crate://crates.io/sha-1/0.9.8 \
    crate://crates.io/sha-1/0.10.0 \
    crate://crates.io/sha2/0.9.9 \
    crate://crates.io/sha2/0.10.2 \
    crate://crates.io/sha3/0.9.1 \
    crate://crates.io/shank/0.0.4 \
    crate://crates.io/shank_macro/0.0.4 \
    crate://crates.io/shank_macro_impl/0.0.4 \
    crate://crates.io/sharded-slab/0.1.4 \
    crate://crates.io/shellexpand/2.1.2 \
    crate://crates.io/signal-hook-registry/1.4.0 \
    crate://crates.io/signature/1.5.0 \
    crate://crates.io/siphasher/0.3.10 \
    crate://crates.io/slab/0.4.7 \
    crate://crates.io/smallvec/1.9.0 \
    crate://crates.io/socket2/0.4.4 \
    crate://crates.io/soketto/0.7.1 \
    crate://crates.io/sol-did/0.2.0 \
    crate://crates.io/solana-account-decoder/1.9.20 \
    crate://crates.io/solana-address-lookup-table-program/1.9.20 \
    crate://crates.io/solana-bloom/1.9.20 \
    crate://crates.io/solana-bucket-map/1.9.20 \
    crate://crates.io/solana-clap-utils/1.9.20 \
    crate://crates.io/solana-cli-config/1.9.20 \
    crate://crates.io/solana-client/1.9.20 \
    crate://crates.io/solana-compute-budget-program/1.9.20 \
    crate://crates.io/solana-config-program/1.9.20 \
    crate://crates.io/solana-faucet/1.9.20 \
    crate://crates.io/solana-frozen-abi/1.9.20 \
    crate://crates.io/solana-frozen-abi-macro/1.9.20 \
    crate://crates.io/solana-gateway/0.2.2 \
    crate://crates.io/solana-logger/1.9.20 \
    crate://crates.io/solana-measure/1.9.20 \
    crate://crates.io/solana-metrics/1.9.20 \
    crate://crates.io/solana-net-utils/1.9.20 \
    crate://crates.io/solana-perf/1.9.20 \
    crate://crates.io/solana-program/1.9.20 \
    crate://crates.io/solana-program-runtime/1.9.20 \
    crate://crates.io/solana-rayon-threadlimit/1.9.20 \
    crate://crates.io/solana-remote-wallet/1.9.20 \
    crate://crates.io/solana-runtime/1.9.20 \
    crate://crates.io/solana-sdk/1.9.20 \
    crate://crates.io/solana-sdk-macro/1.9.20 \
    crate://crates.io/solana-stake-program/1.9.20 \
    crate://crates.io/solana-transaction-crawler/0.0.4 \
    crate://crates.io/solana-transaction-status/1.9.20 \
    crate://crates.io/solana-version/1.9.20 \
    crate://crates.io/solana-vote-program/1.9.20 \
    crate://crates.io/spin/0.5.2 \
    crate://crates.io/spki/0.5.4 \
    crate://crates.io/spl-associated-token-account/1.0.3 \
    crate://crates.io/spl-memo/3.0.1 \
    crate://crates.io/spl-token/3.2.0 \
    crate://crates.io/stable_deref_trait/1.2.0 \
    crate://crates.io/static_assertions/1.1.0 \
    crate://crates.io/strsim/0.8.0 \
    crate://crates.io/strsim/0.10.0 \
    crate://crates.io/strum/0.18.0 \
    crate://crates.io/strum_macros/0.18.0 \
    crate://crates.io/subtle/2.4.1 \
    crate://crates.io/symlink/0.1.0 \
    crate://crates.io/syn/0.15.44 \
    crate://crates.io/syn/1.0.99 \
    crate://crates.io/synstructure/0.12.6 \
    crate://crates.io/tap/1.0.1 \
    crate://crates.io/tar/0.4.38 \
    crate://crates.io/tempfile/3.3.0 \
    crate://crates.io/termcolor/1.1.3 \
    crate://crates.io/terminal_size/0.1.17 \
    crate://crates.io/textwrap/0.11.0 \
    crate://crates.io/textwrap/0.15.0 \
    crate://crates.io/thiserror/1.0.32 \
    crate://crates.io/thiserror-impl/1.0.32 \
    crate://crates.io/thread_local/1.1.4 \
    crate://crates.io/time/0.1.44 \
    crate://crates.io/time/0.3.12 \
    crate://crates.io/time-macros/0.2.4 \
    crate://crates.io/tiny-bip39/0.8.2 \
    crate://crates.io/tiny-keccak/2.0.2 \
    crate://crates.io/tinyvec/1.6.0 \
    crate://crates.io/tinyvec_macros/0.1.0 \
    crate://crates.io/tokio/1.20.1 \
    crate://crates.io/tokio-macros/1.8.0 \
    crate://crates.io/tokio-native-tls/0.3.0 \
    crate://crates.io/tokio-rustls/0.23.4 \
    crate://crates.io/tokio-stream/0.1.9 \
    crate://crates.io/tokio-util/0.6.10 \
    crate://crates.io/tokio-util/0.7.3 \
    crate://crates.io/toml/0.5.9 \
    crate://crates.io/tower-service/0.3.2 \
    crate://crates.io/tracing/0.1.36 \
    crate://crates.io/tracing-attributes/0.1.22 \
    crate://crates.io/tracing-bunyan-formatter/0.3.3 \
    crate://crates.io/tracing-core/0.1.29 \
    crate://crates.io/tracing-log/0.1.3 \
    crate://crates.io/tracing-subscriber/0.3.15 \
    crate://crates.io/try-lock/0.2.3 \
    crate://crates.io/tungstenite/0.16.0 \
    crate://crates.io/typed-builder/0.5.1 \
    crate://crates.io/typenum/1.15.0 \
    crate://crates.io/uint/0.9.3 \
    crate://crates.io/unicase/2.6.0 \
    crate://crates.io/unicode-bidi/0.3.8 \
    crate://crates.io/unicode-ident/1.0.3 \
    crate://crates.io/unicode-normalization/0.1.21 \
    crate://crates.io/unicode-segmentation/1.9.0 \
    crate://crates.io/unicode-width/0.1.9 \
    crate://crates.io/unicode-xid/0.1.0 \
    crate://crates.io/unicode-xid/0.2.3 \
    crate://crates.io/untrusted/0.7.1 \
    crate://crates.io/uriparse/0.6.4 \
    crate://crates.io/url/2.2.2 \
    crate://crates.io/utf-8/0.7.6 \
    crate://crates.io/uuid/0.8.2 \
    crate://crates.io/valuable/0.1.0 \
    crate://crates.io/vcpkg/0.2.15 \
    crate://crates.io/vec_map/0.8.2 \
    crate://crates.io/version_check/0.9.4 \
    crate://crates.io/walkdir/2.3.2 \
    crate://crates.io/want/0.3.0 \
    crate://crates.io/wasi/0.9.0+wasi-snapshot-preview1 \
    crate://crates.io/wasi/0.10.0+wasi-snapshot-preview1 \
    crate://crates.io/wasi/0.11.0+wasi-snapshot-preview1 \
    crate://crates.io/wasm-bindgen/0.2.82 \
    crate://crates.io/wasm-bindgen-backend/0.2.82 \
    crate://crates.io/wasm-bindgen-futures/0.4.32 \
    crate://crates.io/wasm-bindgen-macro/0.2.82 \
    crate://crates.io/wasm-bindgen-macro-support/0.2.82 \
    crate://crates.io/wasm-bindgen-shared/0.2.82 \
    crate://crates.io/web-sys/0.3.59 \
    crate://crates.io/web3/0.18.0 \
    crate://crates.io/web3-async-native-tls/0.4.0 \
    crate://crates.io/webpki/0.22.0 \
    crate://crates.io/webpki-roots/0.22.4 \
    crate://crates.io/wildmatch/2.1.1 \
    crate://crates.io/winapi/0.3.9 \
    crate://crates.io/winapi-i686-pc-windows-gnu/0.4.0 \
    crate://crates.io/winapi-util/0.1.5 \
    crate://crates.io/winapi-x86_64-pc-windows-gnu/0.4.0 \
    crate://crates.io/windows-sys/0.36.1 \
    crate://crates.io/windows_aarch64_msvc/0.36.1 \
    crate://crates.io/windows_i686_gnu/0.36.1 \
    crate://crates.io/windows_i686_msvc/0.36.1 \
    crate://crates.io/windows_x86_64_gnu/0.36.1 \
    crate://crates.io/windows_x86_64_msvc/0.36.1 \
    crate://crates.io/winreg/0.10.1 \
    crate://crates.io/wyz/0.2.0 \
    crate://crates.io/wyz/0.5.0 \
    crate://crates.io/xattr/0.2.3 \
    crate://crates.io/xml-rs/0.8.4 \
    crate://crates.io/yaml-rust/0.4.5 \
    crate://crates.io/yansi/0.5.1 \
    crate://crates.io/yasna/0.4.0 \
    crate://crates.io/zerocopy/0.3.0 \
    crate://crates.io/zerocopy-derive/0.2.0 \
    crate://crates.io/zeroize/1.5.7 \
    crate://crates.io/zeroize_derive/1.3.2 \
    crate://crates.io/zstd/0.9.2+zstd.1.5.1 \
    crate://crates.io/zstd-safe/4.1.3+zstd.1.5.1 \
    crate://crates.io/zstd-sys/1.6.2+zstd.1.5.1 \
"