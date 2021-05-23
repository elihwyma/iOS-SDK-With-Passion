/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NURenderRequest.h>

@protocol NUScalePolicy;

@interface NUGeometryRequest : NURenderRequest

{
    id <NUScalePolicy> _scalePolicy;
}

@property (retain) id <NUScalePolicy> scalePolicy;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithComposition:(id)arg1;
- (id)submitSynchronous:(out id *)arg1;
- (void)submit:(CDUnknownBlockType)arg1;
- (id)newRenderJob;
- (long long)mediaComponentType;

@end
