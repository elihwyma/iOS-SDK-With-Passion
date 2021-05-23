/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <PencilKit/_PKInkColorButton.h>

@class UIImageView;

@interface _PKEmbossedInkColorButton : _PKInkColorButton

{
    UIImageView *_colorImageView;
    UIImageView *_embossImageView;
}

@property (retain, nonatomic) UIImageView *colorImageView;
@property (retain, nonatomic) UIImageView *embossImageView;

+ (id)colorFillImageIsCompact:(_Bool)arg1;

- (void)layoutSubviews;
- (id)initWithColor:(id)arg1 isCompact:(_Bool)arg2;

@end
