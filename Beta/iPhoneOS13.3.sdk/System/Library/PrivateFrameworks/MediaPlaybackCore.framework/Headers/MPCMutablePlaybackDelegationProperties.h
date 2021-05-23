/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlaybackCore/MPCPlaybackDelegationProperties.h>

@class MPCPrivateListeningStateSource, NSString, NSTimeZone;

@interface MPCMutablePlaybackDelegationProperties : MPCPlaybackDelegationProperties

@property (nonatomic) unsigned long long storeAccountID;
@property (copy, nonatomic) NSString *deviceGUID;
@property (copy, nonatomic) NSString *deviceName;
@property (copy, nonatomic) MPCPrivateListeningStateSource *privateListeningStateSource;
@property (nonatomic) long long systemReleaseType;
@property (copy, nonatomic) NSString *requestUserAgent;
@property (copy, nonatomic) NSTimeZone *timeZone;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end
