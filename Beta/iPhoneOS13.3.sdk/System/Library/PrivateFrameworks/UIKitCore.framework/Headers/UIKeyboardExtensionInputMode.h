/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIKeyboardInputMode.h>

@class NSExtension;

__attribute__((visibility("hidden")))
@interface UIKeyboardExtensionInputMode : UIKeyboardInputMode

{
    NSExtension *_extension;
}

@property (retain, nonatomic) NSExtension *extension;

- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;
- (id)displayName;
- (id)containingBundle;
- (id)identifierWithLayouts;
- (_Bool)isExtensionInputMode;
- (id)hardwareLayout;
- (void)setPrimaryLanguage:(id)arg1;
- (_Bool)defaultLayoutIsASCIICapable;
- (_Bool)isStalledExtensionInputMode;
- (_Bool)isAllowedForTraits:(id)arg1;
- (id)extendedDisplayName;
- (id)normalizedIdentifierLevels;
- (_Bool)isDefaultRightToLeft;
- (id)containingBundleDisplayName;
- (_Bool)isDesiredForTraits:(id)arg1;

@end
