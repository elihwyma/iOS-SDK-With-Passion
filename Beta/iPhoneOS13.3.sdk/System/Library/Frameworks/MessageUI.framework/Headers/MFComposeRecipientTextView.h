/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <MessageUI/MFComposeHeaderView.h>

@class MFDragSource, MFDropTarget, NSArray, NSMutableArray, NSMutableDictionary, NSString, NSTimer, NSUndoManager, UIButton, UIColor, UIFont, UITextView, UIView, _MFAtomTextAttachment, _MFAtomTextView;

@protocol MFComposeRecipientTextViewDelegate;

@interface MFComposeRecipientTextView : MFComposeHeaderView

{
    _MFAtomTextView *_textView;
    UITextView *_inactiveTextView;
    UIColor *_inactiveTextColor;
    NSMutableArray *_atomViews;
    NSMutableDictionary *_atomPresentationOptionsByRecipient;
    NSMutableDictionary *_atomLayoutOptionsByRecipient;
    MFDragSource *_dragSource;
    MFDropTarget *_dropTarget;
    struct CGRect _currentTextRect;
    long long _atomViewAnimationDepth;
    _Bool _parentIsClosing;
    _Bool _textViewExclusionPathsAreValid;
    _Bool _isTextFieldCollapsed;
    _Bool _collapsedStateInitialized;
    _Bool _indicatesUnsafeRecipientsWhenCollapsed;
    _Bool _notifyDelegateOfSizeChange;
    NSTimer *_collapsableUpdateTimer;
    NSArray *_properties;
    NSMutableArray *_recipientsBeingRemoved;
    NSUndoManager *_undoManager;
    struct CGRect _addButtonFrame;
    _Bool _editable;
    _Bool _separatorHidden;
    _Bool _expanded;
    _Bool _didIgnoreFirstResponderResign;
    _Bool _showsAddButtonWhenExpanded;
    int _hideLastAtomComma;
    UIFont *_baseFont;
    long long _maxRecipients;
    UIButton *_addButton;
    UIColor *_typingTextColor;
    _MFAtomTextAttachment *_placeholderAttachment;
    UIView *_atomContainerView;
}

@property (retain, nonatomic) _MFAtomTextAttachment *placeholderAttachment;
@property (nonatomic, readonly) UIView *atomContainerView;
@property (weak, nonatomic) id <MFComposeRecipientTextViewDelegate> delegate;
@property (copy, nonatomic) NSArray *recipients;
@property (copy, nonatomic) NSArray *addresses;
@property (copy, nonatomic, readonly) NSArray *uncommentedAddresses;
@property (nonatomic) _Bool editable;
@property (nonatomic, getter=isSeparatorHidden) _Bool separatorHidden;
@property (nonatomic) _Bool expanded;
@property (nonatomic) _Bool indicatesUnsafeRecipientsWhenCollapsed;
@property (nonatomic, readonly) _Bool didIgnoreFirstResponderResign;
@property (nonatomic) long long maxRecipients;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) UITextView *textView;
@property (nonatomic, readonly) UIButton *addButton;
@property (nonatomic) _Bool showsAddButtonWhenExpanded;
@property (nonatomic, readonly) double offsetForRowWithTextField;
@property (nonatomic, readonly) unsigned long long numberOfRowsOfTextInField;
@property (retain, nonatomic) UIFont *baseFont;
@property (retain, nonatomic) UIColor *inactiveTextColor;
@property (retain, nonatomic) UIColor *typingTextColor;
@property (nonatomic) int hideLastAtomComma;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultFont;

