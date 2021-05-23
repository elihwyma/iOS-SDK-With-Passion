/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DACardDAV
 */

#import <DACardDAV/CardDAVVCardItem.h>

@class CNContactStore, NSData, NSMutableDictionary, NSNumber, NSString, NSURL;

@protocol DACardDAVRecord;

@interface CardDAVVCardItemCNImplementation : CardDAVVCardItem

{
    NSData *_dataPayload;
    id <DACardDAVRecord> _cardDAVRecordItem;
    NSString *_syncKey;
    NSMutableDictionary *_UUIDToPersonCache;
    NSURL *_serverID;
    NSNumber *_clientID;
    CNContactStore *_contactStore;
}

@property (retain, nonatomic) CNContactStore *contactStore;

+ (id)keysToFetch;

- (void)setClientID:(id)arg1;
- (id)clientID;
- (id)dataPayload;
- (id)serverID;
- (void)setServerID:(id)arg1;
- (id)syncKey;
- (void)setSyncKey:(id)arg1;
- (id)convertToDAContactSearchResultElement;
- (_Bool)loadLocalItemWithAccount:(id)arg1;
- (void)setDataPayload:(id)arg1;
- (void)setLocalItem:(void *)arg1;
- (id)initWithURL:(id)arg1 eTag:(id)arg2 dataPayload:(id)arg3 inContainerWithURL:(id)arg4 withAccountInfoProvider:(id)arg5;
- (_Bool)saveWithLocalObject:(void *)arg1 toContainer:(void *)arg2 shouldMergeProperties:(_Bool)arg3 outMergeDidChooseLocalProperties:(_Bool *)arg4 account:(id)arg5;
- (_Bool)saveServerIDToExistingItem;
- (_Bool)deleteFromContainer:(void *)arg1;
- (void)setCardDAVRecordItem:(id)arg1;
- (id)_localItemAsContact;
- (id)_contactFromDataPayload;
- (void)_setEmailAddress:(id)arg1 contact:(id)arg2;
- (void)_setStreetAddress:(id)arg1 contact:(id)arg2;
- (void)_setPhoneNumbers:(id)arg1 contact:(id)arg2;
- (void)_setInstantMessage:(id)arg1 contact:(id)arg2;
- (id)_containerForAccount:(id)arg1;
- (_Bool)_createContact:(id)arg1 inContainer:(id)arg2 databaseHelper:(id)arg3;
- (_Bool)_commitChangesToContact:(id)arg1 databaseHelper:(id)arg2;
- (id)cardDAVRecordItem;
- (id)initWithDACardDAVRecord:(id)arg1 contactStore:(id)arg2 outNeedsDBSave:(_Bool *)arg3 maxImageSize:(long long)arg4 maxResourceSize:(long long)arg5 inContainerWithURL:(id)arg6;
- (id)createOrphanedABRecordFromParsedVCardOutRecordType:(unsigned int *)arg1;
- (void)loadClientIDs;
- (unsigned long long)saveWithLocalObject:(id)arg1 toContainer:(id)arg2 containerURL:(id)arg3 shouldMergeProperties:(_Bool)arg4 outMergeDidChooseLocalProperties:(_Bool *)arg5 account:(id)arg6 shouldSaveGroups:(_Bool)arg7;
- (_Bool)saveIfGroupWithLocalObject:(id)arg1 toContainer:(id)arg2 shouldMergeProperties:(_Bool)arg3 outMergeDidChooseLocalProperties:(_Bool *)arg4 account:(id)arg5;
- (_Bool)deleteFromContainer:(void *)arg1 account:(id)arg2;
- (id)_localItemAsGroup;
- (id)UUIDToPersonCache;
- (void)setUUIDToPersonCache:(id)arg1;

@end
