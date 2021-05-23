/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSOrderedSet, WFDatabase, WFDatabaseResult;

@interface WFDatabaseResultsController : NSObject

{
    WFDatabase *_database;
    WFDatabaseResult *_result;
    NSOrderedSet *_currentObjects;
    NSMapTable *_observers;
    CDUnknownBlockType _block;
    struct _WFDatabaseResultsSlice _slice;
}

@property (copy, nonatomic) NSOrderedSet *currentObjects;
@property (nonatomic, readonly) NSMapTable *observers;
@property (copy, nonatomic, readonly) CDUnknownBlockType block;
@property (nonatomic, readonly) WFDatabase *database;
@property (nonatomic, readonly) WFDatabaseResult *result;
@property (nonatomic) struct _WFDatabaseResultsSlice slice;
@property (nonatomic, readonly) unsigned long long count;

- (void)removeObserver:(id)arg1;
- (void)update;
- (void)notify;
- (void)databaseResult:(id)arg1 didUpdateObjects:(id)arg2 inserted:(id)arg3 removed:(id)arg4;
- (id)initWithResult:(id)arg1 slice:(struct _WFDatabaseResultsSlice)arg2 database:(id)arg3 block:(CDUnknownBlockType)arg4;
- (id)descriptorAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfDescriptor:(id)arg1;
- (void)addUpdateObserver:(id)arg1 selector:(SEL)arg2;
- (void)_databaseResult:(id)arg1 didUpdateObjects:(id)arg2 inserted:(id)arg3 removed:(id)arg4;

@end
