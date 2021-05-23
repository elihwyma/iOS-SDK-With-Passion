/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SASSpeechRecognitionComplete : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *sessionId;

+ (id)speechRecognitionComplete;
+ (id)speechRecognitionCompleteWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
