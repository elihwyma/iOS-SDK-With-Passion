/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <MessageUI/MFComposeHeaderView.h>

@class MFComposeRecipient, MFCorecipientsIndicatorAtom, MFModernComposeRecipientAtom, NSArray, NSCountedSet, NSMutableArray, NSMutableDictionary, NSString, NSTimer, UIButton, UIFont, UITapGestureRecognizer, UITextField, UIView, _MFMailRecipientTextField;

@protocol MFComposeRecipientViewDelegate;

@interface MFComposeRecipientView : MFComposeHeaderView

{
    _MFMailRecipientTextField *_textField;
    NSArray *_textFieldConstraints;
    NSMutableArray *_recipients;
    NSCountedSet *_uncommentedAddresses;
    struct __CFDictionary *_atomPresentationOptionsByRecipient;
    unsigned long long _defaultAtomPresentationOptions;
    MFModernComposeRecipientAtom *_selectedAtom;
    MFComposeRecipient *_placeholderRecipient;
    long long _dragSourceOriginalIndex;
    UIButton *_addButton;
    _Bool _editable;
    _Bool _picking;
    _Bool _expanded;
    NSArray *_properties;
    long long _maxRecipients;
    _Bool _parentIsClosing;
    _Bool _deselectOnNextKeyboardInput;
    _Bool _clearSelectionUIAfterFirstResponder;
    NSTimer *_delayTimer;
    double _inputDelay;
    UITapGestureRecognizer *_tapGestureRecognizer;
    _Bool _needsReflow;
    _Bool _needsLayoutConstraintUpdate;
    UIFont *_baseFont;
    _Bool _didIgnoreFirstResponderResign;
    _Bool _allowsDragAndDrop;
    _Bool _separatorHidden;
    int _hideLastAtomComma;
    MFCorecipientsIndicatorAtom *_corecipientsIndicatorAtom;
    NSMutableDictionary *_atoms;
}

@property (retain, nonatomic) MFComposeRecipient *placeholderRecipient;
@property (nonatomic) _Bool didIgnoreFirstResponderResign;
@property (retain, nonatomic) NSMutableDictionary *atoms;
@property (retain, nonatomic) MFCorecipientsIndicatorAtom *corecipientsIndicator;
@property (copy, nonatomic) NSArray *addresses;
@property (nonatomic) _Bool editable;
@property (nonatomic) long long maxRecipients;
@property (nonatomic) double inputDelay;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) UITextField *textField;
@property (nonatomic, readonly) NSArray *recipients;
@property (nonatomic, readonly) UIView *addButton;
@property (nonatomic, readonly) double offsetForRowWithTextField;
@property (nonatomic, readonly) long long numberOfRowsOfTextInField;
@property (nonatomic) _Bool allowsDragAndDrop;
@property (nonatomic) _Bool expanded;
@property (nonatomic) unsigned long long defaultAtomPresentationOptions;
@property (nonatomic, getter=isSeparatorHidden) _Bool separatorHidden;
@property (retain, nonatomic) UIFont *baseFont;
@property (nonatomic) int hideLastAtomComma;
@property (weak, nonatomic) id <MFComposeRecipientViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)setLabel:(id)arg1;
- (void)setProperties:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)becomeFirstResponder;
- (void)didMoveToSuperview;
- (_Bool)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(_Bool)arg3;
- (_Bool)keyboardInputShouldDelete:(id)arg1;
- (void)keyboardInputChangedSelection:(id)arg1;
- (_Bool)hasContent;
- (void)textChanged:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBecomeFirstResponder:(id)arg1;
- (void)clearText;
- (void)textFieldDidResignFirstResponder:(id)arg1;
- (void)_tapGestureRecognized:(id)arg1;
- (void)addRecipient:(id)arg1;
- (void)removeRecipient:(id)arg1;
- (void)setProperty:(int)arg1;
- (void)addAddress:(id)arg1;
- (_Bool)finishEnteringRecipient;
- (id)uncommentedAddresses;
- (void)parentWillClose;
- (void)parentDidClose;
- (void)selectComposeRecipientAtom:(id)arg1;
- (void)reflow;
- (void)refreshPreferredContentSize;
- (void)_removeAllRecipients;
- (void)_addRecord:(void *)arg1 identifier:(int)arg2;
- (void)addRecipient:(id)arg1 index:(unsigned long long)arg2 animate:(_Bool)arg3;
- (void)deselectComposeRecipientAtom:(id)arg1;
- (void)composeRecipientAtomShowPersonCard:(id)arg1;
- (void)composeRecipientAtomSelectPrevious:(id)arg1;
- (void)composeRecipientAtomSelectNext:(id)arg1;
- (void)addRecord:(void *)arg1 property:(int)arg2 identifier:(int)arg3;
- (_Bool)containsAddress:(id)arg1;
- (double)textFieldOffsetForNumberOfRowsToScroll:(unsigned long long)arg1 numberOfRowsAboveField:(long long)arg2;
- (void)addButtonClicked:(id)arg1;
- (void)_cancelDelayTimer;
- (void)_setNeedsReflow;
- (void)_reflowAnimated:(_Bool)arg1;
- (void)_addUncommentedAddress:(id)arg1;
- (void)_removeAddressAtomPresentationOptionsForRecipient:(id)arg1;
- (void)_removeUncommentedAddress:(id)arg1;
- (void)clearAllAddressAtomPresentationOptions;
- (void)_deselectAtom;
- (_Bool)_addable;
- (unsigned long long)_addressAtomPresentationOptionsForRecipient:(id)arg1;
- (void)_updateLayoutConstraintsAndGetNumberOfRows:(out unsigned long long *)arg1 textFieldWillBeLastRow:(out _Bool *)arg2;
- (double)_topRowTextWidth;
- (_Bool)_shouldShowCorecipientsIndicatorAtom;
- (void)_delayTimerFired:(id)arg1;
- (void)_deleteSelectedAtom;
- (void)didTapShowCorecipientsForIndicatorAtom:(id)arg1 recipients:(id)arg2;
- (void)setAddressAtomPresentationOptions:(unsigned long long)arg1 forRecipient:(id)arg2;
- (void)showCorecipientIndicator:(_Bool)arg1 withCorecipients:(id)arg2 animated:(_Bool)arg3;
- (_Bool)mf_textFieldShowingSearchResults:(id)arg1;
- (void)mf_selectNextSearchResultForTextField:(id)arg1;
- (void)mf_selectPreviousSearchResultForTextField:(id)arg1;
- (_Bool)mf_presentSearchResultsForTextField:(id)arg1;
- (_Bool)mf_chooseSelectedSearchResultForTextField:(id)arg1;
- (void)mf_dismissSearchResults:(id)arg1;
- (void)mf_recipientTextField:(id)arg1 didAddRecipientAddress:(id)arg2;
- (void)_setNeedsLayoutConstraintUpdate;

@end
