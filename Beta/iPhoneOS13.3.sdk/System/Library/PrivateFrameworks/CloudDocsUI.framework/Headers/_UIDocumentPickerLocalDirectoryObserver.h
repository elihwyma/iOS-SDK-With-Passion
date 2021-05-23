/*
 Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

#import <UIKit/_UIArrayController.h>

@class NSArray, NSDate, NSMutableDictionary, NSObject, NSOperationQueue, NSOrderedSet, NSPredicate, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerLocalDirectoryObserver : _UIArrayController

{
    NSArray *_sortDescriptors;
    NSOrderedSet *_staticItems;
    NSPredicate *_queryPredicate;
    NSObject<OS_dispatch_queue> *_queryDispatchQueue;
    NSArray *_sources;
    NSMutableDictionary *_resultsForSources;
    _Bool _updateScheduled;
    _Bool _afterInitialUpdate;
    NSDate *_lastSnapshotDate;
    NSOperationQueue *_queryWorkerQueue;
}

@property (retain, nonatomic) NSDate *lastSnapshotDate;
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
- (void)initialUpdate;
- (id)isVisiblePredicate;
- (id)initWithScopes:(id)arg1 delegate:(id)arg2;
- (void)updateResultsForSource:(id)arg1;
- (id)gatherResultsForSource:(id)arg1;
- (id)gatherResults;
- (void)dispatchSourceDidReceiveEvent:(id)arg1;

@end
