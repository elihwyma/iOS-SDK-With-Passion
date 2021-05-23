/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <UIKit/UIView.h>

#import <NotesUI/Swift-Protocol.h>

@class NSArray, NSString, NoteDateLabel, NoteHTMLEditorView;

@protocol NoteContentLayerAttachmentPresentationDelegate, NoteContentLayerDelegate, NotesTextureScrolling;

@interface NoteContentLayer : UIView <Swift>

{
    _Bool _containsCJK;
    _Bool _tracksMaximumContentLength;
    _Bool _allowsAttachments;
    _Bool _showsDateLabel;
    _Bool _updatedTitleRange;
    id <NoteContentLayerDelegate> _delegate;
    id <NoteContentLayerAttachmentPresentationDelegate> _attachmentPresentationDelegate;
    id <NotesTextureScrolling> _textureScrollingDelegate;
    NoteHTMLEditorView *_noteHTMLEditorView;
    NSArray *_horizontalConstraints;
    NoteDateLabel *_dateLabel;
}

@property (retain, nonatomic) NSArray *horizontalConstraints;
@property (retain, nonatomic) NoteHTMLEditorView *noteHTMLEditorView;
@property (retain, nonatomic) NoteDateLabel *dateLabel;
@property (nonatomic) _Bool updatedTitleRange;
@property (nonatomic, readonly) _Bool hasFullWidth;
@property (nonatomic, readonly) _Bool hasFullHeight;
@property (weak, nonatomic) id <NoteContentLayerDelegate> delegate;
@property (weak, nonatomic) id <NoteContentLayerAttachmentPresentationDelegate> attachmentPresentationDelegate;
@property (nonatomic) _Bool containsCJK;
@property (nonatomic, getter=isEditable) _Bool editable;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) _Bool contentContainsValuableContent;
@property (nonatomic) struct CGPoint contentOffset;
@property (weak, nonatomic) id <NotesTextureScrolling> textureScrollingDelegate;
@property (nonatomic) _Bool tracksMaximumContentLength;
@property (nonatomic) _Bool allowsAttachments;
@property (nonatomic) _Bool showsDateLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)setBounds:(struct CGRect)arg1;
- (_Bool)isFirstResponder;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)webArchive;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)becomeFirstResponder;
- (void)setScrollIndicatorInsets:(struct UIEdgeInsets)arg1;
- (void)updateConstraints;
- (void)layoutMarginsDidChange;
- (_Bool)resignFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)canResignFirstResponder;
- (void)flashScrollIndicators;
- (id)keyCommands;
- (void)scrollSelectionToVisible:(_Bool)arg1;
- (id)viewPrintFormatter;
- (void)setSelectionToStart;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)scrollToTopAnimated:(_Bool)arg1;
- (void)setTimestampDate:(id)arg1;
- (void)updateMarginConstraints;
- (void)insertDateLabel;
- (void)updateDateLabel;
- (void)forcedSetContainsCJK:(_Bool)arg1;
- (void)didChangeFullSizeClass;
- (void)invalidateSizeRelatedConstraints;
- (void)updateHorizontalConstraints;
- (struct CGRect)rectForSelection;
- (void)replaceSelectionWithAttachmentPresentation:(id)arg1;
- (void)copyNoteHTMLToPasteboard;
- (void)chosenUTI:(id *)arg1 andChosenMIMEType:(id *)arg2 forItemProvider:(id)arg3;
- (_Bool)shouldRenderAsAttachment:(id)arg1;
- (void)processAttachmentItemProviders:(id)arg1;
- (void)reloadInterface;
- (_Bool)processMapAttachmentItemProvider:(id)arg1;
- (_Bool)allowsAttachmentsInNoteHTMLEditorView:(id)arg1;
- (_Bool)noteHTMLEditorView:(id)arg1 canAddAttachmentItemProviders:(id)arg2;
- (void)noteHTMLEditorView:(id)arg1 addAttachmentItemProviders:(id)arg2;
- (id)noteHTMLEditorView:(id)arg1 createAttachmentPresentationWithFileWrapper:(id)arg2 mimeType:(id)arg3;
- (_Bool)noteHTMLEditorViewShouldBeginEditing:(id)arg1 isUserInitiated:(_Bool)arg2;
- (void)noteHTMLEditorViewDidBeginEditing:(id)arg1;
- (void)noteHTMLEditorViewDidEndEditing:(id)arg1;
- (void)noteHTMLEditorViewWillChange:(id)arg1;
- (void)noteHTMLEditorViewDidChange:(id)arg1;
- (void)noteHTMLEditorView:(id)arg1 openURL:(id)arg2;
- (id)noteHTMLEditorView:(id)arg1 fileURLForAttachmentWithContentID:(id)arg2;
- (id)noteHTMLEditorView:(id)arg1 attachmentPresentationForContentID:(id)arg2;
- (_Bool)isNoteManagedForNoteHTMLEditorView:(id)arg1;
- (void)noteHTMLEditorViewNeedsContentReload:(id)arg1;
- (void)noteHTMLEditorView:(id)arg1 didInvokeFormattingCalloutOption:(long long)arg2;
- (void)noteHTMLEditorView:(id)arg1 didInvokeStyleFormattingOption:(long long)arg2;
- (id)noteHTMLEditorView:(id)arg1 updateAttachments:(id)arg2;
- (void)noteHTMLEditorView:(id)arg1 webScrollViewDidScroll:(id)arg2;
- (_Bool)canInsertImagesInNoteHTMLEditorView:(id)arg1;
- (_Bool)noteHTMLEditorView:(id)arg1 acceptContentsFromPasteboard:(id)arg2;
- (void)noteHTMLEditorView:(id)arg1 showShareSheetForAttachment:(id)arg2 atPoint:(struct CGPoint)arg3;
- (id)readerDelegateInNoteHTMLEditorView:(id)arg1;
- (_Bool)noteHTMLEditorViewShouldPaste:(id)arg1;
- (void)insertImageInNoteHTMLEditorView:(id)arg1;
- (_Bool)isNoteHTMLEditorViewVisible:(id)arg1;
- (void)setContent:(id)arg1 isPlainText:(_Bool)arg2 isCJK:(_Bool)arg3 attachments:(id)arg4;
- (id)contentAsPlainText:(_Bool)arg1;
- (struct CGRect)rectForDOMNode:(id)arg1;
- (void)noteHTMLEditorView:(id)arg1 didAddAttachmentForMimeType:(id)arg2 filename:(id)arg3 data:(id)arg4;

@end
