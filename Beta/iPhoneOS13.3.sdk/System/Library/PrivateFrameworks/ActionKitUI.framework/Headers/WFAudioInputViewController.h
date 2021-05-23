/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <UIKit/UIViewController.h>

@class UILabel, UIView;

__attribute__((visibility("hidden")))
@interface WFAudioInputViewController : UIViewController

{
    UILabel *_statusLabel;
    UIView *_contentView;
}

@property (nonatomic, readonly) UILabel *statusLabel;
@property (nonatomic, readonly) UIView *contentView;

- (void)loadView;
- (_Bool)accessibilityPerformMagicTap;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)handleTap;

@end
