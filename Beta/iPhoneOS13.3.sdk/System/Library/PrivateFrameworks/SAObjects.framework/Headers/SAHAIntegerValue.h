/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAHAAttributeValue.h>

@interface SAHAIntegerValue : SAHAAttributeValue

@property (nonatomic) long long value;

+ (id)integerValue;
+ (id)integerValueWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
