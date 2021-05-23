/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIButton.h>

@class NSString, UIColor, UIImageView, _PKInkToolOpacityLabel;

@interface _PKFlatInkToolButton : UIButton

{
    _Bool _isUsedOnDarkBackground;
    NSString *_identifier;
    UIColor *_color;
    unsigned long long _sizeState;
    unsigned long long _attributeSet;
    UIImageView *_toolBaseImageView;
    UIImageView *_nibImageView;
    UIImageView *_nibOutlineImageView;
    _PKInkToolOpacityLabel *_opacityLabel;
}

@property (retain, nonatomic) UIImageView *toolBaseImageView;
@property (retain, nonatomic) UIImageView *nibImageView;
@property (retain, nonatomic) UIImageView *nibOutlineImageView;
@property (retain, nonatomic) _PKInkToolOpacityLabel *opacityLabel;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) unsigned long long sizeState;
@property (nonatomic) _Bool isUsedOnDarkBackground;
@property (nonatomic) unsigned long long attributeSet;

+ (struct CGSize)_toolBaseImageSizeForIdentifier:(id)arg1 sizeState:(unsigned long long)arg2;
+ (id)buttonWithIdentifier:(id)arg1 color:(id)arg2 sizeState:(unsigned long long)arg3;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithIdentifier:(id)arg1 color:(id)arg2 sizeState:(unsigned long long)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 sizeState:(unsigned long long)arg2;
- (id)nibImageName;
- (id)toolBaseImageName;
- (void)setColor:(id)arg1 animated:(_Bool)arg2;
- (id)imageNameForIdentifier:(id)arg1;
- (id)nibStrokeImageName;
- (id)imageNameForIdentifier:(id)arg1 sizeState:(unsigned long long)arg2 imageType:(id)arg3 isDarkUI:(_Bool)arg4;
- (id)identifiersWithoutNibImages;

@end
