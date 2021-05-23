/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/Swift-Protocol.h>

@class NSString, NUJSRAWNoiseReductionProperties;

@protocol NUJSRAWImagePropertiesExport <Swift>

@property (readonly) NSString *decoderVersion;
@property (readonly) double temperature;
@property (readonly) double tint;
@property (readonly) NUJSRAWNoiseReductionProperties *noiseReductionProperties;

@end
