/*
 Image: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
 */

#import <UIKit/UIViewController.h>

@class SFShareAudioViewController, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface SFShareAudioBaseViewController : UIViewController

{
    SFShareAudioViewController *_mainController;
    UILabel *_titleLabel;
    UIView *_cardView;
    _Bool _viewActive;
}

@property (retain, nonatomic) SFShareAudioViewController *mainController;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *cardView;
@property (nonatomic) _Bool viewActive;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

@end
