/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <NeutrinoCore/NURenderRequest.h>

@protocol NUScalePolicy;

@interface PIStillReframeRequest : NURenderRequest

{
    id <NUScalePolicy> _scalePolicy;
}

@property (retain, nonatomic) id <NUScalePolicy> scalePolicy;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithComposition:(id)arg1;
- (void)submit:(CDUnknownBlockType)arg1;
- (id)newRenderJob;
- (long long)mediaComponentType;

@end
