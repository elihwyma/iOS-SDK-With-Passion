/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class NSData, NSIndexSet;

__attribute__((visibility("hidden")))
@interface AVApplePortraitMetadataInternal : NSObject

{
    int version;
    float apertureFocalRatio;
    float minimumApertureFocalRatio;
    float maximumApertureFocalRatio;
    float portraitLightingEffectStrength;
    float luminanceNoiseAmplitude;
    int faceOrientation;
    NSData *faceObservationsData;
    NSIndexSet *indexesOfShallowDepthOfFieldObservations;
    struct CGRect focusRectangle;
}

@property (nonatomic) int version;
@property (nonatomic) float apertureFocalRatio;
@property (nonatomic) float minimumApertureFocalRatio;
@property (nonatomic) float maximumApertureFocalRatio;
@property (nonatomic) float portraitLightingEffectStrength;
@property (nonatomic) float luminanceNoiseAmplitude;
@property (nonatomic) int faceOrientation;
@property (retain, nonatomic) NSData *faceObservationsData;
@property (retain, nonatomic) NSIndexSet *indexesOfShallowDepthOfFieldObservations;
@property (nonatomic) struct CGRect focusRectangle;

- (id)init;
- (void)dealloc;

@end
