/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSMutableDictionary;

@interface BWInferenceSchedulerResourceCoordinator : NSObject

{
    NSMutableDictionary *_requestedPoolSizeByFormat;
    NSMutableDictionary *_pixelBufferPoolByFormat;
}

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (int)requestPixelBufferPoolForRequirement:(id)arg1 size:(unsigned long long)arg2;
- (void)preparePixelBufferPools;
- (id)pixelBufferPoolForFormat:(id)arg1;
- (int)requestPixelBufferPoolForFormat:(id)arg1 size:(unsigned long long)arg2;
- (id)formatsWithRequestedPoolsRemainingAfterSubtractingFormats:(id)arg1;

@end