- (void)dealloc;
- (void)setBounds:(struct CGRect)arg1;
- (void)setLabel:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(_Bool)arg3;
- (_Bool)isFirstResponder;
- (id)_baseAttributes;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (_Bool)becomeFirstResponder;
- (id)undoManager;
- (_Bool)hasContent;
- (void)_longPressGestureRecognized:(id)arg1;
- (void)clearText;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)_tapGestureRecognized:(id)arg1;
- (void)addRecipient:(id)arg1;
- (void)removeRecipient:(id)arg1;
- (void)setProperty:(int)arg1;
- (void)addAddress:(id)arg1;
- (_Bool)finishEnteringRecipient;
- (void)invalidateAtomPresentationOptionsForRecipient:(id)arg1;
- (void)parentWillClose;
- (void)parentDidClose;
- (id)atomViewForRecipient:(id)arg1;
- (unsigned long long)_atomPresentationOptionsForRecipient:(id)arg1;
- (void)invalidateAtomPresentationOptions;
- (id)atomViewsInRange:(struct _NSRange)arg1;
- (void)atomTextViewDidBecomeFirstResponder:(id)arg1;
- (void)selectComposeRecipientAtom:(id)arg1;
- (void)reflow;
- (void)refreshPreferredContentSize;
- (_Bool)_shouldEmbedLabelInTextView;
- (void)_setAddButtonVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setEditable:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)_useRightToLeftLayout;
- (void)_invalidateTextContainerExclusionPaths;
- (void)_updateInactiveTextView;
- (void)_removeAllRecipients;
- (void)addRecipient:(id)arg1 notify:(_Bool)arg2;
- (void)_recipientsWereAdded:(id)arg1;
- (void)addRecipient:(id)arg1 index:(unsigned long long)arg2 animate:(_Bool)arg3 notify:(_Bool)arg4;
- (void)_addRecord:(void *)arg1 identifier:(int)arg2;
- (void)_beginAtomViewAnimations;
- (void)addRecipient:(id)arg1 index:(unsigned long long)arg2 animate:(_Bool)arg3;
- (id)_atomAttachmentForRecipient:(id)arg1;
- (void)_insertAtomAttachment:(id)arg1 atCharacterIndex:(unsigned long long)arg2;
- (void)_didRemoveRecipient:(id)arg1;
- (id)_userEnteredTextWithRange:(struct _NSRange *)arg1;
- (void)_setTextViewIsCollapsed:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateAddButtonVisibility;
- (void)_recomputeTextContainerExclusionPaths;
- (_Bool)_canAddAdditionalAtoms;
- (_Bool)_isTextViewCollapsed;
- (void)_ensureAddButton;
- (id)_textContainerExclusionPathsWithAddButton:(_Bool)arg1;
- (void)_ensureInactiveTextView;
- (id)_attributedStringWithAtomizedRecipients;
- (_Bool)_textViewContainsAtomizedRecipients;
- (_Bool)_hasUnsafeRecipients;
- (id)_toString;
- (_Bool)_delegateRespondsToSizeChange;
- (void)_notifyDelegateOfNewSize:(struct CGSize)arg1;
- (_Bool)_isAddButtonVisible;
- (void)_addButtonTapped:(id)arg1;
- (void)_insertAtomAttachment:(id)arg1 andReplaceCharactersInRange:(struct _NSRange)arg2;
- (id)_atomViewAtCharacterIndex:(unsigned long long)arg1;
- (void)_resetSelectionState;
- (id)_valueForAtomLayoutOption:(id)arg1 withRecipient:(id)arg2;
- (void)_addAddressAtomSubview:(id)arg1;
- (_Bool)_shouldAnimateAtomViewChanges;
- (void)_removeAddressAtomSubview:(id)arg1;
- (void)_notifyDelegateOfSizeChange;
- (id)_placeholderAttachmentWithStaticWidth;
- (struct _NSRange)_placeholderAttachmentRange;
- (void)_setValue:(id)arg1 forAtomLayoutOption:(id)arg2 withRecipient:(id)arg3;
- (struct _NSRange)_rangeForComposeRecipientAtom:(id)arg1;
- (void)deselectComposeRecipientAtom:(id)arg1;
- (void)composeRecipientAtomShowPersonCard:(id)arg1;
- (void)composeRecipientAtomSelectPrevious:(id)arg1;
- (void)composeRecipientAtomSelectNext:(id)arg1;
- (void)dragEnteredAtPoint:(struct CGPoint)arg1;
- (void)dragMovedToPoint:(struct CGPoint)arg1;
- (void)dragExited;
- (void)dropItems:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 dragDropDelegate:(id)arg2;
- (void)addRecord:(void *)arg1 property:(int)arg2 identifier:(int)arg3;
- (_Bool)containsAddress:(id)arg1;
- (double)textFieldOffsetForNumberOfRowsToScroll:(unsigned long long)arg1 numberOfRowsAboveField:(long long)arg2;
- (void)_invalidateAtomPresentationOptionsCache;
- (id)selectedAtoms;
- (unsigned long long)indexOfRecipientForInsertionAtPoint:(struct CGPoint)arg1;
- (void)atomTextViewDidResignFirstResponder:(id)arg1;
- (void)atomTextView:(id)arg1 didChangeWritingDirection:(long long)arg2;
- (id)dragPreviewForDraggedItem:(id)arg1 withContainer:(id)arg2;

@end
