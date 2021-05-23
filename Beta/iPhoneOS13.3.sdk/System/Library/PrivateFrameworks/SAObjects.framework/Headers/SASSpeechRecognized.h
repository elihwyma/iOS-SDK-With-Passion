/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSNumber, NSString, SASAudioAnalytics, SASRecognition, SAUIGetResponseAlternatives;

@interface SASSpeechRecognized : SABaseClientBoundCommand

@property (retain, nonatomic) SASAudioAnalytics *audioAnalytics;
@property (nonatomic) _Bool eager;
@property (copy, nonatomic) NSNumber *processedAudioDuration;
@property (retain, nonatomic) SASRecognition *recognition;
@property (retain, nonatomic) SAUIGetResponseAlternatives *responseAlternatives;
@property (copy, nonatomic) NSString *resultId;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *title;

+ (id)speechRecognized;
+ (id)speechRecognizedWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
