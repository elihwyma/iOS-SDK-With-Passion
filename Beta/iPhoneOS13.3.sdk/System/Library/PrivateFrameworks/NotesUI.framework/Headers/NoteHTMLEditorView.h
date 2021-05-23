/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <UIKit/UIView.h>

#import <NotesUI/Swift-Protocol.h>

@class ICSelectorDelayer, NSArray, NSLayoutConstraint, NSString, NoteWKWebView, UIViewPrintFormatter, WebArchive;

@protocol NoteHTMLEditorViewActionDelegate, NoteHTMLEditorViewDelegate, NoteHTMLEditorViewLayoutDelegate;

@interface NoteHTMLEditorView : UIView <Swift>

{
    _Bool _hasAttachments;
    _Bool _editable;
    _Bool _editing;
    _Bool _updatingContent;
    unsigned short _listStyle;
    id <NoteHTMLEditorViewDelegate> _delegate;
    id <NoteHTMLEditorViewActionDelegate> _actionDelegate;
    id <NoteHTMLEditorViewLayoutDelegate> _layoutDelegate;
    NSLayoutConstraint *_contentSizeHeightConstraint;
    NSLayoutConstraint *_contentSizeWidthConstraint;
    NoteWKWebView *_webView;
    NSString *_htmlString;
    NSString *_title;
    NSString *_text;
    NSArray *_attachmentContentIDs;
    long long _selectionLength;
    NSString *_htmlStringToLoad;
    NSArray *_attachmentsToLoad;
    ICSelectorDelayer *_updateContentDelayer;
}

@property (copy, nonatomic) NSString *htmlStringToLoad;
@property (copy, nonatomic) NSArray *attachmentsToLoad;
@property (retain, nonatomic) ICSelectorDelayer *updateContentDelayer;
@property (nonatomic) _Bool updatingContent;
@property (weak, nonatomic) id <NoteHTMLEditorViewDelegate> delegate;
@property (weak, nonatomic) id <NoteHTMLEditorViewActionDelegate> actionDelegate;
@property (weak, nonatomic) id <NoteHTMLEditorViewLayoutDelegate> layoutDelegate;
@property (retain, nonatomic) NSLayoutConstraint *contentSizeHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *contentSizeWidthConstraint;
@property (retain, nonatomic) NoteWKWebView *webView;
@property (copy, nonatomic) NSString *htmlString;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSArray *attachmentContentIDs;
@property (nonatomic) _Bool hasAttachments;
@property (nonatomic, readonly) UIViewPrintFormatter *viewPrintFormatter;
@property (nonatomic, readonly) WebArchive *webArchive;
@property (nonatomic, getter=isEditable) _Bool editable;
@property (nonatomic, getter=isEditing) _Bool editing;
@property (nonatomic) long long selectionLength;
@property (nonatomic) double textZoomFactor;
@property (nonatomic) unsigned short listStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)baseHTMLString;

- (id)initWithCoder:(id)arg1;
- (_Bool)isFirstResponder;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)updateContent;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;
- (void)scrollSelectionToVisible:(_Bool)arg1;
- (void)setSelectionToEnd;
- (long long)_webView:(id)arg1 dataOwnerForDragSession:(id)arg2;
- (long long)_webView:(id)arg1 dataOwnerForDropSession:(id)arg2;
- (void)setSelectionToStart;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (void)_webView:(id)arg1 didInsertAttachment:(id)arg2 withSource:(id)arg3;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)webView:(id)arg1 startURLSchemeTask:(id)arg2;
- (void)webView:(id)arg1 stopURLSchemeTask:(id)arg2;
- (_Bool)_webView:(id)arg1 focusShouldStartInputSession:(id)arg2;
- (void)_webView:(id)arg1 didStartInputSession:(id)arg2;
- (_Bool)_webView:(id)arg1 performDataInteractionOperationWithItemProviders:(id)arg2;
- (void)_webView:(id)arg1 contextMenuConfigurationForElement:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_webView:(id)arg1 contextMenuDidEndForElement:(id)arg2;
- (void)startEditing;
- (id)webViewConfiguration;
- (void)insertImage:(id)arg1;
- (void)removeStyle:(id)arg1;
- (void)setHtmlString:(id)arg1 attachments:(id)arg2;
- (struct CGRect)rectForSelection;
- (void)replaceSelectionWithAttachmentPresentation:(id)arg1;
- (void)copyNoteHTMLToPasteboard;
- (void)insertHTMLString:(id)arg1;
- (void)insertLinkWithURL:(id)arg1 title:(id)arg2;
- (void)setupWebView;
- (void)menuControllerDidHide:(id)arg1;
- (id)jsonStringFromDictionaryOrArray:(id)arg1;
- (void)setEnableSmartLists:(_Bool)arg1;
- (void)setEnableAttachments:(_Bool)arg1;
- (void)updateDataDetectors;
- (id)attachmentInfoDictionaryForAttachmentPresentation:(id)arg1;
- (void)undoablyRemoveAttachmentPresentations:(id)arg1 undoManager:(id)arg2;
- (void)undoablyReplaceSelectionWithAttachmentPresentations:(id)arg1 undoManager:(id)arg2;
- (void)adoptEditableState;
- (void)updateMenuController;
- (void)stopEditingWithCompletion:(CDUnknownBlockType)arg1;
- (void)replaceContentIDs:(id)arg1;
- (id)contextMenuConfigurationForElement:(id)arg1 presentation:(id)arg2;
- (void)setEnableShiftNewlinesInSmartLists:(_Bool)arg1;
- (void)insertLinksWithURLs:(id)arg1 titles:(id)arg2;
- (void)stopEditing;
- (void)insertBulletedList:(id)arg1;
- (void)insertDashedList:(id)arg1;
- (void)insertOrderedList:(id)arg1;

@end
