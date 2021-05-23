/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRProtocolMessage.h>

__attribute__((visibility("hidden")))
@interface MRClientUpdatesConfigMessage : MRProtocolMessage

@property (nonatomic, readonly) _Bool nowPlayingUpdates;
@property (nonatomic, readonly) _Bool artworkUpdates;
@property (nonatomic, readonly) _Bool volumeUpdates;
@property (nonatomic, readonly) _Bool keyboardUpdates;
@property (nonatomic, readonly) _Bool outputDeviceUpdates;

- (unsigned long long)type;
- (id)initWithNowPlayingUpdates:(_Bool)arg1 artworkUpdates:(_Bool)arg2 volumeUpdates:(_Bool)arg3 keyboardUpdates:(_Bool)arg4 outputDeviceUpdates:(_Bool)arg5;

@end
