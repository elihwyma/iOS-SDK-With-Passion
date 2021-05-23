/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSString, NSUbiquitousKeyValueStore;

@interface WBSEncryptedCloudKeyValueStore : NSObject

{
    id _accountUpdateObserver;
    NSString *_dsid;
    struct RetainPtr<_PCSIdentitySetData *> _pcsIdentitySet;
    struct RetainPtr<_OpaquePCSShareProtection *> _pcsShareProtection;
    struct RetainPtr<const __CFData *> _serializedPCSObject;
    NSUbiquitousKeyValueStore *_backingStore;
}

@property (nonatomic, readonly) NSUbiquitousKeyValueStore *backingStore;

+ (id)defaultStore;
+ (id)additionalStoreWithIdentifier:(id)arg1;

- (void)dealloc;
- (void)synchronize;
- (void)removeObjectForKey:(id)arg1;
- (id)dictionaryRepresentation;
- (id)arrayForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (void)synchronizeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setArray:(id)arg1 forKey:(id)arg2;
- (void)setDictionary:(id)arg1 forKey:(id)arg2;
- (id)initWithStore:(id)arg1;
- (id).cxx_construct;
- (void)_setObject:(id)arg1 forKey:(id)arg2;
- (id)_dsidForPrimaryAccount;
- (int)_currentPCSConfiguration;
- (id)decryptEntry:(id)arg1;
- (id)encryptPropertyList:(id)arg1;
- (id)_objectForKey:(id)arg1 ofClass:(Class)arg2;

@end
