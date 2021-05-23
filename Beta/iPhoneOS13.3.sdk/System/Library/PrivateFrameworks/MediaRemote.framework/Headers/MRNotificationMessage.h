/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRProtocolMessage.h>

@class NSDictionary, NSString, _MRNowPlayingPlayerPathProtobuf;

@interface MRNotificationMessage : MRProtocolMessage

@property (nonatomic, readonly) NSString *notification;
@property (nonatomic, readonly) NSDictionary *userInfo;
@property (nonatomic, readonly) _MRNowPlayingPlayerPathProtobuf *playerPath;

- (unsigned long long)type;
- (id)initWithNotification:(id)arg1;

@end
