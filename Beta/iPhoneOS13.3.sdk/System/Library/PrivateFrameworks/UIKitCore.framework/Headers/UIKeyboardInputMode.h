/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITextInputMode.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSBundle, NSExtension, NSString;

@interface UIKeyboardInputMode : UITextInputMode <Swift>

{
    _Bool isDisplayed;
    _Bool _extensionInputModeHasDictation;
    NSString *_primaryLanguage;
    NSString *_languageWithRegion;
    NSString *identifier;
    NSString *normalizedIdentifier;
    NSString *softwareLayout;
    NSString *hardwareLayout;
    NSArray *_multilingualLanguages;
}

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *normalizedIdentifier;
@property (retain, nonatomic) NSString *languageWithRegion;
@property (retain, nonatomic) NSString *softwareLayout;
@property (retain, nonatomic) NSString *hardwareLayout;
@property (retain, nonatomic) NSArray *multilingualLanguages;
@property (nonatomic, readonly) NSString *identifierWithLayouts;
@property (retain, nonatomic) NSString *primaryLanguage;
@property (nonatomic, readonly) NSString *automaticHardwareLayout;
@property (retain, nonatomic, readonly) NSArray *normalizedIdentifierLevels;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *extendedDisplayName;
@property (nonatomic, readonly) _Bool isDefaultRightToLeft;
@property (nonatomic, readonly) _Bool defaultLayoutIsASCIICapable;
@property (nonatomic, readonly) _Bool isExtensionInputMode;
@property (nonatomic, readonly) _Bool isStalledExtensionInputMode;
@property (nonatomic) _Bool extensionInputModeHasDictation;
@property (nonatomic, readonly) NSExtension *extension;
@property (nonatomic, readonly) NSBundle *containingBundle;
@property (nonatomic, readonly) NSString *containingBundleDisplayName;
@property (nonatomic) _Bool isDisplayed;
@property (nonatomic, readonly) _Bool isSpecializedInputMode;
@property (retain, nonatomic) NSString *dictationLanguage;
@property (nonatomic, readonly) NSString *dictationDisplayName;

+ (_Bool)supportsSecureCoding;
+ (id)keyboardInputModeWithIdentifier:(id)arg1;
+ (id)intlInputMode;
+ (id)canonicalLanguageIdentifierFromIdentifier:(id)arg1;
+ (id)softwareLayoutFromIdentifier:(id)arg1;
+ (id)hardwareLayoutFromIdentifier:(id)arg1;
+ (id)dictationInputMode;
+ (id)autofillSignupInputMode;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (_Bool)isAllowedForTraits:(id)arg1;
- (_Bool)includeBarHeight;
- (_Bool)isDesiredForTraits:(id)arg1;
- (void)setLastUsedDictationLanguage;

@end
