/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <Foundation/NSObject.h>

@protocol NUFaceDetectionResult, OS_dispatch_group, OS_dispatch_queue;

@interface PIFaceObservationCache : NSObject

{
    NSObject<OS_dispatch_group> *_group;
    NSObject<OS_dispatch_queue> *_queue;
    id <NUFaceDetectionResult> _result;
}

+ (id)faceRequestWithRequest:(id)arg1;

- (id)init;
- (void)submit:(id)arg1 response:(CDUnknownBlockType)arg2;
- (id)submitSynchronous:(id)arg1 error:(out id *)arg2;

@end
