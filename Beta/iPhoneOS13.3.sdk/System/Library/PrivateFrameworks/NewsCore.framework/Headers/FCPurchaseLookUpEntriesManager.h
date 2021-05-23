/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCKeyValueStore, NSDictionary, NSMutableDictionary;

@interface FCPurchaseLookUpEntriesManager : NSObject

{
    FCKeyValueStore *_localStore;
    NSMutableDictionary *_entriesByTagID;
}

@property (retain, nonatomic) FCKeyValueStore *localStore;
@property (retain, nonatomic) NSMutableDictionary *entriesByTagID;
@property (nonatomic, readonly) NSDictionary *lookupEntriesByTagID;

- (void)removeAllEntries;
- (void)removeEntry:(id)arg1;
- (void)loadLocalCachesFromStore;
- (id)initWithLocalStore:(id)arg1;
- (void)addEntryWithTagID:(id)arg1 purchaseID:(id)arg2 lastVerificationTime:(id)arg3 lastVerificationFailureTime:(id)arg4 purchaseType:(unsigned long long)arg5 purchaseValidationState:(unsigned long long)arg6 isNewsAppPurchase:(_Bool)arg7 dateOfExpiration:(id)arg8 hasShownRenewalNotice:(_Bool)arg9;
- (void)updateEntry:(id)arg1;
- (void)removeEntryForTagID:(id)arg1;
- (id)_purchaseLookUpEntryIDForTagID:(id)arg1;

@end
