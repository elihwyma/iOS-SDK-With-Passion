/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSString, SAUILParseableExpression;

@interface SAUILParsedExpression : SADomainObject

@property (retain, nonatomic) SAUILParseableExpression *parseableExpression;
@property (copy, nonatomic) NSString *parsedOutput;

+ (id)parsedExpression;
+ (id)parsedExpressionWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
