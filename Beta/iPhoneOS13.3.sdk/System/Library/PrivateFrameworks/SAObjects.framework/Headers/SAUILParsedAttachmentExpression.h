/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUILParsedExpression.h>

@class NSData;

@interface SAUILParsedAttachmentExpression : SAUILParsedExpression

@property (copy, nonatomic) NSData *attachment;

+ (id)parsedAttachmentExpression;
+ (id)parsedAttachmentExpressionWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
