/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/Swift-Protocol.h>

@class NSArray, NSString;

@protocol NURAWNoiseReductionProperties;

@protocol NURAWImageProperties <Swift>

@property (readonly) NSString *decoderVersion;
@property (readonly) NSArray *availableDecoderVersions;
@property (readonly) double temperature;
@property (readonly) double tint;
@property (readonly) id <NURAWNoiseReductionProperties> noiseReductionProperties;

- (unsigned short)inputNeutralXYFromRGB: /* Error: Ran out of types for this method. */;

@end
