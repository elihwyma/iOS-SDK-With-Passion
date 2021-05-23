/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSArray, SAHAFilter;

@interface SAHAActionRequest : SADomainObject

@property (copy, nonatomic) NSArray *actions;
@property (nonatomic) long long executionOrder;
@property (retain, nonatomic) SAHAFilter *filter;

+ (id)actionRequest;
+ (id)actionRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
