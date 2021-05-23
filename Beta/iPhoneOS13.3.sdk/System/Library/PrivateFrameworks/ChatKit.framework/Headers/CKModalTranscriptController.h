/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKShareSheetChatController.h>

@class CKChatEagerUploadController, NSMutableArray;

@interface CKModalTranscriptController : CKShareSheetChatController

{
    _Bool _mimeType;
    _Bool _alreadySetUp;
    NSMutableArray *_partsToInsert;
    NSMutableArray *_typesToInsert;
    int _entryViewInvisible;
    _Bool _cameraSelectionDisabled;
    _Bool _forceMMS;
    CKChatEagerUploadController *_eagerUploadController;
    NSMutableArray *_deferredInsertMediaObjectBlocks;
}

@property (retain, nonatomic) CKChatEagerUploadController *eagerUploadController;
@property (retain, nonatomic) NSMutableArray *deferredInsertMediaObjectBlocks;
@property (nonatomic) _Bool mimeType;
@property (nonatomic) _Bool forceMMS;

- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)_canShowWhileLocked;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)registerForNotifications;
- (_Bool)getContainerWidth:(double *)arg1 offset:(double *)arg2;
- (void)setComposition:(id)arg1;
- (void)sendComposition:(id)arg1;
- (_Bool)shouldDismissAfterSend;
- (void)_setConversationDeferredSetup;
- (void)setCanEditRecipients:(_Bool)arg1;
- (id)initWithNavigationController:(id)arg1;
- (void)insertData:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3;
- (void)insertFileURL:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3 fullyRealizedPreview:(id)arg4 rawPreview:(id)arg5 appendedVideoURL:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)hideEntryViewContent:(_Bool)arg1;
- (void)insertRichLinkWithURL:(id)arg1 data:(id)arg2;
- (void)insertMessage:(id)arg1 appProxy:(id)arg2;
- (void)setPendingAddresses:(id)arg1;
- (void)disableCameraAttachments;
- (void)setTextEntryContentsVisible:(_Bool)arg1;
- (void)_insertMediaObjectAndReturnFrame:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_insertMediaObject:(id)arg1;
- (double)_offsetForScreenWidth:(double)arg1 containerWidth:(double)arg2 windowOffset:(struct CGPoint)arg3;
- (void)_setEntryViewVisible:(_Bool)arg1;
- (_Bool)_deviceIsLocked;
- (void)_conversationListDidFinishLoading:(id)arg1;
- (_Bool)_shouldAllowCameraAttachments;
- (_Bool)_shouldUseDefaultFirstResponder;
- (_Bool)_shouldUseExistingConversations;

@end
