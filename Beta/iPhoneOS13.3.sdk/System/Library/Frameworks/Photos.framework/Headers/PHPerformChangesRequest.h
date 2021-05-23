/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <AssetsLibraryServices/PLXPCObject.h>

@class NSArray, NSMutableArray, NSMutableOrderedSet, NSOrderedSet, NSString;

@protocol PHPerformChangesRequestService;

@interface PHPerformChangesRequest : PLXPCObject

{
    _Bool _inService;
    id <PHPerformChangesRequestService> _service;
    NSMutableOrderedSet *_inserts;
    NSMutableOrderedSet *_updates;
    NSMutableOrderedSet *_deletes;
    NSMutableOrderedSet *_failedOnDemandRequests;
    NSMutableArray *_saveTokens;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) NSOrderedSet *inserts;
@property (nonatomic, readonly) NSOrderedSet *updates;
@property (nonatomic, readonly) NSOrderedSet *deletes;
@property (nonatomic, readonly) NSArray *saveTokens;
@property (nonatomic, readonly) NSArray *requestSets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (struct _xpc_type_s *)type;

- (void)removeAllObjects;
- (void)encodeWithCoder:(id)arg1;
- (id)persistentStoreCoordinator;
- (void)recordInsertRequest:(id)arg1;
- (void)recordUpdateRequest:(id)arg1;
- (void)recordDeleteRequest:(id)arg1;
- (id)uuidForSaveToken:(id)arg1;
- (void)recordSaveToken:(id)arg1;
- (void)recordFailedOnDemandRequest:(id)arg1;
- (void)notifyChangesTransactionFailedWithLibrary:(id)arg1 error:(id)arg2;
- (void)decodeWithService:(id)arg1 clientAuthorization:(id)arg2;

@end
