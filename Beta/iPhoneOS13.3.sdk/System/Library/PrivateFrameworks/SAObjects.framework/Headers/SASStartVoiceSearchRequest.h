/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SASStartSpeechDictation.h>

@class NSArray, NSDictionary;

@interface SASStartVoiceSearchRequest : SASStartSpeechDictation

@property (copy, nonatomic) NSDictionary *headers;
@property (copy, nonatomic) NSDictionary *queryParameters;
@property (copy, nonatomic) NSArray *searchTypes;

+ (id)startVoiceSearchRequest;
+ (id)startVoiceSearchRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
