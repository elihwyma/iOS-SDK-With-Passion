/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <UIKit/UIView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface STSummationView : UIView

{
    UILabel *_titleLabel;
    UILabel *_detailLabel;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;

- (id)initWithTitle:(id)arg1 detailText:(id)arg2;

@end
