/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVApplePortraitMetadataInternal, NSData, NSIndexSet;

@interface AVApplePortraitMetadata : NSObject

{
    AVApplePortraitMetadataInternal *_internal;
}

@property (readonly) float apertureFocalRatio;
@property (readonly) float minimumApertureFocalRatio;
@property (readonly) float maximumApertureFocalRatio;
@property (readonly) float portraitLightingEffectStrength;
@property (readonly) float luminanceNoiseAmplitude;
@property (readonly) int faceOrientation;
@property (readonly) NSData *faceObservationsData;
@property (readonly) NSIndexSet *indexesOfShallowDepthOfFieldObservations;
@property (readonly) struct CGRect focusRectangle;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInternal:(id)arg1;
- (id)initWithPortraitMetadataDictionary:(id)arg1;

@end
