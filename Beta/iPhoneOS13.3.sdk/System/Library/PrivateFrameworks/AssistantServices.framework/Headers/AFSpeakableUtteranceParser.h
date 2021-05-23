/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class NSLocale, NSMutableDictionary;

@interface AFSpeakableUtteranceParser : NSObject

{
    NSMutableDictionary *_providers;
    id _functionHandler;
    NSLocale *_locale;
}

@property (nonatomic) _Bool handleTTSCodes;
@property (nonatomic) _Bool handlesFunctions;

+ (_Bool)_shouldAutomaticallyProvideFunctions;
+ (id)parseUserGeneratedMessage:(id)arg1;

- (id)init;
- (id)initWithLocale:(id)arg1;
- (void)registerProvider:(id)arg1 forNamespace:(id)arg2;
- (id)_parseStringWithFormat:(id)arg1 error:(id *)arg2 hadEmpties:(_Bool *)arg3 containsPrivacySensitiveContents:(_Bool *)arg4 externalProviders:(_Bool *)arg5;
- (id)parseStringWithFormat:(id)arg1 includeControlCharacters:(_Bool)arg2 error:(id *)arg3 hadEmpties:(_Bool *)arg4 containsPrivacySensitiveContents:(_Bool *)arg5 externalProviders:(_Bool *)arg6;
- (id)_handleOptionalAtIndex:(unsigned int)arg1 withBuffer:(CDStruct_f9502b4c)arg2 totalLength:(unsigned long long)arg3 consumedLength:(unsigned int *)arg4 containsPrivacySensitiveContents:(_Bool *)arg5 externalProviders:(_Bool *)arg6;
- (id)_handleProviderAtIndex:(unsigned int)arg1 withBuffer:(CDStruct_f9502b4c)arg2 totalLength:(unsigned long long)arg3 consumedLength:(unsigned int *)arg4 containsPrivacySensitiveContents:(_Bool *)arg5 hadEmpties:(_Bool *)arg6 externalProviders:(_Bool *)arg7;
- (id)_handleControlCodeAtIndex:(unsigned int)arg1 withBuffer:(CDStruct_f9502b4c)arg2 totalLength:(unsigned long long)arg3 consumedLength:(unsigned int *)arg4 hadEmpties:(_Bool *)arg5 containsPrivacySensitiveContents:(_Bool *)arg6 externalProviders:(_Bool *)arg7;
- (id)parseStringWithFormat:(id)arg1 error:(id *)arg2 hasExternalDomains:(_Bool *)arg3;
- (id)parseStringWithFormat:(id)arg1 error:(id *)arg2 containsPrivacySensitiveContents:(_Bool *)arg3 hasExternalDomains:(_Bool *)arg4;
- (id)parseStringWithFormat:(id)arg1 error:(id *)arg2;
- (id)parseStringWithFormat:(id)arg1 error:(id *)arg2 containsPrivacySensitiveContents:(_Bool *)arg3;
- (id)parseStringRemovingControlCharacters:(id)arg1 error:(id *)arg2;
- (id)parseStringRemovingControlCharacters:(id)arg1 error:(id *)arg2 containsPrivacySensitiveContents:(_Bool *)arg3;

@end
