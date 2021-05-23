/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class ICUserIdentity, NSDictionary, NSString;

@interface MPRemotePlaybackQueue : NSObject <Swift>

{
    struct _MRSystemAppPlaybackQueue *_mediaRemotePlaybackQueue;
    ICUserIdentity *_userIdentity;
}

@property (copy, nonatomic) NSDictionary *userInfo;
@property (nonatomic, getter=isRequestingImmediatePlayback) _Bool requestingImmediatePlayback;
@property (nonatomic) _Bool shouldOverrideManuallyCuratedQueue;
@property (nonatomic) long long replaceIntent;
@property (copy, nonatomic) NSString *siriRecommendationIdentifier;
@property (copy, nonatomic, readonly) NSString *siriAssetInfo;
@property (copy, nonatomic, readonly) NSString *featureName;
@property (copy, nonatomic, readonly) NSDictionary *siriWHAMetricsInfo;
@property (nonatomic, readonly) ICUserIdentity *userIdentity;

+ (_Bool)supportsSecureCoding;
+ (id)queueWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue *)arg1;
+ (id)queueWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue *)arg1 options:(id)arg2;
+ (void)registerRemotePlaybackQueueClass:(Class)arg1 forPlaybackQueueType:(int)arg2;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue *)arg1 options:(id)arg2;
- (_Bool)verifyWithError:(id *)arg1;
- (struct _MRSystemAppPlaybackQueue *)_mediaRemotePlaybackQueue;

@end
