/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSPersistentHistoryToken, NSPersistentStore, NSString;

__attribute__((visibility("hidden")))
@interface NSCloudKitMirroringDelegatePreJazzkonMetadata : NSObject

{
    NSPersistentStore *_store;
    _Bool _loaded;
    _Bool _hasChanges;
    _Bool _hasInitializedZone;
    _Bool _hasInitializedZoneSubscription;
    _Bool _hasInitializedDatabaseSubscription;
    NSString *_ckIdentityRecordName;
    _Bool _hasCheckedCKIdentity;
    NSDictionary *_keyToPreviousServerChangeToken;
    NSPersistentHistoryToken *_lastHistoryToken;
}

@property (weak, nonatomic, readonly) NSPersistentStore *store;
@property (nonatomic, readonly) NSDictionary *keyToPreviousServerChangeToken;
@property (nonatomic, readonly) _Bool loaded;
@property (nonatomic, readonly) _Bool hasChanges;
@property (nonatomic) _Bool hasInitializedZone;
@property (nonatomic) _Bool hasInitializedZoneSubscription;
@property (nonatomic) _Bool hasInitializedDatabaseSubscription;
@property (retain, nonatomic, setter=setCKIdentityRecordName:) NSString *ckIdentityRecordName;
@property (nonatomic) _Bool hasCheckedCKIdentity;
@property (retain, nonatomic) NSPersistentHistoryToken *lastHistoryToken;

+ (id)allDefaultsKeys;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithStore:(id)arg1;
- (_Bool)save:(id *)arg1;
- (_Bool)load:(id *)arg1;
- (id)changeTokenForDatabaseScope:(long long)arg1;
- (id)changeTokenForZoneWithID:(id)arg1 inDatabaseWithScope:(long long)arg2;
- (_Bool)safeString:(id)arg1 isEqualToString:(id)arg2;
- (_Bool)safeDictionary:(id)arg1 isEqualToDictionary:(id)arg2;
- (id)_keyForZoneWithID:(id)arg1 inDatabase:(id)arg2;
- (id)_keyForZoneName:(id)arg1 owner:(id)arg2 databseScope:(long long)arg3;
- (id)_keyForDatabase:(id)arg1;
- (id)_keyForDatabaseScope:(long long)arg1;
- (void)_setChangeToken:(id)arg1 forKey:(id)arg2;
- (_Bool)updateStoreMetadata:(id *)arg1;
- (id)cliDescription;
- (id)changeTokenForZoneWithID:(id)arg1 inDatabase:(id)arg2;
- (id)changeTokenForDatabase:(id)arg1;
- (void)setChangeToken:(id)arg1 forZoneWithID:(id)arg2 inDatabase:(id)arg3;
- (void)setChangeToken:(id)arg1 forDatabase:(id)arg2;
- (void)purgeCachedChangeTokens;
- (unsigned long long)countChangeTokens;

@end
