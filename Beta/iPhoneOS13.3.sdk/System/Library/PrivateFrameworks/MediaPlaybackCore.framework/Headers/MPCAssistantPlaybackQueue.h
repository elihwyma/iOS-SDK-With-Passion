/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class ICUserIdentity, NSDictionary, NSString;

@interface MPCAssistantPlaybackQueue : NSObject

{
    _Bool _shouldOverrideManuallyCuratedQueue;
    _Bool _shouldImmediatelyStartPlayback;
    NSString *_contextID;
    NSString *_siriRecommendationID;
    NSString *_siriAssetInfo;
    NSString *_featureName;
    NSDictionary *_siriWHAMetricsInfo;
    ICUserIdentity *_userIdentity;
}

@property (copy, nonatomic, readonly) NSString *contextID;
@property (nonatomic, readonly) _Bool supportedOnCurrentPlatform;
@property (nonatomic) _Bool shouldOverrideManuallyCuratedQueue;
@property (nonatomic) _Bool shouldImmediatelyStartPlayback;
@property (copy, nonatomic) NSString *siriRecommendationID;
@property (copy, nonatomic) NSString *siriAssetInfo;
@property (copy, nonatomic) NSString *featureName;
@property (copy, nonatomic) NSDictionary *siriWHAMetricsInfo;
@property (copy, nonatomic) ICUserIdentity *userIdentity;

- (id)initWithContextID:(id)arg1;
- (struct _MRSystemAppPlaybackQueue *)createRemotePlaybackQueue;

@end
