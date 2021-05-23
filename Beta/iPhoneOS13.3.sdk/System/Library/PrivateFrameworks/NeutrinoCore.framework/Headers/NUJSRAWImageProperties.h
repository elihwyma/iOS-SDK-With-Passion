/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUJSProxy.h>

@class NSString, NUJSRAWNoiseReductionProperties;

@protocol NURAWImageProperties;

@interface NUJSRAWImageProperties : NUJSProxy

@property (readonly) id <NURAWImageProperties> rawImageProperties;
@property (readonly) NSString *decoderVersion;
@property (readonly) double temperature;
@property (readonly) double tint;
@property (readonly) NUJSRAWNoiseReductionProperties *noiseReductionProperties;

- (id)initWithRepresentedObject:(id)arg1 context:(id)arg2;
- (id)initWithRAWImageProperties:(id)arg1 context:(id)arg2;

@end
