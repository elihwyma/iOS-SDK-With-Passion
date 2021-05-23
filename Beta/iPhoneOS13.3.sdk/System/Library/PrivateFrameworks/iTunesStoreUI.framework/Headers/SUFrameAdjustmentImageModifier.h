/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUImageModifier.h>

@interface SUFrameAdjustmentImageModifier : SUImageModifier

{
    _Bool _shouldSizeDownToFit;
    unsigned long long _sizingMask;
}

@property (nonatomic) _Bool shouldSizeDownToFit;
@property (nonatomic) unsigned long long sizingMask;

- (_Bool)isEqual:(id)arg1;
- (_Bool)scalesImage;
- (struct CGRect)imageFrameForImage:(id)arg1 currentFrame:(struct CGRect)arg2 finalSize:(struct CGSize)arg3;

@end
