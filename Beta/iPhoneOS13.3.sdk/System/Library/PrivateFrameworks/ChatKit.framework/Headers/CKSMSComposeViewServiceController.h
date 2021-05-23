/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UINavigationController.h>

@class CKModalTranscriptController, NSArray, NSString;

@protocol CKSMSComposeViewServiceControllerDelegate;

@interface CKSMSComposeViewServiceController : UINavigationController

{
    _Bool _canEditRecipients;
    _Bool _supportsAttachments;
    _Bool _supportsMessageInspection;
    _Bool _forceMMS;
    _Bool _disableCameraAttachments;
    NSArray *_utiTypes;
    NSArray *_contentURLs;
    NSArray *_photoIDs;
    NSArray *_cloudPhotoIDs;
    NSArray *_contentText;
    NSString *_shareSheetSessionID;
    CKModalTranscriptController *_modalTranscriptController;
    id <CKSMSComposeViewServiceControllerDelegate> _composeDelegate;
    CDUnknownBlockType _gameCenterPickerBlock;
    CDUnknownBlockType _entryViewCompletion;
}

@property (copy, nonatomic) CDUnknownBlockType gameCenterPickerBlock;
@property (copy, nonatomic) CDUnknownBlockType entryViewCompletion;
@property (retain, nonatomic) CKModalTranscriptController *modalTranscriptController;
@property (nonatomic) _Bool canEditRecipients;
@property (weak, nonatomic) id <CKSMSComposeViewServiceControllerDelegate> composeDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
+ (_Bool)_isSecureForRemoteViewService;

- (id)init;
- (void)dealloc;
- (void)setContentText:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)_canShowWhileLocked;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)_willAppearInRemoteViewController;
- (void)setContentURLs:(id)arg1;
- (void)setShareSheetSessionID:(id)arg1;
- (void)chatController:(id)arg1 willSendComposition:(id)arg2 inConversation:(id)arg3;
- (void)chatController:(id)arg1 didSendCompositionInConversation:(id)arg2;
- (void)chatController:(id)arg1 didReportSpamForConversation:(id)arg2;
- (void)chatController:(id)arg1 forwardComposition:(id)arg2;
- (void)prewarmCameraIfNecessaryForChatController:(id)arg1;
- (void)forceMMS;
- (void)setGameCenterPickedHandles:(id)arg1 playerNames:(id)arg2;
- (void)composeChatController:(id)arg1 didLoadEntryViewContentWithCompletion:(CDUnknownBlockType)arg2;
- (void)composeChatController:(id)arg1 shouldSendComposition:(id)arg2 inConversation:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)insertFileURL:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3;
- (void)insertData:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3;
- (_Bool)_hostSandboxAllowsFileReadAtFileURL:(id)arg1;
- (void)hideEntryViewContent:(_Bool)arg1;
- (void)_insertFileURL:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3 preview:(id)arg4 isFullyRealized:(_Bool)arg5 appendedVideoURL:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_insertAttachmentWithURL:(id)arg1 andDescription:(id)arg2 preview:(id)arg3 isFullyRealized:(_Bool)arg4 appendedVideoURL:(id)arg5 appendedBundleURL:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)insertAttachmentWithURL:(id)arg1 andDescription:(id)arg2;
- (void)composeChatControllerDidCancelComposition:(id)arg1;
- (void)_forceMMSIfNecessary;
- (void)setText:(id)arg1 subject:(id)arg2 addresses:(id)arg3 chatGUID:(id)arg4 groupName:(id)arg5;
- (id)recipientsFromChatGUID:(id)arg1 groupName:(id)arg2 handles:(id)arg3;
- (void)setPendingAddresses:(id)arg1;
- (void)disableCameraAttachments;
- (void)setTextEntryContentsVisible:(_Bool)arg1;
- (_Bool)supportsMessageInspection;
- (void)donateInteractionWithConversation:(id)arg1;
- (void)setText:(id)arg1 subject:(id)arg2 addresses:(id)arg3;
- (void)setUICustomizationData:(id)arg1;
- (void)setUTIs:(id)arg1;
- (void)setPhotoIDs:(id)arg1;
- (void)setCloudPhotoIDs:(id)arg1;
- (void)insertRemoteItemForSending:(id)arg1;
- (void)insertRemoteItemForSendingAndCalculateEntryViewFrame:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)insertFilename:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3 options:(id)arg4;
- (void)showInsertedItemInEntryView;
- (void)forceCancelComposition;
- (void)setGameCenterModeWithPickerBlock:(CDUnknownBlockType)arg1;
- (_Bool)composeChatControllerCanEditRecipients;
- (void)composeChatController:(id)arg1 didSelectNewConversation:(id)arg2;
- (_Bool)composeChatControllerShouldShowBackButtonViewDuringSendAnimation:(id)arg1;
- (_Bool)supportsAttachments;

@end
