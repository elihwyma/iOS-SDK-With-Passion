/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE, NSDictionary;

@interface GKNoiseMap : NSObject

{
    float *_map;
    _Bool _seamless;
    MISSING_TYPE *_sampleCount;
    NSDictionary *_gradientColors;
    MISSING_TYPE *_size;
    MISSING_TYPE *_origin;
}

@property (copy, nonatomic) NSDictionary *gradientColors;
@property (nonatomic, readonly) MISSING_TYPE *size;
@property (nonatomic, readonly) MISSING_TYPE *origin;
@property (nonatomic, readonly) MISSING_TYPE *sampleCount;
@property (nonatomic, readonly, getter=isSeamless) _Bool seamless;

+ (id)noiseMapWithNoise:(id)arg1;
+ (id)noiseMapWithNoise:(id)arg1 size:(_Bool)arg2 origin:sampleCount:seamless: /* Error: Ran out of types for this method. */;

- (id)init;
- (void)dealloc;
- (id)initWithNoise:(id)arg1;
- (id)initWithNoise:(id)arg1 size:(_Bool)arg2 origin:sampleCount:seamless: /* Error: Ran out of types for this method. */;
- (int)mapIndexX:(int)arg1 y:(int)arg2;
- (id)__colorData;
- (float)valueAtPosition: /* Error: Ran out of types for this method. */;
- (float)interpolatedValueAtPosition: /* Error: Ran out of types for this method. */;
- (void)setValue:(float)arg1 atPosition: /* Error: Ran out of types for this method. */;

@end
