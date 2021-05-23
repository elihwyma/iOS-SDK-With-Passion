/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSData, NSString;

@interface SAIntentGroupProtobufMessage : AceObject <Swift>

@property (copy, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *debugString;
@property (copy, nonatomic) NSString *typeName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)protobufMessage;
+ (id)protobufMessageWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
