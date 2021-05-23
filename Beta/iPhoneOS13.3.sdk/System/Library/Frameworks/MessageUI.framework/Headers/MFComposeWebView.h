/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <WebKit/WKWebView.h>

@class NSArray, NSMutableDictionary, NSString, UIBarButtonItemGroup, _WKRemoteObjectInterface;

@protocol MFComposeBodyFieldController, MFComposeWebViewDelegate, MFMailComposeViewDelegate, MFMailSignatureController, _WKFormInputSession;

@interface MFComposeWebView : WKWebView

{
    id <MFMailComposeViewDelegate> _mailComposeViewDelegate;
    NSString *_compositionContextID;
    id <MFMailSignatureController> _signatureControllerProxy;
    id <MFComposeBodyFieldController> _bodyFieldProxy;
    UIBarButtonItemGroup *_leadingInputAssistantItemGroup;
    NSArray *_trailingInputAssistantItemGroups;
    _Bool _shouldShowStandardButtons;
    unsigned long long _imageCount;
    _Bool _dirty;
    unsigned long long _dirtyChangeIgnoreCount;
    _WKRemoteObjectInterface *_bodyFieldObserverInterface;
    NSArray *_selectedAttachmentIdentifiers;
    unsigned long long _attachmentSequenceNumber;
    NSMutableDictionary *_attachmentsByUniqueIdentifier;
    NSMutableDictionary *_attachmentCIDsByIdentifier;
    NSArray *_originalAttachmentWrappers;
    _Bool _selectionContainsLink;
    _Bool _isFinishing;
    _Bool _originalAttachmentsWereRestored;
    _Bool _attachmentDataMissingAlertDisplayed;
    id <MFComposeWebViewDelegate> _composeWebViewDelegate;
    id <_WKFormInputSession> _inputSession;
}

@property (nonatomic, readonly) id <_WKFormInputSession> inputSession;
@property (nonatomic, readonly) NSArray *_mailComposeEditingTrailingInputAssistantGroups;
@property (nonatomic, readonly) UIBarButtonItemGroup *_mailComposeEditingLeadingInputAssistantGroup;
@property (retain, nonatomic, setter=_setLeadingInputAssistantItemGroup:) UIBarButtonItemGroup *_leadingInputAssistantItemGroup;
@property (retain, nonatomic, setter=_setTrailingInputAssistantItemGroups:) NSArray *_trailingInputAssistantItemGroups;
@property (weak, nonatomic) id <MFComposeWebViewDelegate> composeWebViewDelegate;
@property (weak, nonatomic) id <MFMailComposeViewDelegate> mailComposeViewDelegate;
@property (nonatomic, readonly) id <MFMailSignatureController> signatureControllerProxy;
@property (nonatomic, getter=isDirty) _Bool dirty;
@property (weak, nonatomic) NSString *compositionContextID;
@property (nonatomic, readonly) _Bool allowsAttachmentElements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_webViewConfiguration;

