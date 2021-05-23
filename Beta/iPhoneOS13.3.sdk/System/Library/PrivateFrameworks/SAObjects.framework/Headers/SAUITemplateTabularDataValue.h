/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUITemplateBaseItem.h>

@class NSArray, NSDictionary, SAUIImageResource, SAUITemplateAttributedString;

@interface SAUITemplateTabularDataValue : SAUITemplateBaseItem

@property (retain, nonatomic) SAUITemplateAttributedString *attributedText;
@property (copy, nonatomic) NSDictionary *attributedTexts;
@property (nonatomic) _Bool highlighted;
@property (retain, nonatomic) SAUIImageResource *image;
@property (nonatomic) double imagePointHeight;
@property (nonatomic) double imagePointWidth;
@property (copy, nonatomic) NSArray *themeImages;

+ (id)tabularDataValue;
+ (id)tabularDataValueWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
