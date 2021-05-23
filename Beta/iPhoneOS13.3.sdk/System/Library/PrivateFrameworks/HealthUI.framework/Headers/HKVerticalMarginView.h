/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIView.h>

@protocol HKVerticalMarginDelegate;

@interface HKVerticalMarginView : UIView

{
    unsigned long long _offsetOptions;
    id <HKVerticalMarginDelegate> _marginDelegate;
    double _currentKeyboardHeight;
}

@property (nonatomic) double currentKeyboardHeight;
@property (nonatomic) unsigned long long offsetOptions;
@property (retain, nonatomic) id <HKVerticalMarginDelegate> marginDelegate;

- (void)dealloc;
- (void)layoutSubviews;
- (void)keyboardWasShown:(id)arg1;
- (void)keyboardWillBeHidden:(id)arg1;
- (id)_findViewController;
- (double)_topOffsetWithController:(id)arg1;
- (double)_bottomOffsetWithController:(id)arg1;
- (double)_findTabBarHeightWithController:(id)arg1;
- (id)initWithSubview:(id)arg1 offsetOptions:(unsigned long long)arg2;

@end
