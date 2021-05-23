/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

#import <WorkflowKit/Swift-Protocol.h>

@class NSArray, NSData, NSString, NSURL, RLMSchema;

@interface RLMRealmConfiguration : NSObject <Swift>

{
    struct Config {
        struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> path;
        struct BinaryData realm_data;
        struct vector<char, std::__1::allocator<char>> encryption_key;
        struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> fifo_files_fallback_path;
        _Bool in_memory;
        unsigned char schema_mode;
        struct Optional<realm::Schema> schema;
        unsigned long long schema_version;
        struct function<void (std::__1::shared_ptr<realm::Realm>, std::__1::shared_ptr<realm::Realm>, realm::Schema &)> migration_function;
        struct function<void (std::__1::shared_ptr<realm::Realm>)> initialization_function;
        struct function<bool (unsigned long long, unsigned long long)> should_compact_on_launch_function;
        _Bool cache;
        _Bool disable_format_upgrade;
        _Bool automatic_change_notifications;
        struct Optional<unsigned long> execution_context;
        struct shared_ptr<realm::SyncConfig> sync_config;
        _Bool force_sync_history;
        struct function<std::__1::shared_ptr<realm::AuditInterface>()> audit_factory;
    } _config;
    _Bool _cache;
    _Bool _dynamic;
    CDUnknownBlockType _migrationBlock;
    CDUnknownBlockType _shouldCompactOnLaunch;
    RLMSchema *_customSchema;
    NSString *_pathOnDisk;
}

@property (nonatomic, readonly) NSArray *allRealmFileURLs;
@property (nonatomic) _Bool cache;
@property (nonatomic) _Bool dynamic;
@property (nonatomic) _Bool disableFormatUpgrade;
@property (copy, nonatomic) RLMSchema *customSchema;
@property (copy, nonatomic) NSString *pathOnDisk;
@property (copy, nonatomic) NSURL *fileURL;
@property (copy, nonatomic) NSString *inMemoryIdentifier;
@property (copy, nonatomic) NSData *encryptionKey;
@property (nonatomic) _Bool readOnly;
@property (nonatomic) unsigned long long schemaVersion;
@property (copy, nonatomic) CDUnknownBlockType migrationBlock;
@property (nonatomic) _Bool deleteRealmIfMigrationNeeded;
@property (copy, nonatomic) CDUnknownBlockType shouldCompactOnLaunch;
@property (copy, nonatomic) NSArray *objectClasses;

+ (id)defaultConfiguration;
+ (void)setDefaultConfiguration:(id)arg1;
+ (id)rawDefaultConfiguration;
+ (void)resetRealmConfigurationState;
+ (id)wf_appStoreShortcutsConfiguration;
+ (id)wf_workflowConfiguration;
+ (id)wf_inMemoryConfiguration;
+ (id)wf_shortcutsDirectoryURL;
+ (id)wf_configurationWithDirectoryURL:(id)arg1 filename:(id)arg2;
+ (id)wf_configurationWithAppGroupIdentifier:(id)arg1 filename:(id)arg2;
+ (id)wf_inMemoryConfigurationWithIdentifier:(id)arg1;
+ (id)wf_systemShortcutsConfiguration;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct Config *)config;
- (id).cxx_construct;
- (unsigned char)schemaMode;
- (void)setSchemaMode:(unsigned char)arg1;
- (void)setCustomSchemaWithoutCopying:(id)arg1;
- (id)syncConfiguration;

@end
