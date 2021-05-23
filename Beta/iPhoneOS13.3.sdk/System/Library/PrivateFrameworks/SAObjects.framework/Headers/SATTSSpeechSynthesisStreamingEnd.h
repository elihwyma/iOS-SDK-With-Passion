/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SATTSSpeechSynthesisStreaming.h>

@class NSString;

@interface SATTSSpeechSynthesisStreamingEnd : SATTSSpeechSynthesisStreaming

@property (nonatomic) long long count;
@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSString *errorMessage;

+ (id)speechSynthesisStreamingEnd;
+ (id)speechSynthesisStreamingEndWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
