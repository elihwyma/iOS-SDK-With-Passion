/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXLivePhotoTrimScrubber.h>

@class NSString, UIImpactFeedbackGenerator, UIPanGestureRecognizer, UITapGestureRecognizer;

@interface PXUILivePhotoTrimScrubber : PXLivePhotoTrimScrubber

{
    UIPanGestureRecognizer *_panGesture;
    UITapGestureRecognizer *_tapGesture;
    UIImpactFeedbackGenerator *_impactGenerator;
}

@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) UIImpactFeedbackGenerator *impactGenerator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)createSnappingControllerWithSnappingTarget:(double)arg1;
+ (id)_stretchableImageNamed:(id)arg1 withCapInsets:(struct UIEdgeInsets)arg2;
+ (id)trimStartImage;
+ (id)trimStartHighlightedImage;
+ (id)trimEndImage;
+ (id)trimEndHighlightedImage;
+ (id)trimStartImageMini;
+ (id)trimStartHighlightedImageMini;
+ (id)trimEndImageMini;
+ (id)trimEndHighlightedImageMini;
+ (id)playheadImage;
+ (id)playheadImageMini;

- (struct CGSize)intrinsicContentSize;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)setDisabled:(_Bool)arg1;
- (void)_handlePan:(id)arg1;
- (void)_handleTap:(id)arg1;
- (id)initWithFilmStripViewClass:(Class)arg1 spec:(id)arg2;
- (void)_PXUILivePhotoTrimScrubber_commonInit;
- (void)_handleBeginPanGesture:(id)arg1;
- (void)_handleChangePanGesture:(id)arg1;
- (void)prepareForImpact;
- (void)impactOccured;

@end
