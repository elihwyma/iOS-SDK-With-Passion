/*
 Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <UIKit/UIView.h>

@interface PLCropOverlayCropView : UIView

{
    struct CGRect _cropRect;
    UIView *_aboveCropView;
    UIView *_cropRectView;
    UIView *_belowCropView;
}

- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setAlpha:(double)arg1;
- (struct CGRect)cropRect;
- (void)setCropRect:(struct CGRect)arg1;
- (void)_updateCropRectIfNeeded;
- (void)_removeCropViews;

@end
