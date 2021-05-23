/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlaybackCore/MPCAssistantPlaybackQueue.h>

@class NSData, NSString;

@interface MPCAssistantCustomDataPlaybackQueue : MPCAssistantPlaybackQueue

{
    NSString *_identifier;
    NSData *_customData;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSData *customData;

+ (id)customDataQueueWithContextID:(id)arg1 identifier:(id)arg2 customData:(id)arg3;

- (id)description;
- (struct _MRSystemAppPlaybackQueue *)createRemotePlaybackQueue;
- (id)initWithContextID:(id)arg1 identifier:(id)arg2 customData:(id)arg3;

@end
