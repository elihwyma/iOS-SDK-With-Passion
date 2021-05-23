/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSArray, NSString, SAHAAttributeValue;

@interface SAHAAction : SADomainObject

@property (copy, nonatomic) NSString *actionType;
@property (copy, nonatomic) NSString *attribute;
@property (copy, nonatomic) NSArray *executionFlags;
@property (nonatomic) long long executionOrder;
@property (nonatomic) _Bool includeCompleteInformation;
@property (retain, nonatomic) SAHAAttributeValue *value;

+ (id)action;
+ (id)actionWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
