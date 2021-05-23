/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <SpriteKit/SKNode.h>

@class NSAttributedString, NSString, UIColor;

@interface SKLabelNode : SKNode

{
    struct SKCLabelNode *_skcLabelNode;
}

@property (nonatomic) long long verticalAlignmentMode;
@property (nonatomic) long long horizontalAlignmentMode;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) double preferredMaxLayoutWidth;
@property (copy, nonatomic) NSString *fontName;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) double fontSize;
@property (retain, nonatomic) UIColor *fontColor;
@property (nonatomic) double colorBlendFactor;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) long long blendMode;

+ (_Bool)supportsSecureCoding;
+ (id)debugHierarchyPropertyDescriptions;
+ (id)debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 outOptions:(id *)arg3 outError:(id *)arg4;
+ (id)labelNodeWithFontNamed:(id)arg1;
+ (id)labelNodeWithText:(id)arg1;
+ (id)labelNodeWithAttributedText:(id)arg1;
+ (id)_labelNodeWithFontNamed:(id)arg1;
+ (id)_labelNodeWithFontTexture:(id)arg1 fontDataString:(id)arg2;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct CGRect)frame;
- (id)attributedString;
- (void)setFont:(struct __CTFont *)arg1;
- (void)_initialize;
- (_Bool)isEqualToNode:(id)arg1;
- (struct SKCNode *)_makeBackingNode;
- (void)_didMakeBackingNode;
- (id)_getTextSprites;
- (void)setUIFont:(id)arg1;
- (id)initWithFontNamed:(id)arg1;

@end
