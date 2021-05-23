/*
 Image: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
 */

#import <UIKit/UINavigationController.h>

@class NSBundle, SFShareAudioConnectingViewController, SFShareAudioSessionClient, UIStoryboard;

@interface SFShareAudioViewController : UINavigationController

{
    unsigned int _flags;
    CDUnknownBlockType _completion;
    SFShareAudioSessionClient *_shareAudioSession;
    NSBundle *_mainBundle;
    UIStoryboard *_mainStoryboard;
    SFShareAudioConnectingViewController *_vcConnecting;
}

@property (retain, nonatomic) SFShareAudioSessionClient *shareAudioSession;
@property (retain, nonatomic) NSBundle *mainBundle;
@property (retain, nonatomic) UIStoryboard *mainStoryboard;
@property (retain, nonatomic) SFShareAudioConnectingViewController *vcConnecting;
@property (copy, nonatomic) CDUnknownBlockType completion;
@property (nonatomic) unsigned int flags;

+ (id)instantiateViewController;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (_Bool)_canShowWhileLocked;
- (void)_sessionStart;
- (void)_showError:(id)arg1;
- (void)reportError:(id)arg1;
- (void)_showBringClose;
- (void)_reportCompletion:(id)arg1 mediaRouteID:(id)arg2;
- (void)_sessionProgressEvent:(int)arg1 info:(id)arg2;
- (void)_showConfirm:(id)arg1;
- (void)_showPairInstructions:(id)arg1;
- (void)_showConnecting:(id)arg1;
- (void)_transitionToViewController:(id)arg1 animate:(_Bool)arg2;
- (id)_imageForPID:(unsigned int)arg1 colorCode:(unsigned int)arg2;
- (void)reportUserCancelled;

@end
