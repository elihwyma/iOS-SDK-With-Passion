/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAIntentGroupSnippetTemplate.h>

@class NSArray, NSString;

@interface SAIntentGroupProfileSnippetTemplate : SAIntentGroupSnippetTemplate

@property (copy, nonatomic) NSString *alignment;
@property (copy, nonatomic) NSString *imageStyle;
@property (copy, nonatomic) NSString *imageURI;
@property (copy, nonatomic) NSArray *labelComponents;

+ (id)profileSnippetTemplate;
+ (id)profileSnippetTemplateWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
