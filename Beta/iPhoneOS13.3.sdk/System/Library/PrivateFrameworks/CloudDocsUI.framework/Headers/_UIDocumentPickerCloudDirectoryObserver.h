/*
 Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

#import <UIKit/_UIArrayController.h>

@class NSArray, NSDate, NSMetadataQuery, NSObject, NSOperationQueue, NSOrderedSet, NSPredicate, NSString, NSURL;

@protocol OS_dispatch_queue;

@interface _UIDocumentPickerCloudDirectoryObserver : _UIArrayController

{
    NSOrderedSet *_staticItems;
    NSPredicate *_queryPredicate;
    NSURL *_firstURL;
    _Bool _recursive;
    _Bool _afterInitialUpdate;
    NSMetadataQuery *_query;
    NSArray *_scopes;
    NSDate *_lastSnapshotDate;
    NSObject<OS_dispatch_queue> *_queryQueue;
    NSOperationQueue *_queryWorkerQueue;
}

@property (retain, nonatomic) NSMetadataQuery *query;
@property (retain, nonatomic) NSArray *scopes;
@property (retain, nonatomic) NSDate *lastSnapshotDate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queryQueue;
@property (retain, nonatomic) NSOperationQueue *queryWorkerQueue;
@property (nonatomic) _Bool afterInitialUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSOrderedSet *staticItems;
@property (retain, nonatomic) NSPredicate *queryPredicate;

- (void)dealloc;
- (void)invalidate;
- (_Bool)objectAttributeModified:(id)arg1 newObject:(id)arg2;
- (void)callUpdateHandler:(id)arg1 changeDictionary:(id)arg2;
- (id)initWithRecursiveScopes:(id)arg1 delegate:(id)arg2;
- (id)isVisiblePredicate;
- (void)_updateQuery;
- (id)initWithScopes:(id)arg1 delegate:(id)arg2;
- (void)assertOnQueryQueue;
- (void)_initialGatherFinished:(id)arg1;
- (void)_updateObservers:(id)arg1;
- (void)_queryUpdated:(id)arg1;
- (id)_queryResultsWithChangedObjects:(id)arg1 changedResults:(id *)arg2;

@end
