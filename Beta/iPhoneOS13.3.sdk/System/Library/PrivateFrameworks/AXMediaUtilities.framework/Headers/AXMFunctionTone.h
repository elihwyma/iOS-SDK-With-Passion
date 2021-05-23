/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <AXMediaUtilities/AXMTone.h>

@interface AXMFunctionTone : AXMTone

{
    CDUnknownBlockType _function;
    CDStruct_79de6ffd _xAxisDescriptor;
    CDStruct_79de6ffd _yAxisDescriptor;
}

@property (nonatomic, readonly) CDUnknownBlockType function;
@property (nonatomic, readonly) CDStruct_79de6ffd xAxisDescriptor;
@property (nonatomic, readonly) CDStruct_79de6ffd yAxisDescriptor;

- (void)renderInBuffer:(vector_3203cf93 *)arg1 atFrame:(unsigned long long)arg2;
- (double)_xAxisValueForNormalizedPosition:(double)arg1;
- (id)initWithUnivariateFunction:(CDUnknownBlockType)arg1 sampleRate:(double)arg2 envelope:(id)arg3 xAxisDescriptor:(CDStruct_79de6ffd)arg4 yAxisDescriptor:(CDStruct_79de6ffd)arg5;

@end
