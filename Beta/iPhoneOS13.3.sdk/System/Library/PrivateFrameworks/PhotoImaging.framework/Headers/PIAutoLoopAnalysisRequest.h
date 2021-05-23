/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <NeutrinoCore/NURenderRequest.h>

@interface PIAutoLoopAnalysisRequest : NURenderRequest

{
    long long _flavor;
}

@property (nonatomic) long long flavor;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)submit:(CDUnknownBlockType)arg1;
- (id)newRenderJob;
- (long long)mediaComponentType;

@end
