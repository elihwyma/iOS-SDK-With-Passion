/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <UIKit/UIGestureRecognizer.h>

#import <TSReading/Swift-Protocol.h>

@class NSMutableSet, NSString, UIView;

@interface TSKHideOnTouchOutsideViewGestureRecognizer : UIGestureRecognizer <Swift>

{
    UIView *mWatchView;
    NSMutableSet *mTargets;
}

@property (nonatomic) UIView *watchView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)isInFlight;

- (void)dealloc;
- (void)removeTarget:(id)arg1 action:(SEL)arg2;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 watchView:(id)arg3;

@end
