/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

#import <UIKit/UIScrollView.h>

@protocol CCUIScrollViewDelegate;

@interface CCUIScrollView : UIScrollView

@property (weak, nonatomic) id <CCUIScrollViewDelegate> delegate;

- (void)setFrame:(struct CGRect)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;

@end
