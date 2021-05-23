/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVCaptureSynchronizedData.h>

@class AVCaptureSynchronizedDepthDataInternal, AVDepthData;

@interface AVCaptureSynchronizedDepthData : AVCaptureSynchronizedData

{
    AVCaptureSynchronizedDepthDataInternal *_internal;
}

@property (readonly) AVDepthData *depthData;
@property (readonly) _Bool depthDataWasDropped;
@property (readonly) long long droppedReason;

- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (id)_initWithDepthData:(id)arg1 timestamp:(CDStruct_1b6d18a9)arg2 depthDataWasDropped:(_Bool)arg3 droppedReason:(long long)arg4;

@end
