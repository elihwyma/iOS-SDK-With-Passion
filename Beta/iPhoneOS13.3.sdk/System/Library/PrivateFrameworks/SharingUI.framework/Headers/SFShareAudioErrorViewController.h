/*
 Image: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
 */

#import <SharingUI/SFShareAudioBaseViewController.h>

@class NSError, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface SFShareAudioErrorViewController : SFShareAudioBaseViewController

{
    UILabel *_infoLabel;
    UILabel *_internalLabel;
    UIButton *_dismissButton;
    NSError *_error;
}

@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) UILabel *internalLabel;
@property (retain, nonatomic) UIButton *dismissButton;
@property (copy, nonatomic) NSError *error;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)eventDismiss:(id)arg1;

@end
