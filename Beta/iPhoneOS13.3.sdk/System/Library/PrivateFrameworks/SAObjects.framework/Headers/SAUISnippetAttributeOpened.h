/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUISnippetInteraction.h>

@class NSString;

@interface SAUISnippetAttributeOpened : SAUISnippetInteraction

@property (copy, nonatomic) NSString *attributeName;
@property (copy, nonatomic) NSString *attributeValue;

+ (id)snippetAttributeOpened;
+ (id)snippetAttributeOpenedWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
