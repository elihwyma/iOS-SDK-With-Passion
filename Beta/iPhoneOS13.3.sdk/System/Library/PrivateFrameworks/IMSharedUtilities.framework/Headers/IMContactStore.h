/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@class CNContact, CNContactStore, NSArray, NSData, NSDictionary, NSMutableDictionary;

@interface IMContactStore : NSObject

{
    _Bool _batchFetchingForLaunchCompleted;
    CNContactStore *_contactStore;
    NSData *_changeHistoryToken;
    NSDictionary *_handleIDToCNIDMap;
    NSMutableDictionary *_CNIDToHandleIDsMap;
    NSMutableDictionary *_IDToCNContactMap;
    double _lastContactStoreSync;
    double _lastMeContactStoreSync;
    CNContact *_meContact;
    NSArray *_CNIDsForBatchFetch;
}

@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) NSData *changeHistoryToken;
@property (retain, nonatomic) NSDictionary *handleIDToCNIDMap;
@property (retain, nonatomic) NSMutableDictionary *CNIDToHandleIDsMap;
@property (retain, nonatomic) NSMutableDictionary *IDToCNContactMap;
@property (nonatomic) _Bool batchFetchingForLaunchCompleted;
@property (nonatomic) double lastContactStoreSync;
@property (nonatomic) double lastMeContactStoreSync;
@property (retain, nonatomic) CNContact *meContact;
@property (retain, nonatomic) NSArray *CNIDsForBatchFetch;

- (id)init;
- (void)dealloc;
- (void)handleDropEverythingEvent;
- (id)getContactForID:(id)arg1;
- (id)handleIDsForCNID:(id)arg1;
- (id)getAllKeysFromIDToCNContactMap;
- (void)replaceContact:(id)arg1 withID:(id)arg2;
- (void)replaceWithMutableContactForID:(id)arg1;
- (id)fetchCNContactForHandleWithID:(id)arg1;
- (id)initWithContactStore:(id)arg1;
- (void)contactStoreChanged:(id)arg1;
- (void)meCardChanged:(id)arg1;
- (void)addEntriesToIDToCNContactMap:(id)arg1;
- (void)cacheBatchFetchResults:(id)arg1 handleIDsWithoutCNID:(id)arg2;
- (void)setBatchFetchingCompleted;
- (void)addContact:(id)arg1 withID:(id)arg2;
- (id)fetchCNContactForHandleID:(id)arg1 withKeys:(id)arg2;
- (void)generateCNIDToHandleIDMap;
- (_Bool)isBatchFetchingForLaunchCompleted;
- (void)checkForContactStoreChanges;
- (void)resetMeCard;
- (id)fetchMeContactWithKeys:(id)arg1;
- (id)getContactStore;
- (void)fetchCNContactsForHandlesWithIDs:(id)arg1 isFinalBatch:(_Bool)arg2;
- (id)completedContact:(id)arg1 withKeys:(id)arg2;
- (_Bool)isContactWithIDAlreadyFetched:(id)arg1;
- (void)removeContactWithID:(id)arg1;

@end
