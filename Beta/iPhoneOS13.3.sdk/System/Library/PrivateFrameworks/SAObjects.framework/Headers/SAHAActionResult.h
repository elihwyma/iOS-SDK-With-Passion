/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSArray, NSString, SAHAAttributeValue, SAHAEntity;

@interface SAHAActionResult : SADomainObject

@property (retain, nonatomic) SAHAEntity *entity;
@property (copy, nonatomic) NSString *outcome;
@property (copy, nonatomic) NSArray *relatedEntityIds;
@property (copy, nonatomic) NSString *requestActionId;
@property (copy, nonatomic) NSString *resultAttribute;
@property (retain, nonatomic) SAHAAttributeValue *resultValue;

+ (id)actionResult;
+ (id)actionResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
