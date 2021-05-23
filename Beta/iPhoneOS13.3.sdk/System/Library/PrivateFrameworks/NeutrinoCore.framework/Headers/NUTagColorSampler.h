/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUColorSampler.h>

@class NSString;

@interface NUTagColorSampler : NUColorSampler

{
    NSString *_tag;
}

@property (nonatomic, readonly) NSString *tag;

- (id)_pipelineFilters;
- (id)initWithComposition:(id)arg1 tag:(id)arg2;
- (id)initWithComposition:(id)arg1 tag:(id)arg2 responseQueue:(id)arg3;

@end
