/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIViewController.h>

@class CKSMSComposeQueuingRemoteViewControllerProxy, CKSMSComposeRemoteViewController, NSString, UINavigationController, _UIAsyncInvocation;

@interface CKSMSComposeController : UIViewController

{
    int _entryViewInvisible;
    _UIAsyncInvocation *_cancellationInvocation;
    UINavigationController *_clientNavigationController;
    _Bool _safeToAdd;
    _Bool _didChangeStatusBarStyle;
    long long _savedStatusBarStyle;
    _Bool _firstItemWasInserted;
    id _delegate;
    CKSMSComposeRemoteViewController *_remoteViewController;
    CKSMSComposeQueuingRemoteViewControllerProxy *_remoteViewControllerProxy;
}

@property (nonatomic) _Bool firstItemWasInserted;
@property (weak, nonatomic) id delegate;
@property (retain, nonatomic) CKSMSComposeRemoteViewController *remoteViewController;
@property (retain, nonatomic) CKSMSComposeQueuingRemoteViewControllerProxy *remoteViewControllerProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)canSendPhotos:(int)arg1 videos:(int)arg2 audioClips:(int)arg3;
+ (_Bool)acceptsMIMEType:(id)arg1;
+ (double)maxTrimDurationForAudio;
+ (double)maxTrimDurationForVideo;

- (id)init;
- (void)dealloc;
- (void)setContentText:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (_Bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)setContentURLs:(id)arg1;
- (void)setShareSheetSessionID:(id)arg1;
- (void)forceMMS;
- (void)setGameCenterPickedHandles:(id)arg1 playerNames:(id)arg2;
- (void)setCanEditRecipients:(_Bool)arg1;
- (id)initWithNavigationController:(id)arg1;
- (_Bool)insertData:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3;
- (void)smsComposeControllerDataInserted;
- (void)smsComposeControllerEntryViewContentInserted;
- (_Bool)insertAttachmentWithURL:(id)arg1 andDescription:(id)arg2;
- (void)setText:(id)arg1 subject:(id)arg2 addresses:(id)arg3 chatGUID:(id)arg4 groupName:(id)arg5;
- (void)setPendingAddresses:(id)arg1;
- (void)disableCameraAttachments;
- (void)setTextEntryContentsVisible:(_Bool)arg1;
- (void)smsComposeControllerAppeared;
- (void)smsComposeControllerShouldSendMessageWithText:(id)arg1 toRecipients:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)smsComposeControllerSendStartedWithText:(id)arg1;
- (void)smsComposeControllerCancelled;
- (void)setText:(id)arg1 subject:(id)arg2 addresses:(id)arg3;
- (void)setUICustomizationData:(id)arg1;
- (void)setUTIs:(id)arg1;
- (void)setPhotoIDs:(id)arg1;
- (void)setCloudPhotoIDs:(id)arg1;
- (_Bool)insertFilename:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3 options:(id)arg4;
- (void)showInsertedItemInEntryView;
- (void)forceCancelComposition;
- (void)setGameCenterModeWithPickerBlock:(CDUnknownBlockType)arg1;
- (void)_addRemoteVCIfNeeded;
- (_Bool)canInsertMessage;
- (_Bool)insertRichLinkWithURL:(id)arg1 andData:(id)arg2;
- (_Bool)insertMessage:(id)arg1;
- (void)insertItemForSendingAndCalculateEntryViewFrame:(id)arg1 withAlternateFilename:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
