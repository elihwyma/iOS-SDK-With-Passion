/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUJSProxy.h>

@protocol NURAWNoiseReductionProperties;

@interface NUJSRAWNoiseReductionProperties : NUJSProxy

@property (readonly) id <NURAWNoiseReductionProperties> rawNoiseReductionProperties;
@property (readonly) double luminance;
@property (readonly) double color;

- (id)initWithRepresentedObject:(id)arg1 context:(id)arg2;
- (id)initWithRAWNoiseReductionProperties:(id)arg1 context:(id)arg2;

@end
