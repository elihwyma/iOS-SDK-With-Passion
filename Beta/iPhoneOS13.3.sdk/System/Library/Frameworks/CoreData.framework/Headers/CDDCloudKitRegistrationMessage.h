/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/CDDCloudKitMessage.h>

@class NSFileHandle, NSString;

__attribute__((visibility("hidden")))
@interface CDDCloudKitRegistrationMessage : CDDCloudKitMessage

{
    NSString *_bundleIdentifier;
    NSFileHandle *_storeFileHandle;
    NSString *_storePath;
    NSString *_storeFileProtectionClass;
    NSString *_storeType;
    NSString *_storeConfigurationName;
    NSString *_containerIdentifier;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSFileHandle *storeFileHandle;
@property (nonatomic, readonly) NSString *storePath;
@property (nonatomic, readonly) NSString *storeFileProtectionClass;
@property (nonatomic, readonly) NSString *storeType;
@property (nonatomic, readonly) NSString *storeConfigurationName;
@property (nonatomic, readonly) NSString *containerIdentifier;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileHandle:(id)arg1 forStoreWithDescription:(id)arg2 andBundleIdentifier:(id)arg3;

@end
