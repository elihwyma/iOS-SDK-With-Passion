/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class UIEvent, UITouch;

__attribute__((visibility("hidden")))
@interface UIGestureDelayedTouch : NSObject <Swift>

{
    UITouch *_touch;
    UITouch *_stateWhenDelayed;
    UITouch *_stateWhenDelivered;
    UIEvent *_event;
    long long _delayCount;
    _Bool _cloneForSecondDelivery;
}

@property (retain, nonatomic) UITouch *touch;
@property (retain, nonatomic) UITouch *stateWhenDelayed;
@property (retain, nonatomic) UITouch *stateWhenDelivered;
@property (retain, nonatomic) UIEvent *event;
@property _Bool cloneForSecondDelivery;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)incrementDelayCount;
- (long long)decrementDelayCount;
- (long long)delayCount;
- (void)saveCurrentTouchState;
- (long long)phaseForDelivery;
- (double)timestampForDelivery;

@end
