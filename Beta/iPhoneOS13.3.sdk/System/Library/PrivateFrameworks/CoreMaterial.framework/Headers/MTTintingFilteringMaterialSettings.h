/*
 Image: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial
 */

#import <CoreMaterial/MTTintingMaterialSettings.h>

@class NSArray, NSString;

@interface MTTintingFilteringMaterialSettings : MTTintingMaterialSettings

{
    _Bool _averageColorEnabled;
    _Bool _blurAtEnd;
    double _luminanceAmount;
    NSArray *_luminanceValues;
    double _blurRadius;
    double _saturation;
    double _brightness;
    double _zoom;
    double _backdropScale;
    NSString *_blurInputQuality;
    struct CAColorMatrix _colorMatrix;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double luminanceAmount;
@property (copy, nonatomic, readonly) NSArray *luminanceValues;
@property (nonatomic, readonly) double blurRadius;
@property (nonatomic, readonly, getter=isAverageColorEnabled) _Bool averageColorEnabled;
@property (nonatomic, readonly) double saturation;
@property (nonatomic, readonly) double brightness;
@property (nonatomic, readonly) struct CAColorMatrix colorMatrix;
@property (nonatomic, readonly) double zoom;
@property (nonatomic, readonly) double backdropScale;
@property (copy, nonatomic, readonly) NSString *blurInputQuality;
@property (nonatomic, readonly, getter=isBlurAtEnd) _Bool blurAtEnd;

- (void)_processMaterialFilteringDescription:(id)arg1 defaultingToIdentity:(_Bool)arg2;
- (id)initWithMaterialDescription:(id)arg1 andDescendantDescriptions:(id)arg2;

@end
