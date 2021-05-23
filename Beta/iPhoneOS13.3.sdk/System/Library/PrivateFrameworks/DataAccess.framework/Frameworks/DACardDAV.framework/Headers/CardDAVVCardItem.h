/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DACardDAV
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSMutableDictionary, NSNumber, NSString, NSURL;

@protocol DACardDAVRecord;

@interface CardDAVVCardItem : NSObject

{
    id <DACardDAVRecord> _cardDAVRecordItem;
}

@property (retain, nonatomic) NSURL *serverID;
@property (retain, nonatomic) NSNumber *clientID;
@property (nonatomic, readonly) NSData *dataPayload;
@property (nonatomic, readonly) id <DACardDAVRecord> cardDAVRecordItem;
@property (nonatomic, readonly) NSString *syncKey;
@property (retain, nonatomic) NSMutableDictionary *UUIDToPersonCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *childrenOrder;
@property (retain, nonatomic) NSURL *sourceURL;
@property (retain, nonatomic) NSURL *destinationURL;

+ (Class)currentImplementationClass;
+ (id)itemWithABRecord:(void *)arg1 addressBook:(void *)arg2 outNeedsDBSave:(_Bool *)arg3 maxImageSize:(long long)arg4 maxResourceSize:(long long)arg5 inContainerWithURL:(id)arg6;
+ (id)itemWithDACardDAVRecord:(id)arg1 contactStore:(id)arg2 outNeedsDBSave:(_Bool *)arg3 maxImageSize:(long long)arg4 maxResourceSize:(long long)arg5 inContainerWithURL:(id)arg6;

- (void *)abRecord;
- (id)convertToDAContactSearchResultElement;
- (_Bool)loadLocalItemWithAccount:(id)arg1;
- (void)setLocalItem:(void *)arg1;
- (id)initWithURL:(id)arg1 eTag:(id)arg2 dataPayload:(id)arg3 inContainerWithURL:(id)arg4 withAccountInfoProvider:(id)arg5;
- (_Bool)saveWithLocalObject:(void *)arg1 toContainer:(void *)arg2 shouldMergeProperties:(_Bool)arg3 outMergeDidChooseLocalProperties:(_Bool *)arg4 account:(id)arg5;
- (_Bool)saveServerIDToExistingItem;
- (_Bool)deleteFromContainer:(void *)arg1;
- (id)createOrphanedABRecordFromParsedVCardOutRecordType:(unsigned int *)arg1;
- (void)loadClientIDs;
- (unsigned long long)saveWithLocalObject:(id)arg1 toContainer:(id)arg2 containerURL:(id)arg3 shouldMergeProperties:(_Bool)arg4 outMergeDidChooseLocalProperties:(_Bool *)arg5 account:(id)arg6 shouldSaveGroups:(_Bool)arg7;
- (_Bool)saveIfGroupWithLocalObject:(id)arg1 toContainer:(id)arg2 shouldMergeProperties:(_Bool)arg3 outMergeDidChooseLocalProperties:(_Bool *)arg4 account:(id)arg5;
- (_Bool)deleteFromContainer:(void *)arg1 account:(id)arg2;
- (unsigned int)abRecordType;

@end
