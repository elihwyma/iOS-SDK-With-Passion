/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKUpNextBaseCell.h>

@interface NTKUpNextPhotoCell : NTKUpNextBaseCell

{
    struct CGSize _scaledImageSize;
    struct CGRect _facesRect;
    double _aspectRatio;
    _Bool _wantsFullCellPhoto;
}

- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)configureWithContent:(id)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (id)transitionContextInView:(id)arg1;

@end
