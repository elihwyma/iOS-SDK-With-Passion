/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SASAbortSpeechRequest : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *reason;

+ (id)abortSpeechRequest;
+ (id)abortSpeechRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
