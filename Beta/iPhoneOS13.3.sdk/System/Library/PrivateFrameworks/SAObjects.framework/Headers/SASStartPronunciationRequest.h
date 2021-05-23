/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SASStartSpeech.h>

@class SASPronunciationContext;

@interface SASStartPronunciationRequest : SASStartSpeech

@property (retain, nonatomic) SASPronunciationContext *context;

+ (id)startPronunciationRequest;
+ (id)startPronunciationRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
