/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUISnippetInteraction.h>

@class SADomainObject;

@interface SAUISnippetObjectInteraction : SAUISnippetInteraction

@property (retain, nonatomic) SADomainObject *object;

+ (id)snippetObjectInteraction;
+ (id)snippetObjectInteractionWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
