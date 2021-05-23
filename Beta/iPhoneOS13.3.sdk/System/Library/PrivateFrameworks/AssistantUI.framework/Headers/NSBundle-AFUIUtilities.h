/*
 Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

#import <Foundation/NSBundle.h>

@interface NSBundle (AFUIUtilities)

+ (id)afui_assistantUIFrameworkBundle;

- (id)assistantUILocalizedStringForKey:(id)arg1 table:(id)arg2;
- (id)assistantUILocale;
- (id)assistantUILocalizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (id)_assistantUILocalizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 language:(id)arg4;
- (_Bool)assistantLanguageIsRTL;
- (id)assistantUILocalizedStringFromSiriLanguageForKey:(id)arg1 table:(id)arg2;
- (id)assistantUILocalizedStringFromSystemLanguageForKey:(id)arg1 table:(id)arg2;

@end
