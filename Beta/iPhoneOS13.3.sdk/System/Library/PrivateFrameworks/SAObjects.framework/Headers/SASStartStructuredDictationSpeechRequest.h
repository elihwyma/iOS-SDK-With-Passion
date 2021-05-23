/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SASStartSpeechRequest.h>

@class NSString;

@interface SASStartStructuredDictationSpeechRequest : SASStartSpeechRequest

@property (copy, nonatomic) NSString *structuredDictationType;

+ (id)startStructuredDictationSpeechRequest;
+ (id)startStructuredDictationSpeechRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
