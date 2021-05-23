/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSMutableArray, NSString, SBStatusBarStateAggregator;

@interface SBStatusBarStateProvider : NSObject

{
    SBStatusBarStateAggregator *_stateAggregator;
    NSHashTable *_stateObservers;
    CDStruct_0942cde0 _aggregatorData;
    int _aggregatorActions;
    CDStruct_0942cde0 _lastPost;
    unsigned long long _coalescentBlockDepth;
    _Bool _itemNeedsPost[42];
    _Bool _anyItemNeedsPost;
    _Bool _nonItemDataNeedsPost;
    _Bool _posting;
    NSMutableArray *_stylesWithDetailUpdates;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)getStatusBarData:(CDStruct_0942cde0 *)arg1;
- (void)addStatusBarStateObserver:(id)arg1;
- (void)removeStatusBarStateObserver:(id)arg1;
- (void)beginCoalescentBlock;
- (void)endCoalescentBlock;
- (void)updateStatusBarItem:(int)arg1;
- (void)statusBarStateAggregatorDidStartPost:(id)arg1;
- (void)statusBarStateAggregator:(id)arg1 didVisitItem:(int)arg2 withUpdates:(_Bool)arg3 toData:(const CDStruct_0942cde0 *)arg4;
- (void)statusBarStateAggregatorDidFinishPost:(id)arg1 withData:(const CDStruct_0942cde0 *)arg2 actions:(int)arg3;
- (void)statusBarStateAggregator:(id)arg1 didUpdateNonItemData:(const CDStruct_0942cde0 *)arg2;
- (_Bool)_shouldPostForVisitedItem:(int)arg1 withUpdates:(_Bool)arg2 toAggregatorData:(const CDStruct_0942cde0 *)arg3 lastPost:(const CDStruct_0942cde0 *)arg4;
- (void)_composePostDataFromAggregatorData:(CDStruct_0942cde0 *)arg1;
- (void)_composePostActionsFromAggregatorActions:(int *)arg1;
- (void)_didFinishPost;
- (_Bool)_shouldPostForUpdatesToNonItemData:(const CDStruct_0942cde0 *)arg1;
- (void)_didChangeDoubleHeightStatusStringForStyle:(long long)arg1;

@end
