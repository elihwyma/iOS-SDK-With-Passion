/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NTKFace;

@interface _NTKCompanionFaceRenderingTask : NSObject

{
    NTKFace *_face;
    long long _detailMode;
    CDUnknownBlockType _completionHandler;
}

@property (nonatomic, readonly) NTKFace *face;
@property (nonatomic, readonly, getter=isMemberOfBatch) _Bool memberOfBatch;
@property (nonatomic, readonly) long long detailMode;
@property (copy, nonatomic, readonly) CDUnknownBlockType completionHandler;

- (id)initWithFace:(id)arg1 detailMode:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
