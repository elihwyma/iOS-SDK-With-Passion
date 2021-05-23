/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSCountedSet, NSMutableDictionary, NSSet, _UIStatusBarData;

__attribute__((visibility("hidden")))
@interface _UIStatusBarDataAggregator : NSObject

{
    _UIStatusBarData *_overlayData;
    CDUnknownBlockType _updateBlock;
    Class _dataClass;
    NSCountedSet *_delayedKeys;
    NSMutableDictionary *_pendingUpdates;
    NSMutableDictionary *_coalescedKeys;
    NSMutableDictionary *_coalescedTimers;
}

@property (copy, nonatomic) CDUnknownBlockType updateBlock;
@property (copy, nonatomic) Class dataClass;
@property (retain, nonatomic) NSCountedSet *delayedKeys;
@property (retain, nonatomic) NSMutableDictionary *pendingUpdates;
@property (retain, nonatomic) NSMutableDictionary *coalescedKeys;
@property (retain, nonatomic) NSMutableDictionary *coalescedTimers;
@property (copy, nonatomic) _UIStatusBarData *overlayData;
@property (copy, nonatomic, readonly) NSSet *delayedEntryKeys;
@property (copy, nonatomic, readonly) NSSet *coalescedEntryKeys;

+ (void)initialize;

- (void)beginCoalescingUpdatesForEntryKeys:(id)arg1 delay:(double)arg2;
- (id)initWithUpdateBlock:(CDUnknownBlockType)arg1;
- (void)updateWithData:(id)arg1;
- (void)beginDelayingUpdatesForEntryKeys:(id)arg1;
- (void)endDelayingUpdatesForEntryKeys:(id)arg1;
- (void)_updateForOverlayWithData:(id)arg1;
- (void)_updateForDelayedKeysWithData:(id)arg1;
- (void)_updateForCoalescedKeysWithData:(id)arg1;
- (id)_updatedDataFromData:(id)arg1 delayedKeys:(id)arg2;
- (void)_updateFromPendingUpdatesForKeys:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)_coalescedUpdateForEntryKeys:(id)arg1;
- (void)endCoalescingUpdatesForEntryKeys:(id)arg1;

@end
