/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class SBCPlaybackPositionSyncService;

@protocol OS_dispatch_queue, OS_os_log;

__attribute__((visibility("hidden")))
@interface VUIPlaybackPositionController : NSObject

{
    NSObject<OS_os_log> *_logObject;
    NSObject<OS_dispatch_queue> *_queue;
    SBCPlaybackPositionSyncService *_syncService;
    _Bool _running;
}

@property (nonatomic, getter=isRunning) _Bool running;

+ (id)sharedInstance;

- (id)init;
- (id)_init;
- (void)_onQueue_beginCapturingEvents;
- (void)_onQueue_endCapturingEvents;
- (void)_onQueue_updateEntityWithPlaybackPositionInfo:(id)arg1 forTrack:(id)arg2;
- (void)beginCapturingEvents;
- (void)endCapturingEvents;
- (void)persistPlaybackPositionInfo:(id)arg1 forTrack:(id)arg2;

@end
