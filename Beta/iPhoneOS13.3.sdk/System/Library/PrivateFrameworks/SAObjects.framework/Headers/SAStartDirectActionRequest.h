/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAStartRequest.h>

@class NSDictionary, NSString;

@interface SAStartDirectActionRequest : SAStartRequest

@property (copy, nonatomic) NSString *directAction;
@property (copy, nonatomic) NSDictionary *requestExecutionParameters;
@property (copy, nonatomic) NSString *utteranceFromRequestParameters;

+ (id)startDirectActionRequest;
+ (id)startDirectActionRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
