/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPSaliencyRegion : NSObject

{
    float _confidence;
    struct CGRect _bound;
}

@property struct CGRect bound;
@property float confidence;

+ (id)salientRegionsFromPixelBuffer:(struct __CVBuffer *)arg1;
+ (void)attachSalientRegions:(id)arg1 toPixelBuffer:(struct __CVBuffer *)arg2;

- (id)initWith:(struct CGRect)arg1 confidence:(float)arg2;

@end
