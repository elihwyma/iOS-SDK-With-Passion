/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSObject.h>

@interface PSLocaleSelector : NSObject

- (id)currentLocale;
- (id)availableLocaleIdentifiers;
- (void)setLocaleFromLanguageIdentifier:(id)arg1;
- (void)setLocaleFromRegionCode:(id)arg1;

@end
