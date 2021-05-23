/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSSet, UITouch;

__attribute__((visibility("hidden")))
@interface _UIHoverTouchDeliveryTable : NSObject

{
    NSMutableSet *_beginningGestureRecognizers;
    NSMutableSet *_updatingGestureRecognizers;
    NSMutableSet *_exitingGestureRecognizers;
    NSMutableSet *_ignoredGestureRecognizers;
    UITouch *_touch;
}

@property (nonatomic, readonly) UITouch *touch;
@property (nonatomic, readonly) NSSet *gestureRecognizers;

- (void)removeGestureRecognizer:(id)arg1;
- (id)initWithTouch:(id)arg1;
- (long long)updateGestureRecognizerForDelivery:(id)arg1;
- (void)updateForEvent:(id)arg1 forcingHitTest:(_Bool)arg2;

@end
