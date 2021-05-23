/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSHashTable, NSPredicate, WFDatabase;

@protocol OS_dispatch_queue, WFDatabaseBackingStore;

@interface WFDatabaseResult : NSObject

{
    id <WFDatabaseBackingStore> _backingStore;
    NSArray *_descriptors;
    NSPredicate *_searchPredicate;
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_observersTable;
}

@property (nonatomic, readonly) id <WFDatabaseBackingStore> backingStore;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSHashTable *observersTable;
@property (nonatomic, readonly) NSArray *observers;
@property (nonatomic, readonly) WFDatabase *database;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) NSArray *descriptors;
@property (copy, nonatomic) NSPredicate *searchPredicate;

- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)invalidateCache;
- (_Bool)performFetch:(id *)arg1;
- (id)_initWithBackingStore:(id)arg1;
- (id)_performFetch:(id *)arg1;

@end
