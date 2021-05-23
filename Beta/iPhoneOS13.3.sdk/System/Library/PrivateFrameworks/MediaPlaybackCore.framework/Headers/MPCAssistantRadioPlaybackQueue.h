/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlaybackCore/MPCAssistantPlaybackQueue.h>

@class NSString;

@interface MPCAssistantRadioPlaybackQueue : MPCAssistantPlaybackQueue

{
    NSString *_stationStringID;
}

@property (nonatomic, readonly) NSString *stationStringID;

+ (id)radioQueueWithContextID:(id)arg1 stationStringID:(id)arg2;

- (id)description;
- (struct _MRSystemAppPlaybackQueue *)createRemotePlaybackQueue;
- (_Bool)supportedOnCurrentPlatform;
- (id)initWithContextID:(id)arg1 stationStringID:(id)arg2;

@end
