/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUImageModifier.h>

@interface SURotationImageModifier : SUImageModifier

{
    float _degrees;
    long long _orientation;
}

@property (nonatomic) float degrees;
@property (nonatomic) long long orientation;

- (_Bool)isEqual:(id)arg1;
- (void)drawBeforeImageForContext:(struct CGContext *)arg1 imageFrame:(struct CGRect)arg2 finalSize:(struct CGSize)arg3;
- (struct CGRect)imageFrameForImage:(id)arg1 currentFrame:(struct CGRect)arg2 finalSize:(struct CGSize)arg3;

@end
