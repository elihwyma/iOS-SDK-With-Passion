/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPCNNEspressoContext : NSObject

{
    void *_espressoContext;
}

@property (nonatomic, readonly) void *espressoContext;

+ (_Bool)supportGPU;
+ (void *)sharedEspressoContext;

- (id)initNewContext;

@end
