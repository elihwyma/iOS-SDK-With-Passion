/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@class AXMOutputRequestHandle, NSArray, NSMutableArray;

@protocol OS_dispatch_queue;

@interface AXMOutputRequest : NSObject

{
    AXMOutputRequestHandle *_handle;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_queue_actions;
    _Bool _interruptsAndClearsQueue;
    CDUnknownBlockType _completionBlock;
}

@property (nonatomic, readonly) AXMOutputRequestHandle *handle;
@property (nonatomic, readonly) NSArray *actions;
@property (nonatomic, readonly) NSArray *speechActions;
@property (nonatomic, readonly) NSArray *oneShotSoundActions;
@property (nonatomic, readonly) NSArray *activeSoundActions;
@property (nonatomic, readonly) NSArray *hapticActions;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;
@property (nonatomic) _Bool interruptsAndClearsQueue;

+ (id)speechItemSeparator;

- (id)init;
- (void)_addAction:(id)arg1;
- (void)addHapticItemWithURL:(id)arg1 intensity:(double)arg2;
- (void)addSpeechItem:(id)arg1;
- (void)addSoundItemWithID:(id)arg1;
- (void)addSoundItemWithURL:(id)arg1;
- (void)addActiveSoundItemWithID:(id)arg1;
- (void)addActiveSoundItemWithURL:(id)arg1;
- (void)addHapticItemWithURL:(id)arg1;

@end
