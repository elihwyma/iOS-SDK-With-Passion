/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/Swift-Protocol.h>

@class NSString;

@protocol MPNowPlayingInfoTransportableSessionRequest <Swift>

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *preferredSessionType;

@end
