/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <Foundation/NSObject.h>

@interface PIVideoReframePipelineStateSetting : NSObject

{
    long long _sampleMode;
    CDStruct_1b6d18a9 _time;
}

@property (nonatomic) CDStruct_1b6d18a9 time;
@property (nonatomic) long long sampleMode;

- (id)nu_evaluateWithPipelineState:(id)arg1 error:(out id *)arg2;

@end
