/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@interface _SFBrowserKeyCommands : NSObject

+ (void)_setUpKeyCommandsIfNecessaryForPersona:(unsigned long long)arg1;
+ (id)_localizedKeyCommandWithSelector:(SEL)arg1 discoverabilityTitle:(id)arg2 webInterceptable:(_Bool)arg3;
+ (id)localizedKeyCommandWithSelector:(SEL)arg1 discoverabilityTitle:(id)arg2 bundle:(id)arg3 table:(id)arg4 webInterceptable:(_Bool)arg5;
+ (id)unlocalizedKeyCommandWithSelector:(SEL)arg1 input:(id)arg2 modifierFlags:(long long)arg3 discoverabilityTitle:(id)arg4 webInterceptable:(_Bool)arg5;
+ (id)_placeholderKeyCommandForCommand:(id)arg1;
+ (id)unlocalizedKeyCommandWithSelector:(SEL)arg1 input:(id)arg2 modifierFlags:(long long)arg3 webInterceptable:(_Bool)arg4;
+ (id)_keyForSelectorString:(id)arg1 bundle:(id)arg2 table:(id)arg3;
+ (long long)_modifierFlagsForSelectorString:(id)arg1 bundle:(id)arg2 table:(id)arg3;
+ (_Bool)_boolForSelectorString:(id)arg1 modifierString:(id)arg2 bundle:(id)arg3 table:(id)arg4;
+ (id)browserKeyCommandsForPersona:(unsigned long long)arg1 shouldAddEditingCommands:(_Bool)arg2;

@end
