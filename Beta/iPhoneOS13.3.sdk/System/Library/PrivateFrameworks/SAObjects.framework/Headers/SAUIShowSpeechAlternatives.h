/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, SASRecognition;

@interface SAUIShowSpeechAlternatives : SABaseClientBoundCommand

@property (retain, nonatomic) SASRecognition *recognition;
@property (copy, nonatomic) NSString *requestId;
@property (copy, nonatomic) NSString *title;

+ (id)showSpeechAlternatives;
+ (id)showSpeechAlternativesWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
