/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSString, VideoAttributes;

__attribute__((visibility("hidden")))
@interface VCRemoteVideoState : NSObject

{
    _Bool _hasReceivedFirstFrame;
    _Bool _isVideoPaused;
    _Bool _isMediaStalled;
    _Bool _isVideoDegraded;
    _Bool _isVideoSuspended;
    VideoAttributes *_remoteScreenAttributes;
    VideoAttributes *_remoteVideoAttributes;
    NSString *_localInterfaceType;
    NSString *_remoteInterfaceType;
}

@property _Bool hasReceivedFirstFrame;
@property _Bool isVideoPaused;
@property _Bool isMediaStalled;
@property _Bool isVideoDegraded;
@property _Bool isVideoSuspended;
@property (retain) VideoAttributes *remoteScreenAttributes;
@property (retain) VideoAttributes *remoteVideoAttributes;
@property (copy, nonatomic) NSString *localInterfaceType;
@property (copy, nonatomic) NSString *remoteInterfaceType;

- (void)dealloc;

@end
