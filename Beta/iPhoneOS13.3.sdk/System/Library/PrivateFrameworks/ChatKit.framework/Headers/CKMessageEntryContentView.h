/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIScrollView.h>

#import <ChatKit/Swift-Protocol.h>

@class CKComposition, CKConversation, CKMessageEntryRichTextView, CKMessageEntryTextView, IMPluginPayload, NSString, UIButton, UIView, UIViewController;

@protocol CKPluginEntryViewController;

@interface CKMessageEntryContentView : UIScrollView <Swift>

{
    _Bool _shouldShowSubject;
    _Bool _needsTextLayout;
    _Bool _needsEnsureSelectionVisible;
    _Bool _needsEnsureTextViewVisible;
    _Bool _ignoreEndEditing;
    _Bool _isCompositionExpirable;
    _Bool _pendingShelfPayloadWillAnimateIn;
    CKComposition *_composition;
    long long _style;
    CKMessageEntryTextView *_subjectView;
    CKMessageEntryRichTextView *_textView;
    double _placeHolderWidth;
    double _maxContentWidthWhenExpanded;
    double _maxPreviewContentWidthWhenExpanded;
    double _containerViewLineWidth;
    double _sendButtonTextInsetWidth;
    UIViewController<CKPluginEntryViewController> *_pluginEntryViewController;
    CKConversation *_conversation;
    CKMessageEntryTextView *_activeView;
    IMPluginPayload *_shelfPluginPayload;
    UIView *_textAndSubjectDividerLine;
    UIView *_pluginDividerLine;
    UIButton *_clearPluginButton;
    NSString *_requestedPlaceholderText;
    NSString *_overridePlaceholderText;
}

@property (weak, nonatomic) CKMessageEntryTextView *activeView;
@property (nonatomic) _Bool shouldShowSubject;
@property (retain, nonatomic) UIViewController<CKPluginEntryViewController> *pluginEntryViewController;
@property (retain, nonatomic) IMPluginPayload *shelfPluginPayload;
@property (retain, nonatomic) CKMessageEntryTextView *subjectView;
@property (retain, nonatomic) CKMessageEntryRichTextView *textView;
@property (retain, nonatomic) UIView *textAndSubjectDividerLine;
@property (retain, nonatomic) UIView *pluginDividerLine;
@property (nonatomic) _Bool needsTextLayout;
@property (nonatomic) _Bool needsEnsureSelectionVisible;
@property (nonatomic) _Bool needsEnsureTextViewVisible;
@property (nonatomic) _Bool ignoreEndEditing;
@property (nonatomic) _Bool isCompositionExpirable;
@property (retain, nonatomic) UIButton *clearPluginButton;
@property (retain, nonatomic) NSString *requestedPlaceholderText;
@property (retain, nonatomic) NSString *overridePlaceholderText;
@property (nonatomic) _Bool pendingShelfPayloadWillAnimateIn;
@property (nonatomic, readonly) _Bool shouldShowPlugin;
@property (retain, nonatomic) CKComposition *composition;
@property (copy, nonatomic) NSString *placeholderText;
@property (nonatomic, readonly) UIView *pluginView;
@property (nonatomic, readonly, getter=isActive) _Bool active;
@property (nonatomic, readonly, getter=isSingleLine) _Bool singleLine;
@property (nonatomic, readonly, getter=isShowingDictationPlaceholder) _Bool showingDictationPlaceholder;
@property (nonatomic, readonly) struct UIEdgeInsets contentTextAlignmentInsets;
@property (nonatomic) BOOL balloonColor;
@property (nonatomic) double placeHolderWidth;
@property (nonatomic) double maxContentWidthWhenExpanded;
@property (nonatomic) double maxPreviewContentWidthWhenExpanded;
@property (nonatomic) double containerViewLineWidth;
@property (nonatomic) double sendButtonTextInsetWidth;
@property (weak, nonatomic) CKConversation *conversation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) long long style;

+ (id)_createTextView;
+ (id)_createSubjectView;
+ (void)prewarmTextView;

- (void)dealloc;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)acceptAutocorrection;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)makeActive;
- (void)_updateUI;
- (id)initWithFrame:(struct CGRect)arg1 shouldShowSubject:(_Bool)arg2;
- (void)willAnimateBoundsChange;
- (void)messageEntryRichTextViewDidTapHandwritingKey:(id)arg1;
- (double)maxWidthForPreviewImagesInMessageEntryRichTextView:(id)arg1;
- (_Bool)messageEntryRichTextView:(id)arg1 shouldRecognizeGesture:(id)arg2;
- (void)messageEntryRichTextViewWasTapped:(id)arg1 isLongPress:(_Bool)arg2;
- (void)messageEntryRichTextView:(id)arg1 didTapMediaObject:(id)arg2;
- (void)didFinishAnimatedBoundsChange;
- (double)_calcuateIdealMaxPluginHeight:(_Bool)arg1;
- (_Bool)shouldShowClearButton;
- (void)_layoutDividerLine:(id)arg1 leftInset:(double)arg2 rightInset:(double)arg3 currentYOffset:(double *)arg4;
- (double)_maxWidthForTextView;
- (void)_layoutTextView:(id)arg1 currentYOffset:(double *)arg2 originX:(double)arg3 maxWidth:(double)arg4;
- (void)ensureSelectionVisibleIfNeeded;
- (void)ensureTextViewVisibleIfNeeded;
- (void)clearPluginButtonTapped:(id)arg1;
- (void)pluginPayloadWantsResize:(id)arg1;
- (void)plugingPayloadDidLoad:(id)arg1;
- (void)invalidateComposition;
- (void)configureShelfForPluginPayload:(id)arg1;
- (_Bool)_shouldDeferUpdateUI;
- (_Bool)messageEntryRichTextView:(id)arg1 shouldPasteMediaObjects:(id)arg2;
- (void)messageEntryRichTextView:(id)arg1 pastedURL:(id)arg2;
- (void)prepareForShelfPayloadAnimation;
- (_Bool)shouldLayoutPluginEdgeToEdge;

@end
