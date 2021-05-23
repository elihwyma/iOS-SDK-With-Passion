/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

@class NSString, _INVocabularyConnection;

@interface INPreferences : NSObject

{
    _INVocabularyConnection *_assistantdConnection;
    NSString *_cachedSiriLanguageCode;
}

@property (copy, setter=_setCachedSiriLanguageCode:) NSString *_cachedSiriLanguageCode;

+ (id)sharedPreferences;
+ (void)requestSiriAuthorization:(CDUnknownBlockType)arg1;
+ (void)_verifyProcessCanDonateIntentWithName:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (long long)siriAuthorizationStatus;
+ (id)siriLanguageCode;

- (id)init;
- (id)_init;
- (void)assertThisProcessHasSiriEntitlement;
- (void)_updateWithExtensionContext:(id)arg1;
- (_Bool)_weAreRunningAsAnExtension;
- (void)_THROW_EXCEPTION_FOR_PROCESS_MISSING_ENTITLEMENT_com_apple_developer_siri;
- (long long)_siriAuthorizationStatus;
- (void)requestSiriAuthorization:(CDUnknownBlockType)arg1;
- (id)_siriLanguageCode;
- (void)_verifyProcessCanDonateIntentWithName:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
