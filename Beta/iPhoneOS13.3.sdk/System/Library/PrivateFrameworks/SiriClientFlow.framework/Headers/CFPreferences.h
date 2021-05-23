/*
 Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

#import <Foundation/NSObject.h>

@interface CFPreferences : NSObject

+ (_Bool)shouldOverrideScripts;
+ (id)_clientFlowUserDefaults;
+ (id)_valueFromCKKnowledgeStoreWithKey:(id)arg1;
+ (_Bool)shouldRunNodeFlow:(_Bool)arg1;
+ (_Bool)shouldSkipUpdateScriptsOnBoot;
+ (_Bool)isByteCodeCacheEnabled;
+ (id)warmupScriptIdentifiers;
+ (id)warmupModularScriptIdentifiers;
+ (id)baseScriptExecutorCacheKey;
+ (id)defaultWarmupScriptsExtension;
+ (id)scripterInactivityTimerInSeconds;

@end
