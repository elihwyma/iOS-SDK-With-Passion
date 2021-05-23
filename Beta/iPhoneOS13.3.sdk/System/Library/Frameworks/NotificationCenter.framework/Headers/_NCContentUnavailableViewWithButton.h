/*
 Image: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
 */

#import <UIKit/UIView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface _NCContentUnavailableViewWithButton : UIView

{
    UILabel *_titleLabel;
    UIView *_backgroundView;
    CDUnknownBlockType _buttonHandler;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *backgroundView;
@property (copy, nonatomic) CDUnknownBlockType buttonHandler;

- (void)didMoveToWindow;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)_buttonPressed:(id)arg1;
- (void)_configureBackgroundView;
- (id)initWithTitle:(id)arg1 buttonAction:(CDUnknownBlockType)arg2;
- (void)_updateVisualStyling;
- (void)_configureTitleLabelWithTitle:(id)arg1;
- (id)_visualStylingProviderForCategory:(long long)arg1;

@end
