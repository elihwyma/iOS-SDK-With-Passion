/*
 Image: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
 */

#import <SharingUI/SFShareAudioBaseViewController.h>

@class NSMutableArray, NSObject, UIButton, UIImageView, UILabel;

@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SFShareAudioBringCloseViewController : SFShareAudioBaseViewController

{
    NSMutableArray *_cycleImageArray;
    NSObject<OS_dispatch_source> *_cycleImageTimer;
    unsigned int _cycleNextIndex;
    UIButton *_cancelButton;
    UILabel *_infoLabel;
    UIImageView *_shareImageView;
}

@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) UIImageView *shareImageView;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)_cycleProductImage;
- (void)eventCancel:(id)arg1;

@end
