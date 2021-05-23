/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <AssistantServices/AFSpeakableUtteranceParser.h>

@class NSDateFormatter, NSString;

@interface AFSUPFunctionProvider : AFSpeakableUtteranceParser

{
    NSDateFormatter *_dateFormatter;
    NSDateFormatter *_timeFormatter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)_shouldAutomaticallyProvideFunctions;

- (id)init;
- (id)initWithLocale:(id)arg1;
- (id)_deviceModel;
- (id)stringForExpression:(id)arg1 containsPrivacySensitiveContents:(_Bool *)arg2;
- (id)stringForExpression:(id)arg1;
- (id)_dateFormattedWithFormatter:(id)arg1 arguments:(id)arg2;
- (id)_meCard;
- (id)_currentTime:(id)arg1;
- (id)_currentShortDate:(id)arg1;
- (id)_currentLongDate:(id)arg1;
- (id)_currentWeekday:(id)arg1;
- (id)_tempInWeatherUnits:(id)arg1;
- (id)_lowercaseString:(id)arg1;
- (id)_siriUsageDescription:(id)arg1;
- (id)_speechRecognitionUsageDescription:(id)arg1;
- (id)_userFullName:(id)arg1;
- (id)_userFirstName:(id)arg1;
- (id)_userMiddleName:(id)arg1;
- (id)_userLastName:(id)arg1;
- (id)_userNickName:(id)arg1;
- (id)_meCardIdentifier:(id)arg1;
- (id)_callFunction:(id)arg1 withArguments:(id)arg2;

@end
