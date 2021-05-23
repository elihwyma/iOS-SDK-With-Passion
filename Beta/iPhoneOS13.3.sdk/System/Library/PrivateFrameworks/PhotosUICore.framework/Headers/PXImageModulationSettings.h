/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSettings.h>

@interface PXImageModulationSettings : PXSettings

{
    _Bool _enabled;
    _Bool _forceCurrentScreenSupportsHDR;
    long long _filterType;
    long long _HDRConsideration;
    double _HDRModulationIntensity;
    double _SDRModulationIntensity;
    double _videoComplementModulationIntensity;
    long long _EDRHeadroomRequestScheme;
    long long _EDRHeadroomUsageScheme;
    double _manualEDRHeadroomRequestStops;
    double _EDRHeadroomRequestHDRThreshold;
    double _EDRHeadroomRequestSustainDuration;
    double _lowEDRRequestedHeadroomStops;
    double _highEDRRequestedHeadroomStops;
    double _deviceMaximumEDRHeadroomStops;
}

@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic) long long filterType;
@property (nonatomic) long long HDRConsideration;
@property (nonatomic) double HDRModulationIntensity;
@property (nonatomic) double SDRModulationIntensity;
@property (nonatomic) double videoComplementModulationIntensity;
@property (nonatomic) long long EDRHeadroomRequestScheme;
@property (nonatomic) long long EDRHeadroomUsageScheme;
@property (nonatomic) double manualEDRHeadroomRequestStops;
@property (nonatomic) double EDRHeadroomRequestHDRThreshold;
@property (nonatomic) double EDRHeadroomRequestSustainDuration;
@property (nonatomic) double lowEDRRequestedHeadroomStops;
@property (nonatomic) double highEDRRequestedHeadroomStops;
@property (nonatomic) double deviceMaximumEDRHeadroomStops;
@property (nonatomic) _Bool forceCurrentScreenSupportsHDR;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end
