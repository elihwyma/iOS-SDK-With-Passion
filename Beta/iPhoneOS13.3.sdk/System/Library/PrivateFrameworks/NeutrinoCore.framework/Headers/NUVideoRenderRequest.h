/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NURenderRequest.h>

@class NUColorSpace;

@protocol NUScalePolicy;

@interface NUVideoRenderRequest : NURenderRequest

{
    NUColorSpace *_colorSpace;
    id <NUScalePolicy> _scalePolicy;
}

@property (retain, nonatomic) NUColorSpace *colorSpace;
@property (retain) id <NUScalePolicy> scalePolicy;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithComposition:(id)arg1;
- (void)submit:(CDUnknownBlockType)arg1;
- (id)newRenderJob;
- (long long)mediaComponentType;

@end
