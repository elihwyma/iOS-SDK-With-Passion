/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSDictionary, NSIndexSet, NSString, RTIInputSystemSourceSession, UIColor, UIImage, UIInputContextHistory, UITextInputPasswordRules, UITextInputTraits, UITextInteractionAssistant, UITextPosition, UITextRange;

@protocol UITextInputDelegate, UITextInputSuggestionDelegate, UITextInputTokenizer;

@interface UIDefaultKeyboardInput : UIView

{
    UITextInputTraits *m_traits;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic) long long spellCheckingType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long keyboardType;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long returnKeyType;
@property (nonatomic) _Bool enablesReturnKeyAutomatically;
@property (nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property (copy, nonatomic) NSString *textContentType;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (nonatomic, readonly) _Bool hasText;
@property (copy) UITextRange *selectedTextRange;
@property (nonatomic, readonly) UITextRange *markedTextRange;
@property (copy, nonatomic) NSDictionary *markedTextStyle;
@property (nonatomic, readonly) UITextPosition *beginningOfDocument;
@property (nonatomic, readonly) UITextPosition *endOfDocument;
@property (weak, nonatomic) id <UITextInputDelegate> inputDelegate;
@property (nonatomic, readonly) id <UITextInputTokenizer> tokenizer;
@property (nonatomic, readonly) UIView *textInputView;
@property (nonatomic) long long selectionAffinity;
@property (nonatomic, readonly) id insertDictationResultPlaceholder;
@property (copy, nonatomic) NSString *recentInputIdentifier;
@property (nonatomic) struct _NSRange validTextRange;
@property (copy, nonatomic) NSIndexSet *PINEntrySeparatorIndexes;
@property (nonatomic) struct __CFCharacterSet *textTrimmingSet;
@property (retain, nonatomic) UIColor *insertionPointColor;
@property (retain, nonatomic) UIColor *selectionBarColor;
@property (retain, nonatomic) UIColor *selectionHighlightColor;
@property (retain, nonatomic) UIImage *selectionDragDotImage;
@property (retain, nonatomic) UIColor *underlineColorForTextAlternatives;
@property (retain, nonatomic) UIColor *underlineColorForSpelling;
@property (nonatomic) unsigned long long insertionPointWidth;
@property (nonatomic) int textLoupeVisibility;
@property (nonatomic) int textSelectionBehavior;
@property (nonatomic) id textSuggestionDelegate;
@property (nonatomic) _Bool isSingleLineDocument;
@property (nonatomic) _Bool contentsIsSingleValue;
@property (nonatomic) _Bool hasDefaultContents;
@property (nonatomic) _Bool acceptsPayloads;
@property (nonatomic) _Bool acceptsEmoji;
@property (nonatomic) _Bool acceptsDictationSearchResults;
@property (nonatomic) _Bool useAutomaticEndpointing;
@property (nonatomic) _Bool showDictationButton;
@property (nonatomic) _Bool forceEnableDictation;
@property (nonatomic) _Bool forceDisableDictation;
@property (nonatomic) _Bool forceDefaultDictationInfo;
@property (nonatomic) long long forceDictationKeyboardType;
@property (nonatomic) int emptyContentReturnKeyType;
@property (nonatomic) _Bool returnKeyGoesToNextResponder;
@property (nonatomic) _Bool acceptsFloatingKeyboard;
@property (nonatomic) _Bool forceFloatingKeyboard;
@property (nonatomic) struct UIEdgeInsets floatingKeyboardEdgeInsets;
@property (nonatomic) _Bool acceptsSplitKeyboard;
@property (nonatomic) _Bool displaySecureTextUsingPlainText;
@property (nonatomic) _Bool displaySecureEditsUsingPlainText;
@property (nonatomic) _Bool learnsCorrections;
@property (nonatomic) int shortcutConversionType;
@property (nonatomic) _Bool suppressReturnKeyStyling;
@property (nonatomic) _Bool useInterfaceLanguageForLocalization;
@property (nonatomic) _Bool deferBecomingResponder;
@property (nonatomic) _Bool enablesReturnKeyOnNonWhiteSpaceContent;
@property (copy, nonatomic) NSString *autocorrectionContext;
@property (copy, nonatomic) NSString *responseContext;
@property (retain, nonatomic) UIInputContextHistory *inputContextHistory;
@property (nonatomic) _Bool disableInputBars;
@property (nonatomic) _Bool isCarPlayIdiom;
@property (nonatomic) long long textScriptType;
@property (nonatomic) _Bool loadKeyboardsForSiriLanguage;
@property (nonatomic) _Bool disablePrediction;
@property (nonatomic) _Bool hidePrediction;
@property (nonatomic, getter=isDevicePasscodeEntry) _Bool devicePasscodeEntry;
@property (nonatomic, readonly) UITextInteractionAssistant *interactionAssistant;
@property (nonatomic) long long selectionGranularity;
@property (nonatomic, readonly) id <UITextInputSuggestionDelegate> textInputSuggestionDelegate;
@property (nonatomic) long long _textInputSource;
@property (nonatomic, readonly) RTIInputSystemSourceSession *_rtiSourceSession;
@property (nonatomic, readonly) _Bool supportsImagePaste;

- (void)dealloc;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)delegate;
- (id)text;
- (void)setText:(id)arg1;
- (_Bool)isSecure;
- (struct CGRect)visibleBounds;
- (id)textInputTraits;
- (void)takeTraitsFrom:(id)arg1;
- (void)deleteBackward;
- (_Bool)isEditing;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (void)unmarkText;
- (id)selectionView;
- (id)textInRange:(id)arg1;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (void)insertText:(id)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;
- (id)selectionRectsForRange:(id)arg1;
- (_Bool)isEditable;
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
- (struct CGRect)firstRectForRange:(id)arg1;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (id)closestPositionToPoint:(struct CGPoint)arg1;
- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;
- (id)characterRangeAtPoint:(struct CGPoint)arg1;
- (int)selectionState;
- (id)positionFromPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3;
- (_Bool)isPosition:(id)arg1 atBoundary:(long long)arg2 inDirection:(long long)arg3;
- (_Bool)isPosition:(id)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3;
- (id)rangeEnclosingPosition:(id)arg1 withGranularity:(long long)arg2 inDirection:(long long)arg3;
- (struct _NSRange)selectionRange;
- (_Bool)hasContent;
- (void)selectAll;
- (_Bool)hasSelection;
- (id)textColorForCaretSelection;
- (id)fontForCaretSelection;
- (void)replaceCurrentWordWithText:(id)arg1;
- (void)confirmMarkedText:(id)arg1;
- (unsigned short)characterInRelationToCaretSelection:(int)arg1;
- (unsigned short)characterBeforeCaretSelection;
- (unsigned short)characterAfterCaretSelection;
- (id)rectsForNSRange:(struct _NSRange)arg1;
- (id)nextUnperturbedDictationResultBoundaryFromPosition:(id)arg1;
- (int)wordOffsetInRange:(id)arg1;
- (_Bool)selectionAtDocumentStart;
- (_Bool)selectionAtWordStart;
- (id)rangeByMovingCurrentSelection:(int)arg1;
- (id)rangeByExtendingCurrentSelection:(int)arg1;
- (void)extendCurrentSelection:(int)arg1;
- (void)setSelectionWithPoint:(struct CGPoint)arg1;
- (struct CGRect)caretRect;
- (struct CGRect)convertCaretRect:(struct CGRect)arg1;
- (_Bool)isShowingPlaceholder;
- (void)setupPlaceholderTextIfNeeded;
- (void)setSecure:(_Bool)arg1;
- (void)updateSelection;
- (_Bool)becomesEditableWithGestures;
- (void)setBecomesEditableWithGestures:(_Bool)arg1;

@end
