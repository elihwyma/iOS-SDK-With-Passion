/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUITemplateBaseItem.h>

@class NSDictionary, SAUITemplateAttributedString;

@interface SAUITemplateLabel : SAUITemplateBaseItem

@property (copy, nonatomic) NSDictionary *attributedTexts;
@property (retain, nonatomic) SAUITemplateAttributedString *text;

+ (id)label;
+ (id)labelWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