- (struct _NSRange)selectedRange;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)becomeFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)keyCommands;
- (_Bool)_sourceIsManaged;
- (long long)_webView:(id)arg1 dataOwnerForDragSession:(id)arg2;
- (long long)_webView:(id)arg1 dataOwnerForDropSession:(id)arg2;
- (void)_close;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)_webView:(id)arg1 didInsertAttachment:(id)arg2 withSource:(id)arg3;
- (void)_webView:(id)arg1 didRemoveAttachment:(id)arg2;
- (void)_webView:(id)arg1 didInvalidateDataForAttachment:(id)arg2;
- (void)_webView:(id)arg1 didChangeFontAttributes:(id)arg2;
- (long long)_webView:(id)arg1 decidePolicyForFocusedElement:(id)arg2;
- (void)_webView:(id)arg1 willStartInputSession:(id)arg2;
- (id)htmlString;
- (void)_removeAttachment:(id)arg1;
- (void)_addAttachment:(id)arg1;
- (void)prependMarkupString:(id)arg1 quote:(_Bool)arg2;
- (void)beginPreventingLayout;
- (void)appendOrReplace:(id)arg1 withMarkupString:(id)arg2 quote:(_Bool)arg3;
- (void)setOriginalAttachmentInfo:(id)arg1;
- (void)setReplacementFilenamesByContentID:(id)arg1;
- (void)replaceImagesIfNecessary;
- (void)removeDropPlaceholders;
- (void)endPreventingLayout;
- (void)layoutWithMinimumSize;
- (void)addMailAttributesBeforeDisplayHidingTrailingEmptyQuotes:(_Bool)arg1;
- (void)prependPreamble:(id)arg1 quote:(_Bool)arg2;
- (void)prependString:(id)arg1;
- (void)appendMarkupString:(id)arg1 quote:(_Bool)arg2;
- (void)getHTMLStringsAttachmentsAndPlainTextAlternative:(CDUnknownBlockType)arg1;
- (id)plainTextContent;
- (void)composeBodyFieldDidChange;
- (void)composeBodyFieldDidThrowException:(id)arg1;
- (void)composeBodyFieldIsDirtyChanged:(_Bool)arg1;
- (void)composeBodyFieldSelectionContainsLinkStateDidChange:(_Bool)arg1;
- (void)attachmentTapped:(id)arg1;
- (void)selectedAttachmentIdentifiersDidChange:(id)arg1;
- (void)_menuDidHide:(id)arg1;
- (void)_addAdditionalItemsToCalloutBar;
- (void)_pasteAsQuotationKeyCommandInvoked:(id)arg1;
- (void)_increaseQuoteLevelKeyCommandInvoked:(id)arg1;
- (void)_decreaseQuoteLevelKeyCommandInvoked:(id)arg1;
- (void)_increaseQuoteLevel:(id)arg1;
- (void)_decreaseQuoteLevel:(id)arg1;
- (void)updateInputAssistantItem;
- (void)setMarkupString:(id)arg1 quote:(_Bool)arg2;
- (id)_bodyFieldProxy;
- (id)_attachmentInfoByURL;
- (id)_attachmentInfoByIdentifier;
- (void)insertDocumentWithData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 contentID:(id)arg4;
- (void)prepareDataForDocumentAtURLForInsertion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)mimeTypeForFilename:(id)arg1;
- (void)_replaceFilenamePlaceholderWithAttachment:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 contentID:(id)arg4;
- (id)_addInlineAttachmentWithData:(id)arg1 fileName:(id)arg2 type:(id)arg3 contentID:(id)arg4;
- (id)_filenameForVideoAttachmentAtURL:(id)arg1;
- (id)_makeAttachmentDataWithFileURL:(id)arg1 type:(id)arg2;
- (void)_insertDocumentFromData:(id)arg1 isImage:(_Bool)arg2 contentID:(id)arg3;
- (_Bool)_getExtensionAndMimeTypeForImageData:(id)arg1 outExtension:(id *)arg2 outMimeType:(id *)arg3;
- (id)nextAttachmentName;
- (void)getHTMLStringsAttachmentsAndPlainTextAlternativeRemovingSignature:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getHTMLStringsAttachmentsAndPlainTextAlternativeRemovingSignature:(_Bool)arg1 removeQuotes:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_changeQuoteLevelBy:(long long)arg1;
- (_Bool)_shouldShowInsertPhotosButton;
- (void)_didTapInsertPhotoButton:(id)arg1;
- (void)_didTapCameraButton:(id)arg1;
- (void)_didTapImportDocumentButton:(id)arg1;
- (void)_didTapScanDocumentButton:(id)arg1;
- (void)_didTapInsertDrawingOrMarkupButton:(id)arg1;
- (_Bool)_shouldShowMarkupButton;
- (void)markupSelectedAttachment;
- (void)changeQuoteLevel:(long long)arg1;
- (void)_removeInlineAttachment:(id)arg1;
- (void)showQuoteLevelOptions;
- (void)setMarkupString:(id)arg1;
- (void)scaleImagesToScale:(unsigned long long)arg1;
- (void)unscaleImages;
- (void)setCaretPosition:(unsigned long long)arg1;
- (void)insertDocumentWithURL:(id)arg1 isDrawingFile:(_Bool)arg2;
- (void)showOriginalAttachments;
- (void)insertPhotoOrVideoWithAssetIdentifier:(id)arg1 infoDictionary:(id)arg2;
- (void)removeMediaWithAssetIdentifier:(id)arg1;
- (void)insertScannedDocumentWithData:(id)arg1;
- (id)contentIDsForMediaAttachments;
- (void)placeCaretAtStartOfBodyField;
- (id)containsRichText;
- (struct CGRect)rectOfElementWithID:(id)arg1;
- (void)setPrefersFirstLineSelection;
- (void)replaceAttachment:(id)arg1 withDocumentData:(id)arg2 fileName:(id)arg3 mimeType:(id)arg4;
- (void)replaceAttachment:(id)arg1 withDocumentAtURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)retainFocusAfterPresenting;
- (void)releaseFocusAfterDismissing:(_Bool)arg1;
- (void)compositionWillFinish;
- (void)compositionDidFailToFinish;

@end
