/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCVideoRelay : NSObject

{
    NSMutableArray *_videoCaptureClients;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (_Bool)enqueueFrame:(struct __CVBuffer *)arg1 atTime:(CDStruct_1b6d18a9)arg2 cameraStatusBits:(unsigned char)arg3;
- (_Bool)registerForVideoFrames:(id)arg1;
- (_Bool)deregisterForVideoFrames:(id)arg1;

@end
