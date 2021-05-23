/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIViewController.h>

#import <ChatKit/Swift-Protocol.h>

@class CKCamPhysicalCaptureNotifier, CKConversation, IMBalloonPlugin, NSString, UIView;

@protocol CKBrowserViewControllerProtocol, CKFunCameraViewControllerDelegate;

@interface CKFunCameraViewController : UIViewController <Swift>

{
    id <CKFunCameraViewControllerDelegate> _delegate;
    IMBalloonPlugin *_balloonPlugin;
    UIView *_funCameraView;
    UIViewController<CKBrowserViewControllerProtocol> *_funCameraAppViewController;
    CKCamPhysicalCaptureNotifier *_physicalCaptureNotifier;
    CKConversation *_conversation;
}

@property (retain, nonatomic) UIView *funCameraView;
@property (retain, nonatomic) UIViewController<CKBrowserViewControllerProtocol> *funCameraAppViewController;
@property (retain, nonatomic) IMBalloonPlugin *balloonPlugin;
@property (retain, nonatomic) CKCamPhysicalCaptureNotifier *physicalCaptureNotifier;
@property (retain, nonatomic) CKConversation *conversation;
@property (weak, nonatomic) id <CKFunCameraViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)traitCollection;
- (void)dismiss;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)prefersStatusBarHidden;
- (id)initWithConversation:(id)arg1;
- (void)startEditingPayload:(id)arg1;
- (void)setLocalUserIsTyping:(_Bool)arg1;
- (void)stageAssetArchive:(id)arg1 skipShelf:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)dragControllerTranscriptDelegate;
- (void)_handleRemoteConnectionInterrupted:(id)arg1;
- (void)dismissAndReloadInputViews:(_Bool)arg1;
- (void)requestPresentationStyleExpanded:(_Bool)arg1;
- (id)configuredContentViewControllerForPlugin:(id)arg1;
- (id)contentViewControllerForPlugin:(id)arg1;
- (void)commitPayload:(id)arg1;
- (void)startEditingPayload:(id)arg1 dismiss:(_Bool)arg2;
- (void)_dismissAndPresentPhotosApp:(_Bool)arg1;
- (void)openURL:(id)arg1 pluginID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)openURL:(id)arg1 applicationIdentifier:(id)arg2 pluginID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)dismissToKeyboard:(_Bool)arg1;
- (void)commitSticker:(id)arg1;
- (void)commitSticker:(id)arg1 withDragTarget:(id)arg2;
- (_Bool)commitPayload:(id)arg1 forPlugin:(id)arg2 allowAllCommits:(_Bool)arg3 error:(id *)arg4;
- (void)dismissAndPresentPhotosApp;
- (void)physicalCaptureNotifierDidChangeState:(id)arg1;

@end
