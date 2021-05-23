/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NURenderRequest.h>

@class NSString;

@protocol NUScalePolicy;

@interface NUFaceDetectionRequest : NURenderRequest

{
    long long _maxFaceCount;
    id <NUScalePolicy> _scalePolicy;
}

@property long long maxFaceCount;
@property (retain) id <NUScalePolicy> scalePolicy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) CDStruct_1b6d18a9 time;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithComposition:(id)arg1;
- (void)submit:(CDUnknownBlockType)arg1;
- (id)newRenderJob;
- (long long)mediaComponentType;

@end
