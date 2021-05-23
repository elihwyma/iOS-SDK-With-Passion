/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITextField.h>

@class NSArray, NSHashTable, NSMutableDictionary, NSString, NSValue, UIColor, UIImageView, UISearchBar, UITapGestureRecognizer, UITextRange, _UISearchBarSearchFieldBackgroundView, _UISearchBarTextFieldTokenCounter;

@interface UISearchTextField : UITextField

{
    NSMutableDictionary *_customClearButtons;
    NSMutableDictionary *_iconOffsets;
    NSValue *_searchTextOffsetValue;
    _UISearchBarSearchFieldBackgroundView *_effectBackgroundTop;
    _UISearchBarSearchFieldBackgroundView *_effectBackgroundBottom;
    UIImageView *_defaultLeftView;
    _Bool _deferringFirstResponder;
    _Bool _animatePlaceholderOnResignFirstResponder;
    struct {
        unsigned int searchBarWantsShouldSendContentChangedNotificationsIfOnlyMarkedTextChanged:1;
        unsigned int delegateImplementsItemProviderForCopyingTokens;
        unsigned int delegateImplementsUnderscoredItemProviderForCopyingTokens;
        unsigned int allowsCopyingTokens:1;
        unsigned int allowsDeletingTokens:1;
    } _searchBarTextFieldFlags;
    NSHashTable *_knownTokenLayoutViews;
    _UISearchBarTextFieldTokenCounter *_tokenCounter;
    UITapGestureRecognizer *_tokenTapGestureRecognizer;
    _Bool __preventSelectionViewActivation;
    UISearchBar *_searchBar;
    UIColor *_tokenBackgroundColor;
    long long __textInputSource;
}

