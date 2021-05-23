/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <UIKit/UIView.h>

@class SearchUICheckView, UILabel, UIVisualEffectView;

@interface SearchUIConfirmationHUDView : UIView

{
    UIVisualEffectView *_effectView;
    SearchUICheckView *_checkView;
    UILabel *_textLabel;
}

@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) SearchUICheckView *checkView;
@property (retain, nonatomic) UILabel *textLabel;

- (id)init;
- (void)layoutSubviews;
- (void)animateCheckmark;

@end
