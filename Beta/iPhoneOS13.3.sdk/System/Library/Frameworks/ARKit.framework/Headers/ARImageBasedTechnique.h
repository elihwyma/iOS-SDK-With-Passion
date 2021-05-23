/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARTechnique.h>

@class NSMutableArray, NSObject;

@protocol OS_dispatch_semaphore;

@interface ARImageBasedTechnique : ARTechnique

{
    NSMutableArray *_pendingResultData;
    NSMutableArray *_pendingFrameReferences;
    NSMutableArray *_pendingRequestContexts;
    NSObject<OS_dispatch_semaphore> *_pendingRequestsSemaphore;
}

- (id)init;
- (id)processData:(id)arg1;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (void)pushResultData:(id)arg1 forTimestamp:(double)arg2;
- (_Bool)context:(id)arg1 matchesFrameReference:(id)arg2;
- (void)prepareResultData:(id)arg1 forContext:(id)arg2;
- (void)pushResultData:(id)arg1 forFrameReference:(id)arg2;
- (void)pushResultData:(id)arg1 forFrame:(struct __CVBuffer *)arg2;

@end
