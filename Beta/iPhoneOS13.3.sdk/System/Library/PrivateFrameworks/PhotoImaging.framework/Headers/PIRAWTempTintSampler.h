/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <NeutrinoCore/NUTagColorSampler.h>

@class NSString;

@interface PIRAWTempTintSampler : NUTagColorSampler

@property (nonatomic, readonly) NSString *tag;

- (id)_pipelineFilters;
- (id)initWithComposition:(id)arg1 responseQueue:(id)arg2;

@end
