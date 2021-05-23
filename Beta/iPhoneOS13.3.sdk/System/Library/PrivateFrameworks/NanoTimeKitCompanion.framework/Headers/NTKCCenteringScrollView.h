/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIScrollView.h>

#import <NanoTimeKitCompanion/Swift-Protocol.h>

@class NSString, UIView;

@interface NTKCCenteringScrollView : UIScrollView <Swift>

{
    struct CGRect _originalCrop;
    UIView *_centeredView;
    double _maximumZoomRatio;
    struct CGSize _minimumDisplaySize;
    struct CGRect _cropRect;
}

@property (retain, nonatomic) UIView *centeredView;
@property (nonatomic) struct CGRect cropRect;
@property (nonatomic) struct CGSize minimumDisplaySize;
@property (nonatomic) double maximumZoomRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)_updateInsets;
- (void)_updateZoomScales;
- (void)_centerOnCrop;
- (void)_updateCrop;

@end
