/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class CKContainer, CKDatabase;

@interface WFCloudKitItemRequest : NSObject

{
    _Bool _performExpensiveFetchOperations;
    CKContainer *_container;
    CKDatabase *_database;
}

@property (nonatomic, readonly) CKContainer *container;
@property (nonatomic, readonly) CKDatabase *database;
@property (nonatomic) _Bool performExpensiveFetchOperations;

+ (void)hydrateItem:(id)arg1 withRecord:(id)arg2 setNilValues:(_Bool)arg3;
+ (id)createRecordFromItem:(id)arg1 zoneID:(id)arg2;
+ (void)hydrateItem:(id)arg1 withRecord:(id)arg2 resolvedReferences:(id)arg3 setNilValues:(_Bool)arg4;
+ (id)desiredKeysFromProperties:(id)arg1 itemType:(Class)arg2;
+ (void)assignRecordValue:(id)arg1 toItem:(id)arg2 withProperty:(id)arg3 resolvedReferences:(id)arg4;
+ (id)createRecordIDWithName:(id)arg1 zoneID:(id)arg2;
+ (id)itemValueForRecordValue:(id)arg1 item:(id)arg2 property:(id)arg3 resolvedReferences:(id)arg4;
+ (id)recordValueForItemValue:(id)arg1 item:(id)arg2 property:(id)arg3 recordKey:(id)arg4 zoneID:(id)arg5;

- (id)fetchConfigurationAssetWithType:(id)arg1 configuration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)fetchConfigurationAssetWithType:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithContainer:(id)arg1 database:(id)arg2;
- (id)fetchItemsWithPredicate:(id)arg1 itemType:(Class)arg2 groupName:(id)arg3 properties:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)fetchItemsWithPredicate:(id)arg1 itemType:(Class)arg2 groupName:(id)arg3 properties:(id)arg4 sortDescriptors:(id)arg5 resultsLimit:(unsigned long long)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (id)fetchItemWithID:(id)arg1 itemType:(Class)arg2 groupName:(id)arg3 properties:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)updateItems:(id)arg1 setNilValues:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)deleteItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createTaskCancelledError;
- (id)fetchRecordIDs:(id)arg1 desiredKeys:(id)arg2 operationGroup:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
