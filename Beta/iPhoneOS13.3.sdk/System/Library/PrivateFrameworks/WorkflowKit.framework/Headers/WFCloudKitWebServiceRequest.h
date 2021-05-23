/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class CKContainer, CKDatabase;

@interface WFCloudKitWebServiceRequest : NSObject

{
    CKContainer *_container;
    CKDatabase *_database;
}

@property (nonatomic, readonly) CKContainer *container;
@property (nonatomic, readonly) CKDatabase *database;

- (id)databaseName;
- (id)initWithContainer:(id)arg1 database:(id)arg2;
- (id)fetchRecordsWithItemType:(Class)arg1 filter:(id)arg2 cacheKey:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)fetchProxiedRecordWithIdentifier:(id)arg1 possibleItemTypes:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)queryWithItemType:(Class)arg1 filter:(id)arg2;
- (id)postJSON:(id)arg1 toURL:(id)arg2 cacheKey:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)getJSONFromURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (unsigned long long)webServiceForRequestType:(unsigned long long)arg1;
- (id)pathComponentsForType:(unsigned long long)arg1 parameters:(id)arg2;
- (id)cloudKitEnvironment;
- (id)cloudKitAPIToken;
- (id)urlForType:(unsigned long long)arg1 parameters:(id)arg2;
- (id)recordsFromQueryResponse:(id)arg1;
- (id)extractRecordDictFromRecordIfNecessary:(id)arg1 recordType:(id)arg2;
- (void)parseRecord:(id)arg1 intoItem:(id)arg2 allKeys:(_Bool)arg3;

@end
