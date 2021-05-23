/*
 Image: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI
 */

#import <UIKit/UIView.h>

@class NSString, PNPDeviceState, UIImageView, _PNPPencilMovieView;

@protocol PNPPencilViewDelegate;

@interface PNPPencilView : UIView

{
    UIImageView *_pencilImageView;
    _PNPPencilMovieView *_pencilMovieView;
    UIView *_touchIndicatorView;
    _Bool _touchIndicatorShown;
    double _touchIndicatorPosition;
    PNPDeviceState *_deviceState;
    unsigned long long _variant;
    _Bool _spinning;
    id <PNPPencilViewDelegate> _delegate;
}

@property (weak, nonatomic) id <PNPPencilViewDelegate> delegate;
@property (nonatomic) _Bool spinning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) PNPDeviceState *deviceState;

+ (id)_hardwareImageForVariant:(unsigned long long)arg1;

- (id)initWithCoder:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithVariant:(unsigned long long)arg1;
- (void)eventSource:(id)arg1 hadPencilDoubleTapped:(CDUnknownBlockType)arg2;
- (void)_resetTouchIndicatorPosition;
- (void)_animateIndicatorToShown:(_Bool)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (struct CGSize)_edgeAccurateSizeForLength:(double)arg1 depth:(double)arg2 deviceState:(id)arg3;
- (struct CGSize)intrinsicSizeForDeviceState:(id)arg1;
- (void)completeRevolutionWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_prepareMovieView;
- (struct CGSize)comfortableContainingSizeForDeviceState:(id)arg1;
- (struct CGAffineTransform)transformForDeviceState:(id)arg1;
- (void)cleanupSpinningResources;
- (void)prepareMovieForSpinningPencil;

@end
