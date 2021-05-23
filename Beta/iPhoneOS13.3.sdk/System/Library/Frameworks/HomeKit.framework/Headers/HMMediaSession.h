/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@class HMAudioControl, HMMediaProfile, NSString, NSUUID, _HMMediaSession;

@protocol HMMediaSessionDelegate;

@interface HMMediaSession : NSObject <Swift>

{
    NSUUID *_uuid;
    long long _playbackState;
    HMAudioControl *_audioControl;
    NSString *_routeUID;
    id <HMMediaSessionDelegate> _delegate;
    long long _shuffleState;
    long long _repeatState;
    NSString *_mediaUniqueIdentifier;
    _HMMediaSession *_mediaSession;
    HMMediaProfile *_mediaProfile;
}

@property (retain, nonatomic) _HMMediaSession *mediaSession;
@property (retain, nonatomic) NSUUID *uuid;
@property (weak) HMMediaProfile *mediaProfile;
@property (nonatomic, readonly) NSString *routeUID;
@property (copy, nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (weak) id <HMMediaSessionDelegate> delegate;
@property (readonly) long long playbackState;
@property (readonly) long long shuffleState;
@property (readonly) long long repeatState;
@property (copy, readonly) NSString *mediaUniqueIdentifier;
@property (readonly) HMAudioControl *audioControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)messageTargetUUID;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)configure:(id)arg1 messageTargetUUID:(id)arg2;
- (id)initWithUUID:(id)arg1 routeUID:(id)arg2 playbackState:(long long)arg3;
- (void)updatePlaybackState:(id)arg1;
- (void)mediaSession:(id)arg1 didUpdatePlaybackState:(long long)arg2;
- (void)mediaSession:(id)arg1 didUpdateMediaState:(id)arg2;
- (void)mediaSession:(id)arg1 didUpdateRouteUID:(id)arg2;
- (void)refreshPlaybackStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)playbackStateDescription;
- (void)resumeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)pauseWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
