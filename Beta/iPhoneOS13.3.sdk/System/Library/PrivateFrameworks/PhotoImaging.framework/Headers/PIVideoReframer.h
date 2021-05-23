/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_group;

@interface PIVideoReframer : NSObject

{
    struct shared_ptr<VRFSession> session;
    CDStruct_d58201db encodedPixelSize;
    long long orientation;
    union CenteredRect pixelRect;
    union CenteredRect clapRect;
    union CenteredRect viewRect;
    NSObject<OS_dispatch_group> *processGroup;
    CDUnknownBlockType _frameProvider;
    long long _revision;
}

@property (copy, nonatomic) CDUnknownBlockType frameProvider;
@property (nonatomic, readonly) long long revision;

+ (long long)defaultRevision;
+ (CDUnion_b42e088f)defaultConfigForRevision:(long long)arg1;
+ (id)reframerWithRevision:(long long)arg1 encodedPixelSize:(CDStruct_912cb5d2)arg2 orientation:(long long)arg3 clapRect:(CDStruct_996ac03c)arg4 viewRect:(CDStruct_996ac03c)arg5 config:(const CDUnion_b42e088f *)arg6;

- (id)init;
- (double)confidence;
- (id).cxx_construct;
- (id)initWithEncodedPixelSize:(CDStruct_912cb5d2)arg1 orientation:(long long)arg2 clapRect:(CDStruct_996ac03c)arg3 viewRect:(CDStruct_996ac03c)arg4 config:(const CDUnion_b42e088f *)arg5;
- (void)startReframingAtTime:(CDStruct_1b6d18a9)arg1;
- (void)updateWithTrackedSubjects:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)updateWithEstimatedCameraMotion:(struct CGVector)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)finishReframingAtTime:(CDStruct_1b6d18a9)arg1;
- (void)processReframe:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (struct CGRect)reframedViewRectAtTime:(CDStruct_1b6d18a9)arg1;

@end
