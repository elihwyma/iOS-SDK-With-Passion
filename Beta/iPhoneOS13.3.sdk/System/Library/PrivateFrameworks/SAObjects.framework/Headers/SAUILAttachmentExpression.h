/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUILParseableExpression.h>

@protocol SAAceSerializable;

@interface SAUILAttachmentExpression : SAUILParseableExpression

@property (retain, nonatomic) id <SAAceSerializable> attachmentExpression;

+ (id)attachmentExpression;
+ (id)attachmentExpressionWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
