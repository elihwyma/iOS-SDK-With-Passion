/*
 Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface ACDKeychainItem : NSObject

{
    NSMutableDictionary *_properties;
    NSMutableSet *_dirtyProperties;
    const struct __CFData *_persistentRef;
}

@property (nonatomic, readonly) const struct __CFData *persistentRef;
@property (copy, nonatomic) NSString *account;
@property (copy, nonatomic) NSString *service;
@property (copy, nonatomic) NSString *accessGroup;
@property (copy, nonatomic) NSString *accessibility;
@property (nonatomic) _Bool synchronizable;
@property (nonatomic, readonly) struct __SecAccessControl *accessControlRef;
@property (copy, nonatomic) NSDictionary *metadata;
@property (nonatomic) long long version;

+ (id)new;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (_Bool)save:(id *)arg1;
- (void)_clearDirtyProperties;
- (void)_markPropertyDirty:(id)arg1;
- (void)reload;
- (void)_setValue:(id)arg1 forProperty:(id)arg2;
- (void)_reloadProperties;
- (id)initWithPersistentRef:(const struct __CFData *)arg1 properties:(id)arg2;
- (id)_modifiedProperties;
- (id)_metadataWithError:(id *)arg1;
- (_Bool)_setMetadata:(id)arg1 withError:(id *)arg2;
- (id)initWithPersistentRef:(const struct __CFData *)arg1;

@end
