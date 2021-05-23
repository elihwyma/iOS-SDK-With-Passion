/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class UIPress, UIPressesEvent;

__attribute__((visibility("hidden")))
@interface UIGestureDelayedPress : NSObject <Swift>

{
    long long _delayCount;
    _Bool _cloneForSecondDelivery;
    UIPress *_press;
    UIPress *_stateWhenDelayed;
    UIPress *_stateWhenDelivered;
    UIPressesEvent *_event;
}

@property (retain, nonatomic) UIPress *press;
@property (retain, nonatomic) UIPress *stateWhenDelayed;
@property (retain, nonatomic) UIPress *stateWhenDelivered;
@property (retain, nonatomic) UIPressesEvent *event;
@property _Bool cloneForSecondDelivery;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)incrementDelayCount;
- (long long)decrementDelayCount;
- (long long)delayCount;
- (long long)phaseForDelivery;
- (double)timestampForDelivery;
- (void)saveCurrentPressState;

@end
