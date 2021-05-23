/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NURenderClient.h>

@class NSArray;

@protocol NUScalePolicy;

@interface NUVideoRenderClient : NURenderClient

{
    id <NUScalePolicy> _scalePolicy;
    long long _sampleMode;
    NSArray *_pipelineFilters;
}

@property (retain, nonatomic) id <NUScalePolicy> scalePolicy;
@property (nonatomic) long long sampleMode;
@property (copy, nonatomic) NSArray *pipelineFilters;

- (void)submitRequestForComposition:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithName:(id)arg1 responseQueue:(id)arg2;

@end
