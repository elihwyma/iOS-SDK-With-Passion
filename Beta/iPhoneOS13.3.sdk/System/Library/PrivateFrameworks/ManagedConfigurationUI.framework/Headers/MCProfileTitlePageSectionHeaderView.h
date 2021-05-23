/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <UIKit/UIView.h>

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface MCProfileTitlePageSectionHeaderView : UIView

{
    NSString *_text;
    UILabel *_label;
    UIView *_separatorLine;
}

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIView *separatorLine;
@property (copy, nonatomic) NSString *text;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
