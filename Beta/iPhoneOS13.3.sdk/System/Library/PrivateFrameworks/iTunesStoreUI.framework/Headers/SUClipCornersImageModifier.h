/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUImageModifier.h>

@interface SUClipCornersImageModifier : SUImageModifier

{
    double _cornerRadius;
    int _corners;
}

@property (nonatomic) double cornerRadius;
@property (nonatomic) int corners;

- (_Bool)isEqual:(id)arg1;
- (void)drawBeforeImageForContext:(struct CGContext *)arg1 imageFrame:(struct CGRect)arg2 finalSize:(struct CGSize)arg3;
- (void)drawAfterImageForContext:(struct CGContext *)arg1 imageFrame:(struct CGRect)arg2 finalSize:(struct CGSize)arg3;
- (struct CGPath *)_copyClippingPathForRect:(struct CGRect)arg1;

@end
