/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAStartRequest.h>

@protocol SAAceSerializable;

@interface SABackgroundUpdateRequest : SAStartRequest

@property (retain, nonatomic) id <SAAceSerializable> attachment;

+ (id)backgroundUpdateRequest;
+ (id)backgroundUpdateRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
