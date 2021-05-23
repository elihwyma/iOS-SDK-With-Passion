/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface AFLocalization : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_tables;
}

+ (id)sharedInstance;

- (id)init;
- (id)localizedNameForSiriLanguage:(id)arg1 inDisplayLanguage:(id)arg2;
- (id)localizedStringForKey:(id)arg1 table:(id)arg2 bundle:(id)arg3 languageCode:(id)arg4;
- (id)compactDisplayNameInLanguage:(id)arg1 forSiriLanguage:(id)arg2;
- (id)longDisplayNameInLanguage:(id)arg1 forSiriLanguage:(id)arg2;
- (id)localizedNameOfOutputVoiceWithIdentifier:(id)arg1 inDisplayLanguage:(id)arg2;
- (id)localizedNameOfVoiceGender:(long long)arg1 inDisplayLanguage:(id)arg2;
- (id)localizedCompactNameForSiriLanguage:(id)arg1 inDisplayLanguage:(id)arg2;
- (id)localizedNameOfOutputVoice:(id)arg1 inDisplayLanguage:(id)arg2;
- (id)localizedGenderOfOutputVoice:(id)arg1 inDisplayLanguage:(id)arg2;
- (id)allOutputVoiceIdentifiersForSiriLanguage:(id)arg1;
- (id)defaultOutputVoiceForSiriSessionLanguage:(id)arg1;
- (id)loadInfoForVoicesWithLanguageCode:(id)arg1;

@end
