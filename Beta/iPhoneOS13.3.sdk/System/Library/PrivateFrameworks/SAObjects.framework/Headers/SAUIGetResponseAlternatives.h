/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAStartRequest.h>

@class NSString;

@interface SAUIGetResponseAlternatives : SAStartRequest

@property (nonatomic) _Bool locallyResolved;
@property (copy, nonatomic) NSString *requestId;

+ (id)getResponseAlternatives;
+ (id)getResponseAlternativesWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
