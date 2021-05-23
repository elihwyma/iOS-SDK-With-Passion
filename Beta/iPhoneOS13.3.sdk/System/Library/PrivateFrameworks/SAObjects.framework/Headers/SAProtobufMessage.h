/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSData, NSString;

@interface SAProtobufMessage : SADomainObject

@property (copy, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *typeName;

+ (id)protobufMessage;
+ (id)protobufMessageWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
