/*
 Image: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
 */

#import <AssetViewer/ASVUnifiedGestureRecognizer.h>

@class ASVDeceleration, ASVVelocitySample3D, MISSING_TYPE, NSSet, NSString;

@protocol ASVWorldGestureRecognizerDelegate;

@interface ASVWorldGestureRecognizer : ASVUnifiedGestureRecognizer

{
    id <ASVWorldGestureRecognizerDelegate> _worldDelegate;
    NSSet *_snapScalesSet;
    ASVDeceleration *_translationDeceleration;
    ASVVelocitySample3D *_translationVelocitySample;
    ASVVelocitySample3D *_translationLastVelocitySample;
    double _lastTranslationTime;
    MISSING_TYPE *_normalizedVelocity;
    MISSING_TYPE *_lastTranslationLocation;
}

@property (retain, nonatomic) ASVDeceleration *translationDeceleration;
@property (retain, nonatomic) ASVVelocitySample3D *translationVelocitySample;
@property (retain, nonatomic) ASVVelocitySample3D *translationLastVelocitySample;
@property (nonatomic) MISSING_TYPE *normalizedVelocity;
@property (nonatomic) MISSING_TYPE *lastTranslationLocation;
@property (nonatomic) double lastTranslationTime;
@property (weak, nonatomic) id <ASVWorldGestureRecognizerDelegate> worldDelegate;
@property (retain, nonatomic) NSSet *snapScalesSet;
@property (nonatomic, readonly) MISSING_TYPE *decelerationTranslationDelta;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) float minimumObjectScale;
@property (nonatomic, readonly) float maximumObjectScale;

- (_Bool)isDecelerating;
- (void)setEnabledGestureTypes:(unsigned long long)arg1;
- (void)cancelDeceleration;
- (void)startTranslationDecelerationWithInitialVelocity: /* Error: Ran out of types for this method. */;
- (void)gestureBeganTranslation:(id)arg1;
- (void)gesture:(id)arg1 translatedAssetToScreenPoint: /* Error: Ran out of types for this method. */;
- (void)gestureEndedTranslation:(id)arg1;
- (void)gestureBeganLevitation:(id)arg1;
- (void)gesture:(id)arg1 levitatedAssetToScreenPoint: /* Error: Ran out of types for this method. */;
- (void)gestureEndedLevitation:(id)arg1;
- (id)initWithWorldDelegate:(id)arg1 feedbackGenerator:(id)arg2;
- (id)singleFingerGestureForTouch:(id)arg1 dataSource:(id)arg2 enabledGestureTypes:(unsigned long long)arg3;
- (id)twoFingerGestureForFirstTouch:(id)arg1 secondTouch:(id)arg2 dataSource:(id)arg3;
- (float)clampedScaleForScale:(float)arg1;

@end
