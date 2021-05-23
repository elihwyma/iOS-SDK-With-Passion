/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPPetsRegion : NSObject

{
    float _confidence;
    struct CGRect _bound;
}

@property struct CGRect bound;
@property float confidence;

- (id)initWith:(struct CGRect)arg1 confidence:(float)arg2;

@end
