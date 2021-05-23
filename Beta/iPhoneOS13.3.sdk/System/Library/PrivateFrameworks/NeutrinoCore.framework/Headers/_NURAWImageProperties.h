/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class CIFilter, NSArray, NSString, _NURAWCameraSpaceProperties;

@protocol NURAWNoiseReductionProperties;

@interface _NURAWImageProperties : NSObject

{
    NSString *_decoderVersion;
    NSArray *_availableDecoderVersions;
    double _temperature;
    double _tint;
    CIFilter *_rawConvert;
    id <NURAWNoiseReductionProperties> _noiseReductionProperties;
    _NURAWCameraSpaceProperties *_rawCameraSpaceProperties;
}

@property (retain) NSString *decoderVersion;
@property (retain) NSArray *availableDecoderVersions;
@property double temperature;
@property double tint;
@property (retain) CIFilter *rawConvert;
@property (retain) id <NURAWNoiseReductionProperties> noiseReductionProperties;
@property (retain) _NURAWCameraSpaceProperties *rawCameraSpaceProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)inputNeutralXYFromRGB:(const double *)arg1;

@end
