/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlaybackCore/MPCPlaybackRequestEnvironment.h>

@class ICUserIdentity, MPCPlaybackDelegationProperties, MPCPrivateListeningStateSource, NSString;

@interface MPCMutablePlaybackRequestEnvironment : MPCPlaybackRequestEnvironment

@property (copy, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) NSString *clientVersion;
@property (copy, nonatomic) NSString *requestingBundleIdentifier;
@property (copy, nonatomic) NSString *requestingBundleVersion;
@property (copy, nonatomic) MPCPlaybackDelegationProperties *delegationProperties;
@property (copy, nonatomic) MPCPrivateListeningStateSource *privateListeningStateSource;
@property (retain, nonatomic) ICUserIdentity *userIdentity;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end
