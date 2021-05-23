/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSExtension.h>

@interface NSExtension (Intents)

+ (void)_matchExtensionsForIntent:(id)arg1 extensionPointName:(id)arg2 shouldCheckForSiriEnabled:(_Bool)arg3 shouldIgnoreLaunchId:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)_intents_matchExtensionsForIntent:(id)arg1 shouldIgnoreLaunchId:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)_intents_matchExtensionsForIntent:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)_intents_matchUIExtensionsForIntent:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)_intents_matchSiriExtensionsForIntent:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)_intents_matchSiriUIExtensionsForIntent:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)_intents_matchSiriUISnippetExtensionsWithCompletion:(CDUnknownBlockType)arg1;
+ (id)_intents_extensionMatchingAttributesForIntents:(id)arg1;
+ (id)_intents_uiExtensionMatchingAttributesForIntents:(id)arg1;
+ (void)_intents_findAppsWithAnIntentsServiceExtension:(CDUnknownBlockType)arg1;
+ (void)_intents_findPossibleSiriEnabledAppsWithAnIntentsServiceExtension:(CDUnknownBlockType)arg1;
+ (void)_intents_findSiriEntitledAppsContainingAnIntentsExtensionWithCompletion:(CDUnknownBlockType)arg1;
+ (void)_matchExtensionsForIntent:(id)arg1 extensionPointName:(id)arg2 shouldCheckForSiriEnabled:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)_matchSnippetExtensionsWithExtensionPointName:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (_Bool)appAllowedToTalkToSiri:(id)arg1;
+ (id)_extensionMatchingDictionaryForIntentClassNames:(id)arg1 extensionPointName:(id)arg2 launchId:(id)arg3;
+ (void)_matchExtensionsWithAttributes:(id)arg1 extensionPointName:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)_findAppsWithAnyIntentsExtensionCheckingSiriEnabledUseFilter:(long long)arg1 completion:(CDUnknownBlockType)arg2;

- (_Bool)_intents_extensionSupportsAtLeastOneSiriIntent;
- (id)_intents_intentsRestrictedWhileProtectedDataUnavailable;

@end
