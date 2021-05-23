/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AFVoiceInfo, NSArray, NSString;

@interface AFSiriRingtone : NSObject

{
    _Bool _languageMismatch;
    NSString *_voiceLanguage;
    NSArray *_contacts;
    NSString *_displayedCallerID;
    long long _callerIDType;
    NSString *_callServiceSpeakableName;
    NSString *_callDestinationID;
    long long _callDestinationIDType;
    AFVoiceInfo *_voiceInfo;
}

@property (retain, nonatomic) NSArray *contacts;
@property (copy, nonatomic) NSString *displayedCallerID;
@property (nonatomic) long long callerIDType;
@property (copy, nonatomic) NSString *callServiceSpeakableName;
@property (copy, nonatomic) NSString *callDestinationID;
@property (nonatomic) long long callDestinationIDType;
@property (nonatomic, readonly) AFVoiceInfo *voiceInfo;
@property (nonatomic, readonly) NSString *textToSpeak;

- (id)init;
- (id)initWithContacts:(id)arg1;
- (id)_bestVoiceInfoWithCurrentLocale:(id)arg1;
- (id)_generateSpokenTextForContacts:(id)arg1 voiceLanguage:(id)arg2 displayedCallerID:(id)arg3 callerIDType:(long long)arg4 callDestinationID:(id)arg5 callDestinationIDType:(long long)arg6 callServiceSpeakableName:(id)arg7;
- (id)_spokenTextForContacts:(id)arg1 callServiceSpeakableName:(id)arg2 languageCode:(id)arg3;
- (id)_spokenTextForCallerID:(id)arg1 ofType:(long long)arg2 rawCaller:(id)arg3 rawCallerType:(long long)arg4 languageCode:(id)arg5;
- (id)_spokenTextForCallDestinationID:(id)arg1 ofType:(long long)arg2 callServiceSpeakableName:(id)arg3 languageCode:(id)arg4;
- (id)_phoneticNamesForContact:(id)arg1 languageCode:(id)arg2;
- (id)_spokenTextForOneContact:(id)arg1 callServiceSpeakableName:(id)arg2 languageCode:(id)arg3;
- (id)_spokenTextForTwoContacts:(id)arg1 callServiceSpeakableName:(id)arg2 languageCode:(id)arg3;
- (id)_spokenTextForThreeContacts:(id)arg1 callServiceSpeakableName:(id)arg2 languageCode:(id)arg3;
- (id)_escapeCallerIDString:(id)arg1 forType:(long long)arg2;
- (id)_escapeCallDestinationIDString:(id)arg1 forType:(long long)arg2;
- (void)_phoneticInfoForContact:(id)arg1 languageCode:(id)arg2 firstName:(id *)arg3 middleName:(id *)arg4 lastName:(id *)arg5 nickname:(id *)arg6;

@end
