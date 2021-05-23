/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSObject.h>

@interface PSLanguageSelector : NSObject

- (id)preferredLanguages;
- (id)systemLanguages;
- (id)deviceLanguageIdentifier;
- (void)setLanguage:(id)arg1 fallback:(id)arg2;

@end
