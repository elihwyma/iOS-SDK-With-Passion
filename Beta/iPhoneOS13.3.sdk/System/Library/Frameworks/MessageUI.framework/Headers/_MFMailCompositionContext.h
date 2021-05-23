/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Foundation/NSObject.h>

@class EMMessage, EMMessageList, MFAttachmentComposeManager, MFAttachmentCompositionContext, MFAttachmentManager, MFComposeWebView, MFMailMessage, MFMessageLoadingContext, NSArray, NSMutableArray, NSString;

@protocol EFScheduler, _MFMailCompositionContextDelegate;

@interface _MFMailCompositionContext : NSObject

{
    NSString *_sendingAddress;
    NSString *_subject;
    NSArray *_toRecipients;
    NSArray *_ccRecipients;
    NSArray *_bccRecipients;
    NSString *_messageBody;
    int _composeType;
    NSString *_autosaveIdentifier;
    MFMailMessage *_legacyMessage;
    EMMessage *_originalMessage;
    NSString *_attachmentToMarkupContentID;
    id _originalContent;
    MFMessageLoadingContext *_loadingContext;
    _Bool _loadRest;
    _Bool _includeAttachments;
    _Bool _includeAttachmentsWhenAdding;
    _Bool _showKeyboardImmediately;
    _Bool _showContentImmediately;
    MFAttachmentCompositionContext *_attachmentContext;
    MFAttachmentComposeManager *_attachmentManager;
    NSMutableArray *_deferredAttachments;
    _Bool _registeredForDraw;
    EMMessageList *_messageList;
    _Bool _usingDefaultAccount;
    _Bool _prefersFirstLineSelection;
    int _sourceAccountManagement;
    NSString *_shareSheetSessionID;
    NSArray *_UTITypes;
    NSArray *_photoIDs;
    NSArray *_cloudPhotoIDs;
    NSArray *_contentText;
    NSArray *_contentURLs;
    unsigned long long _caretPosition;
    NSArray *_contentVariations;
    unsigned long long _defaultContentVariationIndex;
    NSString *_contentVariationAttachmentCID;
    NSString *_originatingBundleID;
    id <_MFMailCompositionContextDelegate> _delegate;
    MFComposeWebView *_composeWebView;
    id <EFScheduler> _observationScheduler;
}

@property MFComposeWebView *composeWebView;
@property (retain, nonatomic) id <EFScheduler> observationScheduler;
@property (nonatomic) _Bool usingDefaultAccount;
@property (copy, nonatomic) NSString *sendingAddress;
@property (copy, nonatomic) NSString *subject;
@property (copy, nonatomic) NSArray *toRecipients;
@property (copy, nonatomic) NSArray *ccRecipients;
@property (copy, nonatomic) NSArray *bccRecipients;
@property (retain, nonatomic) NSString *attachmentToMarkupContentID;
@property (nonatomic) _Bool loadRest;
@property (nonatomic) _Bool includeAttachments;
@property (nonatomic) _Bool includeAttachmentsWhenAdding;
@property (nonatomic) _Bool showKeyboardImmediately;
@property (nonatomic) _Bool showContentImmediately;
@property (nonatomic) _Bool prefersFirstLineSelection;
@property (nonatomic) unsigned long long caretPosition;
@property (retain, nonatomic) id originalContent;
@property (retain, nonatomic) MFMessageLoadingContext *loadingContext;
@property (copy, nonatomic) NSArray *contentVariations;
@property (nonatomic) unsigned long long defaultContentVariationIndex;
@property (copy, nonatomic) NSString *contentVariationAttachmentCID;
@property (nonatomic, readonly) int composeType;
@property (nonatomic, readonly) NSString *autosaveIdentifier;
@property (nonatomic, readonly) MFMailMessage *legacyMessage;
@property (copy, nonatomic) NSString *originatingBundleID;
@property (nonatomic) int sourceAccountManagement;
@property (nonatomic, readonly) EMMessage *originalMessage;
@property (nonatomic, readonly) MFAttachmentCompositionContext *attachmentContext;
@property (nonatomic, readonly) MFAttachmentManager *attachmentManager;
@property (nonatomic, readonly) NSString *contextID;
@property (weak, nonatomic) id <_MFMailCompositionContextDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSArray *UTITypes;
@property (copy, nonatomic) NSArray *photoIDs;
@property (copy, nonatomic) NSArray *cloudPhotoIDs;
@property (copy, nonatomic) NSArray *contentText;
@property (copy, nonatomic) NSArray *contentURLs;
@property (copy, nonatomic) NSString *shareSheetSessionID;

+ (id)log;
+ (id)processMessageBody:(id)arg1 asHTML:(_Bool)arg2;

- (id)init;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)attachments;
- (id)messageBody;
- (void)setMessageBody:(id)arg1 isHTML:(_Bool)arg2;
- (id)addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
- (void)removeAttachment:(id)arg1;
- (id)addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3 contentID:(id)arg4;
- (void)insertDeferredAttachmentsIntoComposeWebView:(id)arg1;
- (void)switchToReplyAllWithDelegate:(id)arg1;
- (void)switchToReplyWithDelegate:(id)arg1;
- (id)initWithComposeType:(int)arg1 RFC822Data:(id)arg2;
- (id)initWithComposeType:(int)arg1;
- (id)initWithURL:(id)arg1 composeType:(int)arg2 originalMessage:(id)arg3 legacyMessage:(id)arg4;
- (id)initWithComposeType:(int)arg1 originalMessage:(id)arg2 legacyMessage:(id)arg3;
- (void)collection:(id)arg1 addedItemIDs:(id)arg2 before:(id)arg3;
- (void)collection:(id)arg1 addedItemIDs:(id)arg2 after:(id)arg3;
- (void)collection:(id)arg1 movedItemIDs:(id)arg2 before:(id)arg3;
- (void)collection:(id)arg1 movedItemIDs:(id)arg2 after:(id)arg3;
- (void)collection:(id)arg1 changedItemIDs:(id)arg2;
- (void)collection:(id)arg1 deletedItemIDs:(id)arg2;
- (void)collection:(id)arg1 replacedExistingItemID:(id)arg2 withNewItemID:(id)arg3;
- (id)initRecoveredAutosavedMessageWithIdentifier:(id)arg1;
- (id)initReplyToMessage:(id)arg1 legacyMessage:(id)arg2;
- (id)initReplyAllToMessage:(id)arg1 legacyMessage:(id)arg2;
- (id)initForwardOfMessage:(id)arg1 legacyMessage:(id)arg2;
- (id)initDraftRestoreOfMessage:(id)arg1 legacyMessage:(id)arg2;
- (id)initSendAgainDraftOfMessage:(id)arg1 legacyMessage:(id)arg2;
- (id)initOutboxRestoreOfMessage:(id)arg1 legacyMessage:(id)arg2;
- (id)initWithHandoffActivityPayload:(id)arg1;
- (void)recordPasteboardAttachmentsForURLs:(id)arg1;
- (void)recordUndoAttachmentsForURLs:(id)arg1;
- (void)insertAttachmentWithURL:(id)arg1;
- (void)insertAttachmentWithData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 contentID:(id)arg4;
- (_Bool)hasDuetDonationContext;

@end
