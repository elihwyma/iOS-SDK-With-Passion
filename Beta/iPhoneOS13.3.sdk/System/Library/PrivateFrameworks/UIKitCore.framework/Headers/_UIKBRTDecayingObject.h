/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIKBRTDecayingObject : NSObject

{
    NSMutableArray *_resetBlocks;
    _Bool _isDecaying;
    _Bool _isHolding;
    double _lastUpdate;
    double _timeoutDuration;
}

@property (nonatomic, readonly) double lastUpdate;
@property (nonatomic) double timeoutDuration;
@property (nonatomic, readonly) _Bool isDecaying;
@property (nonatomic, readonly) _Bool isHolding;
@property (nonatomic, readonly) _Bool isActive;

- (void)reset;
- (id)initWithTimeoutDuration:(double)arg1;
- (void)onResetDo:(CDUnknownBlockType)arg1;
- (void)resetDecayTo:(double)arg1;
- (void)startOrUpdateDecay;
- (void)resetActiveDecayTo:(double)arg1;
- (void)startDecaying;
- (void)updateDecay;

@end
