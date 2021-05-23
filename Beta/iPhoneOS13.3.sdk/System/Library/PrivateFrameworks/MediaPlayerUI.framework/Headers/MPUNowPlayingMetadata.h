/*
 Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface MPUNowPlayingMetadata : NSObject

{
    NSDictionary *_nowPlayingInfo;
}

@property (nonatomic, readonly) NSDictionary *nowPlayingInfo;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *artist;
@property (nonatomic, readonly) NSString *album;
@property (nonatomic, readonly) NSString *radioStationName;
@property (nonatomic, readonly) double elapsedTime;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) float playbackRate;
@property (nonatomic, readonly) unsigned long long persistentID;
@property (nonatomic, readonly) NSString *radioStationIdentifier;
@property (nonatomic, readonly, getter=isMusicApp) _Bool musicApp;
@property (nonatomic, readonly, getter=isAlwaysLive) _Bool alwaysLive;
@property (nonatomic, readonly, getter=isExplicitContent) _Bool explicitContent;

- (id)initWithMediaRemoteNowPlayingInfo:(id)arg1;

@end
