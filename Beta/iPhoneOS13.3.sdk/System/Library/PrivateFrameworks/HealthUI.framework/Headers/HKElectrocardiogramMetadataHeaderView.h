/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIView.h>

@class UIButton;

@interface HKElectrocardiogramMetadataHeaderView : UIView

{
    UIButton *_detailButton;
}

@property (nonatomic, readonly) UIButton *detailButton;

- (void)_setupUIWithText:(id)arg1 date:(id)arg2;
- (id)initWithText:(id)arg1 date:(id)arg2;

@end
