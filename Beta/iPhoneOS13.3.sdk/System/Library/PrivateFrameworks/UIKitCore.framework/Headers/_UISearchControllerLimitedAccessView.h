/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface _UISearchControllerLimitedAccessView : UIView

{
    UIView *_backgroundView;
    UILabel *_keyboardLimitedLabel;
    UIButton *_backButton;
}

@property (retain, nonatomic) UIButton *backButton;

- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)shouldUpdateFocusInContext:(id)arg1;

@end
