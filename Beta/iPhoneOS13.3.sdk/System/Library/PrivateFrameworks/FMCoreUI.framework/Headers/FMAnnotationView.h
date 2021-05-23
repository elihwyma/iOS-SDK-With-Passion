/*
 Image: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
 */

#import <MapKit/MKAnnotationView.h>

@class CALayer, CAShapeLayer;

@protocol FMAnnotation><MKAnnotation;

@interface FMAnnotationView : MKAnnotationView

{
    _Bool _shouldPreventLargeAnnotationState;
    _Bool _isDelayed;
    _Bool _isShowingLargeSelectedAnnotation;
    _Bool _hasPhotoImage;
    CAShapeLayer *_smallRingLayer;
    CAShapeLayer *_largeRingLayer;
    CALayer *_smallCircleLayer;
    CALayer *_largeCircleLayer;
    CALayer *_locationOuterLayer;
    CALayer *_locationInnerLayer;
    CALayer *_smallPersonImageLayer;
    CALayer *_largePersonImageLayer;
}

@property (retain, nonatomic) CAShapeLayer *smallRingLayer;
@property (retain, nonatomic) CAShapeLayer *largeRingLayer;
@property (retain, nonatomic) CALayer *smallCircleLayer;
@property (retain, nonatomic) CALayer *largeCircleLayer;
@property (retain, nonatomic) CALayer *locationOuterLayer;
@property (retain, nonatomic) CALayer *locationInnerLayer;
@property (retain, nonatomic) CALayer *smallPersonImageLayer;
@property (retain, nonatomic) CALayer *largePersonImageLayer;
@property (nonatomic) _Bool isShowingLargeSelectedAnnotation;
@property (nonatomic) _Bool hasPhotoImage;
@property (retain, nonatomic) id <FMAnnotation><MKAnnotation> annotation;
@property (nonatomic) _Bool shouldPreventLargeAnnotationState;
@property (nonatomic) _Bool isDelayed;

+ (_Bool)_followsTerrain;
+ (void)setImagePadding:(double)arg1;
+ (void)preloadAssets;
+ (void)setLargeAnnotationBorderVisible:(_Bool)arg1;
+ (void)setThickAnnotationBorder:(_Bool)arg1;
+ (void)setShouldMaskLayer:(_Bool)arg1;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)prepareForReuse;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setTintColor:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 delay:(double)arg3;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 tintColor:(id)arg3;
- (void)updateStyleForAnnotation:(id)arg1;
- (void)invertColorStatusDidChange:(id)arg1;
- (void)_setupSpringActions;
- (void)_updateAnnotationStyle;
- (void)animateDelayedAnimation;
- (void)_selectionWasUpdated:(_Bool)arg1;
- (void)_transitionToNewSize:(_Bool)arg1;
- (void)addColorInvertFilterToLayer:(id)arg1;
- (void)removeColorInvertFilterToLayer:(id)arg1;

@end
