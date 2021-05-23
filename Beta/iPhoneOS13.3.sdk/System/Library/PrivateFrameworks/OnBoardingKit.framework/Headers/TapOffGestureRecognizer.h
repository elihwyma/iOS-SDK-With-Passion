/*
 Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

#import <UIKit/UIGestureRecognizer.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface TapOffGestureRecognizer : UIGestureRecognizer

{
    NSMutableSet *_touches;
}

- (id)init;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
