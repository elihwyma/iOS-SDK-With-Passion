/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAHAAttributeValue.h>

@class NSString;

@interface SAHAStringValue : SAHAAttributeValue

@property (copy, nonatomic) NSString *value;

+ (id)stringValue;
+ (id)stringValueWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
