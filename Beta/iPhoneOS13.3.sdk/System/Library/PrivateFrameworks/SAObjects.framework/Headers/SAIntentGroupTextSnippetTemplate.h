/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAIntentGroupSnippetTemplate.h>

@class NSArray, NSString;

@interface SAIntentGroupTextSnippetTemplate : SAIntentGroupSnippetTemplate

@property (copy, nonatomic) NSString *alignment;
@property (copy, nonatomic) NSString *detailText;
@property (copy, nonatomic) NSArray *labelComponents;
@property (nonatomic) _Bool showsDisclosureIndicator;

+ (id)textSnippetTemplate;
+ (id)textSnippetTemplateWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
