/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection;

@protocol CNContactsLogger, CNXPCDataMapperService;

@interface CNXPCDataMapper : NSObject

{
    NSXPCConnection *_connection;
    id <CNContactsLogger> _logger;
    id <CNXPCDataMapperService> _serviceProxy;
}

@property (retain) NSXPCConnection *connection;
@property (retain, nonatomic) id <CNContactsLogger> logger;
@property (retain, nonatomic) id <CNXPCDataMapperService> serviceProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSString *legacyTetheredSyncDeviceAnchor;
@property (retain, nonatomic) NSString *legacyTetheredSyncComputerAnchor;

+ (id)serviceProtocolInterface;
+ (id)cursorProtocolInterface;
+ (id)contactBuffersDecoderForFetchRequest:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)currentHistoryToken;
- (id)changeHistoryWithFetchRequest:(id)arg1 error:(id *)arg2;
- (_Bool)executeChangeHistoryClearRequest:(id)arg1 error:(id *)arg2;
- (id)sectionListOffsetsForSortOrder:(long long)arg1 error:(id *)arg2;
- (id)unifiedContactCountWithError:(id *)arg1;
- (id)contactCountForFetchRequest:(id)arg1 error:(id *)arg2;
- (id)meContactIdentifiers:(id *)arg1;
- (id)groupsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)containersMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)defaultContainerIdentifier;
- (id)policyForContainerWithIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)setMeContact:(id)arg1 error:(id *)arg2;
- (_Bool)setMeContact:(id)arg1 forContainer:(id)arg2 error:(id *)arg3;
- (id)accountsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (_Bool)executeSaveRequest:(id)arg1 error:(id *)arg2;
- (id)executeFetchRequest:(id)arg1 progressiveResults:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)contactWithUserActivityUserInfo:(id)arg1 keysToFetch:(id)arg2;
- (id)userActivityUserInfoForContact:(id)arg1;
- (id)initWithContactsEnvironment:(id)arg1 managedConfiguration:(id)arg2;
- (id)initWithContactsEnvironment:(id)arg1 connection:(id)arg2;
- (void)requestAccessForEntityType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)requestAccessForEntityType:(long long)arg1 error:(id *)arg2;
- (id)remoteResultForSelector:(SEL)arg1 parameters:(id)arg2 error:(id *)arg3;
- (id)remoteResultForSelector:(SEL)arg1 error:(id *)arg2;
- (id)remoteResultForSelector:(SEL)arg1 query:(id)arg2 error:(id *)arg3;
- (_Bool)fetchAndDecodeEncodedContactsForFetchRequest:(id)arg1 error:(id *)arg2 cancelationToken:(id)arg3 batchHandler:(CDUnknownBlockType)arg4;
- (_Bool)fetchContactsForFetchRequest:(id)arg1 error:(id *)arg2 batchHandler:(CDUnknownBlockType)arg3;
- (_Bool)fetchEncodedContactsForFetchRequest:(id)arg1 error:(id *)arg2 cancelationToken:(id)arg3 batchHandler:(CDUnknownBlockType)arg4;
- (_Bool)executeSaveRequest:(id)arg1 response:(id *)arg2 authorizationContext:(id)arg3 error:(id *)arg4;
- (id)remoteResultForSelector:(SEL)arg1 query:(id)arg2 queryParameter:(id)arg3 error:(id *)arg4;
- (id)authorizedKeysForContactKeys:(id)arg1 error:(id *)arg2;
- (id)contactObservableForFetchRequest:(id)arg1;
- (id)identifierWithError:(id *)arg1;
- (_Bool)setBestMeIfNeededForGivenName:(id)arg1 familyName:(id)arg2 email:(id)arg3 error:(id *)arg4;
- (_Bool)registerChangeHistoryClientIdentifier:(id)arg1 forContainerIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)unregisterChangeHistoryClientIdentifier:(id)arg1 forContainerIdentifier:(id)arg2 error:(id *)arg3;
- (id)favoritesEntryDictionariesAtPath:(id)arg1 error:(id *)arg2;
- (_Bool)writeFavoritesPropertyListData:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
- (id)mapTableFromMatchInfoDictionary:(id)arg1;
- (_Bool)reindexSearchableItemsWithIdentifiers:(id)arg1 error:(id *)arg2;
- (id)verifyIndexWithError:(id *)arg1;

@end
