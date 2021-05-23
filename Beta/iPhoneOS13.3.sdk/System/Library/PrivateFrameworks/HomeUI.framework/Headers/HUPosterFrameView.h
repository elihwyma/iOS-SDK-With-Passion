/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class CALayer, HMCameraClip, UIActivityIndicatorView;

@interface HUPosterFrameView : UIView

{
    _Bool _loading;
    _Bool _requestInProgress;
    _Bool _shouldShowLineSeparator;
    UIActivityIndicatorView *_inProgressSpinner;
    CALayer *_posterFrameLayer;
    CALayer *_lineSeparator;
    HMCameraClip *_clip;
    double _timeOffset;
}

@property (retain, nonatomic) UIActivityIndicatorView *inProgressSpinner;
@property (retain, nonatomic) CALayer *posterFrameLayer;
@property (retain, nonatomic) CALayer *lineSeparator;
@property (weak, nonatomic) HMCameraClip *clip;
@property (nonatomic) double timeOffset;
@property (nonatomic, getter=isLoading) _Bool loading;
@property (nonatomic, getter=isRequestInProgress) _Bool requestInProgress;
@property (nonatomic) _Bool shouldShowLineSeparator;

+ (id)posterFrameView;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)manager:(id)arg1 didFindImage:(id)arg2 atTimeOffset:(double)arg3 forClip:(id)arg4;
- (void)displayImageForClip:(id)arg1 atTimeOffset:(double)arg2;

@end