@property (retain, nonatomic, setter=_setSearchTextOffetValue:) NSValue *_searchTextOffsetValue;
@property (nonatomic, setter=_setPreventSelectionViewActivation:) _Bool _preventSelectionViewActivation;
@property (nonatomic) long long _textInputSource;
@property (nonatomic, setter=_setIgnoresDynamicType:) _Bool _ignoresDynamicType;
@property (weak, nonatomic, setter=_setSearchBar:) UISearchBar *_searchBar;
@property (copy, nonatomic) NSArray *tokens;
@property (nonatomic, readonly) UITextRange *textualRange;
@property (retain, nonatomic) UIColor *tokenBackgroundColor;
@property (nonatomic) _Bool allowsDeletingTokens;
@property (nonatomic) _Bool allowsCopyingTokens;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)_fieldEditorClass;
+ (_Bool)_wantsFadedEdges;
+ (Class)_textPasteItemClass;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)text;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)canBecomeFocused;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)tintColorDidChange;
- (_Bool)resignFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (id)attributedText;
- (id)textInputTraits;
- (void)_setAnimatesBackgroundCornerRadius:(_Bool)arg1;
- (void)_setOffsetValue:(id)arg1 forIcon:(long long)arg2;
- (id)_offsetValueForIcon:(long long)arg1;
- (void)deleteBackward;
- (void)_defaultInsertTextSuggestion:(id)arg1;
- (_Bool)canResignFirstResponder;
- (void)insertTextSuggestion:(id)arg1;
- (void)_setEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)insertToken:(id)arg1 atIndex:(long long)arg2;
- (void)removeTokenAtIndex:(long long)arg1;
- (void)replaceTextualPortionOfRange:(id)arg1 withToken:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)tokensInRange:(id)arg1;
- (_Bool)_shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;
- (void)_setMagnifyingGlassImage:(id)arg1;
- (id)_clearButtonImageForState:(unsigned long long)arg1;
- (_Bool)_hasContent;
- (struct CGRect)_searchIconViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (struct CGRect)_adjustedTextOrEditingRect:(struct CGRect)arg1 forBounds:(struct CGRect)arg2;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)rightViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)leftViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)_bookmarkViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)_adjustmentsForSearchIconViewRectForBounds:(struct CGRect)arg1;
- (_Bool)_shouldCenterPlaceholder;
- (struct CGRect)placeholderRectForBounds:(struct CGRect)arg1;
- (struct CGSize)_clearButtonSize;
- (struct CGRect)clearButtonRectForBounds:(struct CGRect)arg1;
- (_Bool)_becomeFirstResponderWhenPossible;
- (struct CGRect)_availableTextRectForBounds:(struct CGRect)arg1 forEditing:(_Bool)arg2;
- (struct CGRect)_suffixFrame;
- (id)_placeholderColor;
- (void)_updateBackgroundView:(id)arg1 withStyle:(unsigned long long)arg2 filter:(id)arg3;
- (void)_applyHighlightedAnimated:(_Bool)arg1;
- (id)_createEffectsBackgroundViewWithStyle:(unsigned long long)arg1 applyFilter:(id)arg2;
- (void)_updateBackgroundViewsAnimated:(_Bool)arg1;
- (void)_clearBackgroundViews;
- (void)_removeEffectsBackgroundViews;
- (void)_activateSelectionView;
- (void)_becomeFirstResponder;
- (_Bool)_delegateShouldBeginEditing;
- (_Bool)_delegateShouldEndEditing;
- (_Bool)_delegateShouldScrollToVisibleWhenBecomingFirstResponder;
- (_Bool)_delegateShouldClear;
- (_Bool)_delegateShouldChangeCharactersInTextStorageRange:(struct _NSRange)arg1 replacementString:(id)arg2 delegateCares:(_Bool *)arg3;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (id)_newAttributedStringWithToken:(id)arg1;
- (unsigned long long)_characterIndexForTokenTapGestureRecognizer;
- (void)_didSetFont:(id)arg1;
- (id)textInRange:(id)arg1;
- (id)attributedTextInRange:(id)arg1;
- (void)replaceRange:(id)arg1 withAttributedText:(id)arg2;
- (void)_redirectSelectionToAvoidClobberingTokens;
- (void)insertText:(id)arg1;
- (struct _NSRange)insertFilteredText:(id)arg1;
- (void)insertAttributedText:(id)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)setAttributedMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
- (void)_copySelectionPopulatingActuallyCopiedTokenCharacterIndexes:(id)arg1;
- (void)paste:(id)arg1;
- (void)_pasteSessionDidFinish:(id)arg1;
- (void)_updateAtomViewSelection:(_Bool)arg1;
- (void)fieldEditorDidChangeSelection:(id)arg1;
- (void)_setBackgroundViewsAlpha:(double)arg1;
- (void)_setClearButtonImage:(id)arg1 forState:(unsigned long long)arg2;
- (_Bool)_shouldResignOnEditingDidEndOnExit;
- (long long)_suffixLabelTextAlignment;
- (Class)_placeholderLabelClass;
- (Class)_systemBackgroundViewClass;
- (void)updateForBackdropStyle:(unsigned long long)arg1;
- (void)_setBottomEffectBackgroundVisible:(_Bool)arg1;
- (_Bool)_shouldDetermineInterfaceStyleTextColor;
- (long long)_blurEffectStyle;
- (_Bool)_textShouldFillFieldEditorHeight;
- (id)positionOfTokenAtIndex:(long long)arg1;
- (id)selectedTokens;
- (void)_willAddTokenLayoutView:(id)arg1;
- (void)_didRemoveTokenLayoutView:(id)arg1;
- (void)_tokenTapGestureRecognized;
- (struct _NSRange)_rangeForSetText;
- (struct _NSRange)_textRangeForTextStorageRange:(struct _NSRange)arg1;
- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
- (_Bool)_shouldSuppressSelectionHandles;
- (_Bool)allowsDraggingAttachments;
- (id)_rangeOfCustomDraggableObjectsInRange:(id)arg1;
- (id)_customDraggableObjectsForRange:(id)arg1;

@end
