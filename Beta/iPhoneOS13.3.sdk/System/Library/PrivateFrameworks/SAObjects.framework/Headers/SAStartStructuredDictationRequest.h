/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAStartRequest.h>

@class NSString;

@interface SAStartStructuredDictationRequest : SAStartRequest

@property (copy, nonatomic) NSString *structuredDictationType;

+ (id)startStructuredDictationRequest;
+ (id)startStructuredDictationRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
