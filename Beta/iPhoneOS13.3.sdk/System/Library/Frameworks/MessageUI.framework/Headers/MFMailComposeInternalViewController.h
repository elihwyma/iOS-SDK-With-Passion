/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <UIKit/UIViewController.h>

@class MFMailComposePlaceholderViewController, MFMailComposeRemoteViewController, NSArray, NSError, NSMutableArray, NSMutableDictionary, NSString, _UIAsyncInvocation;

@protocol MFMailComposeViewControllerDelegate;

@interface MFMailComposeInternalViewController : UIViewController

{
    MFMailComposePlaceholderViewController *_placeholderViewController;
    MFMailComposeRemoteViewController *_serviceViewController;
    _UIAsyncInvocation *_cancellationInvocation;
    unsigned long long _defaultContentVariationIndex;
    NSMutableArray *_contentVariations;
    NSMutableDictionary *_compositionValues;
    NSMutableArray *_attachments;
    NSString *_placeholderSubject;
    long long _composeResult;
    NSError *_composeResultError;
    double _presentationDelayBeganTimestamp;
    unsigned int _hasDelayedPresentation:1;
    unsigned int _didEndDelayedPresentation:1;
    unsigned int _compositionValuesAreFinalized:1;
    unsigned int _remoteViewControllerIsConfigured:1;
    unsigned int _isAppearing:1;
    unsigned int _didAppear:1;
    unsigned int _didFinish:1;
    unsigned int _delegateRespondsToBodyFinishedLoadingWithResult:1;
    id <MFMailComposeViewControllerDelegate> _mailComposeDelegate;
}

@property (weak, nonatomic) id <MFMailComposeViewControllerDelegate> mailComposeDelegate;
@property (copy, nonatomic) NSArray *UTITypes;
@property (copy, nonatomic) NSArray *photoIDs;
@property (copy, nonatomic) NSArray *cloudPhotoIDs;
@property (copy, nonatomic) NSArray *contentText;
@property (copy, nonatomic) NSArray *contentURLs;
@property (copy, nonatomic) NSString *shareSheetSessionID;

- (void)dealloc;
- (void)setURL:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (_Bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (id)remoteViewController;
- (void)setContentVisible:(_Bool)arg1;
- (void)autosaveWithHandler:(CDUnknownBlockType)arg1;
- (void)setMessageBody:(id)arg1 isHTML:(_Bool)arg2;
- (id)addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
- (void)setToRecipients:(id)arg1;
- (void)setAutosaveIdentifier:(id)arg1;
- (void)setPreferredSendingEmailAddress:(id)arg1;
- (void)setSourceAccountManagement:(int)arg1;
- (void)setCcRecipients:(id)arg1;
- (void)setBccRecipients:(id)arg1;
- (void)setCaretPosition:(unsigned long long)arg1;
- (void)setShowKeyboardImmediately:(_Bool)arg1;
- (void)_serviceViewControllerReady:(id)arg1 error:(id)arg2;
- (void)_loadContentViewControllerForcingPlaceholder:(_Bool)arg1;
- (void)_cancelComposition:(id)arg1;
- (void)_notifyCompositionDidFinish;
- (void)_beginDelayingCompositionPresenation;
- (void)_didEndDelayingCompositionPresentation;
- (void)_configureRemoteViewContoller;
- (void)_finishServiceViewControllerRequestWithSuccess:(_Bool)arg1;
- (id)placeholderForFileName:(id)arg1 fileSize:(long long)arg2 mimeType:(id)arg3 contentID:(id)arg4 proxy:(id)arg5;
- (id)securityScopeForURL:(id)arg1 proxy:(id)arg2;
- (void)_processAttachmentsViaProxy:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_notifyBodyDidFinishLoadingWithResult:(_Bool)arg1;
- (void)compositionFinishedWithResult:(long long)arg1 error:(id)arg2;
- (void)_endDelayingCompositionPresentation;
- (void)_cancelRemoteServiceViewControllerRequest;
- (void)_setCompositionValue:(id)arg1 forKey:(id)arg2;
- (void)_setPlaceHolderSubject:(id)arg1;
- (void)compositionRequestsSendWithBody:(id)arg1 recipients:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)compositionViewServiceTerminatedWithError:(id)arg1;
- (id)addContentVariationWithName:(id)arg1;
- (void)setDefaultContentVariation:(id)arg1;
- (id)addAttachmentFileURL:(id)arg1 mimeType:(id)arg2;
- (void)finalizeCompositionValues;
- (void)requestFramesForAttachmentsWithIdentifiers:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;

@end
