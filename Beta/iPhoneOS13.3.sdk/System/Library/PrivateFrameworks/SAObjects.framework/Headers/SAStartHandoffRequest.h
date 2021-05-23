/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAStartRequest.h>

@class NSData;

@interface SAStartHandoffRequest : SAStartRequest

@property (copy, nonatomic) NSData *handoffData;

+ (id)startHandoffRequest;
+ (id)startHandoffRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
