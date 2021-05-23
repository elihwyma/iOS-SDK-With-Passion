/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIBarButtonItem.h>

@class UIButton;

@interface HKProfileBarButtonItem : UIBarButtonItem

{
    UIButton *_button;
}

@property (retain, nonatomic) UIButton *button;

+ (id)new;

- (void)setProfileIconObserver:(id)arg1;

@end
