/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class NSAttributedString, NSLayoutConstraint, NSString, UIPrintPageRenderer, UISimpleTextPrintFormatter, UITextView;

__attribute__((visibility("hidden")))
@interface QLTextItemViewController

{
    UITextView *_textView;
    NSAttributedString *_content;
    NSLayoutConstraint *_leftConstraint;
    NSLayoutConstraint *_rightConstraint;
    UISimpleTextPrintFormatter *_printFormatter;
    UIPrintPageRenderer *_pageRenderer;
}

@property (readonly) UISimpleTextPrintFormatter *printFormatter;
@property (readonly) UIPrintPageRenderer *pageRenderer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (long long)preferredWhitePointAdaptivityStyle;
- (id)scrollView;
- (id)printer;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;
- (_Bool)canSwipeToDismiss;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)canPinchToDismiss;
- (void)setAppearance:(id)arg1 animated:(_Bool)arg2;
- (void)_updateConstraintConstants:(_Bool)arg1;
- (void)numberOfPagesWithSize:(struct CGSize)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)prepareForDrawingPages:(struct _NSRange)arg1 ofSize:(struct CGSize)arg2;
- (void)pdfDataForPageAtIndex:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)provideCurrentPageAndVisibleRectWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)automaticallyUpdateScrollViewContentOffset;
- (_Bool)automaticallyUpdateScrollViewContentInset;
- (_Bool)automaticallyUpdateScrollViewIndicatorInset;
- (void)_setupTextViewColorsWithDocumentAttributes:(id)arg1;
- (_Bool)_documentAttributesContainTextColors:(id)arg1;
- (id)registeredKeyCommands;
- (_Bool)shouldRecognizeGestureRecognizer:(id)arg1;

@end
