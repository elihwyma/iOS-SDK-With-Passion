/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIView.h>

@class NSArray, PUCropMaskView;

__attribute__((visibility("hidden")))
@interface PUCropOverlayView : UIView

{
    _Bool _cropGridVisible;
    _Bool _straightenGridVisible;
    _Bool _maskedContentVisible;
    NSArray *__oneThirdCropLines;
    NSArray *__oneNinthCropLines;
    NSArray *__maskViews;
    UIView *__cropWindowView;
    PUCropMaskView *_topMask;
    PUCropMaskView *_bottomMask;
    PUCropMaskView *_leftMask;
    PUCropMaskView *_rightMask;
    struct CGRect _cropRect;
    struct CGRect _cropRectInLocalCoordinateSpace;
}

@property (retain, nonatomic, setter=_setOneThirdLines:) NSArray *_oneThirdCropLines;
@property (retain, nonatomic, setter=_setOneNinethLines:) NSArray *_oneNinthCropLines;
@property (retain, nonatomic, setter=_setMaskViews:) NSArray *_maskViews;
@property (retain, nonatomic, setter=_setCropWindowView:) UIView *_cropWindowView;
@property (nonatomic) struct CGRect cropRectInLocalCoordinateSpace;
@property (retain, nonatomic) PUCropMaskView *topMask;
@property (retain, nonatomic) PUCropMaskView *bottomMask;
@property (retain, nonatomic) PUCropMaskView *leftMask;
@property (retain, nonatomic) PUCropMaskView *rightMask;
@property (nonatomic) struct CGRect cropRect;
@property (nonatomic, readonly) id layoutReferenceItem;
@property (nonatomic, getter=isCropGridVisible) _Bool cropGridVisible;
@property (nonatomic, getter=isStraightenGridVisible) _Bool straightenGridVisible;
@property (nonatomic, getter=isMaskedContentVisible) _Bool maskedContentVisible;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setMaskedContentVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateCropRectInLocalCoordinateSpace;
- (void)setCropGridVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setStraightenGridVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setGridViews:(id)arg1 visible:(_Bool)arg2 iVarVisibilePtr:(_Bool *)arg3 animated:(_Bool)arg4;
- (unsigned long long)_subviewIndexForLineForCount:(unsigned long long)arg1;
- (id)_addLinesSpacedForCount:(unsigned long long)arg1 drawFirstAndLast:(_Bool)arg2 visible:(_Bool)arg3;
- (id)_createConstraintsForLine:(id)arg1 centerMultiplier:(double)arg2 vertical:(_Bool)arg3;
- (id)_createLineViewForCount:(unsigned long long)arg1;
- (id)_createMaskView;

@end
