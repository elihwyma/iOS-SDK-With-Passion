/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <NeutrinoCore/NUColorSampler.h>

@class NSString;

@interface PISourceSampler : NUColorSampler

@property (nonatomic, readonly) NSString *tag;

- (id)_pipelineFilters;

@end
