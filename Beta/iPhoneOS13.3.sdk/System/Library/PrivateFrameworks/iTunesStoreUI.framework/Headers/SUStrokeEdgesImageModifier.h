/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUImageModifier.h>

@class UIColor;

@interface SUStrokeEdgesImageModifier : SUImageModifier

{
    struct UIEdgeInsets _edgeInsets;
    _Bool _fitToImage;
    UIColor *_strokeColor;
    _Bool _strokeCurrentPath;
}

@property (nonatomic) struct UIEdgeInsets edgeInsets;
@property (retain, nonatomic) UIColor *strokeColor;
@property (nonatomic) _Bool fitToImage;
@property (nonatomic) _Bool strokeCurrentPath;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (void)drawAfterImageForContext:(struct CGContext *)arg1 imageFrame:(struct CGRect)arg2 finalSize:(struct CGSize)arg3;

@end
