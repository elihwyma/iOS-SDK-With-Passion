/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <MessageUI/Swift-Protocol.h>

@class NSIndexSet, NSString, UIColor, UIImage, UIInputContextHistory;

@protocol UITextInputTraits_Private <Swift>

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

- (unsigned short)takeTraitsFrom: /* Error: Ran out of types for this method. */;

@end
