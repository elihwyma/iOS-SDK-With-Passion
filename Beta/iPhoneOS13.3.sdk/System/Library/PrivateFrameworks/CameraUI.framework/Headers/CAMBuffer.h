/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@protocol NSCopying, OS_dispatch_queue;

@interface CAMBuffer : NSObject

{
    _Bool _bufferQueueEnabled;
    NSObject<OS_dispatch_queue> *__bufferQueue;
    id <NSCopying> _bufferQueueCurrentValue;
    NSMutableArray *__bufferQueueBufferedValues;
    NSMutableDictionary *__bufferQueueObservers;
    NSMutableArray *__bufferQueueObservances;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_bufferQueue;
@property (nonatomic, getter=isBufferQueueEnabled) _Bool bufferQueueEnabled;
@property (retain, nonatomic) id <NSCopying> bufferQueueCurrentValue;
@property (nonatomic, readonly) NSMutableArray *_bufferQueueBufferedValues;
@property (nonatomic, readonly) NSMutableDictionary *_bufferQueueObservers;
@property (nonatomic, readonly) NSMutableArray *_bufferQueueObservances;
@property (nonatomic, readonly, getter=isEnabled) _Bool enabled;
@property (nonatomic, readonly) id currentValue;
@property (nonatomic, readonly) _Bool isBufferEmpty;
@property (nonatomic, readonly) id firstBufferedValue;
@property (nonatomic, readonly) id lastBufferedValue;
@property (nonatomic, readonly) NSArray *bufferedValues;

+ (id)keyPathsForValuesAffectingEnabled;
+ (id)keyPathsForValuesAffectingCurrentValue;

- (id)init;
- (void)dealloc;
- (id)addObserver:(CDUnknownBlockType)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)push:(id)arg1;
- (void)removeObserverForKey:(id)arg1;
- (void)reevaluate;
- (void)handleObservedNotification:(id)arg1;
- (void)_bufferQueueTeardownObservances:(id)arg1;
- (_Bool)_isBufferQueue;
- (void)_emitBufferedValues;
- (void)_bufferQueueFulfillObservancesWithChange:(id)arg1;
- (void)_bufferQueueEvaluateObservances;
- (void)_bufferQueueFulfillAndEvaluateWithChange:(id)arg1;
- (void)_bufferQueueSetupObservance:(id)arg1;
- (id)_addObserver:(CDUnknownBlockType)arg1 onMainQueue:(_Bool)arg2;
- (void)_bufferQueueTeardownObservance:(id)arg1;
- (void)disableWhile:(CDUnknownBlockType)arg1;
- (void)disableWhileKeyPath:(id)arg1 ofObject:(id)arg2 evaluates:(CDUnknownBlockType)arg3;
- (void)disableWhileNotification:(id)arg1 fromObject:(id)arg2 usingNotificationCenter:(id)arg3;
- (void)disableUntil:(CDUnknownBlockType)arg1;
- (void)disableUntilKeyPath:(id)arg1 ofObject:(id)arg2 evaluates:(CDUnknownBlockType)arg3;
- (void)disableUntilNotification:(id)arg1 fromObject:(id)arg2 usingNotificationCenter:(id)arg3;
- (void)replaceWith:(id)arg1;
- (id)addMainQueueObserver:(CDUnknownBlockType)arg1;

@end
