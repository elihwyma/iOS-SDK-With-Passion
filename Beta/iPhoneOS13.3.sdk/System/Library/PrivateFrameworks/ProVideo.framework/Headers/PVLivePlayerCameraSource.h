/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class NSString, PVFrameSet, PVLivePlayerCameraRenderLink;

@interface PVLivePlayerCameraSource : NSObject

{
    struct HGSynchronizable *_lock;
    PVFrameSet *_mostRecentFrameSet;
    PVLivePlayerCameraRenderLink *_renderLink;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)pause;
- (void)play;
- (void)setMuted:(_Bool)arg1;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)itemTimeForHostTime:(double)arg1;
- (void)cameraFrameSetRecieved:(id)arg1;
- (void)cameraFrameSetDropped;
- (void)registerRenderLink:(id)arg1;
- (id)imageBufferForHostTime:(double)arg1;

@end
