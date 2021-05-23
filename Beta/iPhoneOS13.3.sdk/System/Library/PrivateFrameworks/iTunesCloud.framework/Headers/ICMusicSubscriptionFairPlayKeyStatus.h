/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@interface ICMusicSubscriptionFairPlayKeyStatus : NSObject <Swift>

{
    _Bool _hasOnlinePlaybackKeys;
    _Bool _hasOfflinePlaybackKeys;
    unsigned long long _accountUniqueIdentifier;
}

@property (nonatomic) unsigned long long accountUniqueIdentifier;
@property (nonatomic) _Bool hasOnlinePlaybackKeys;
@property (nonatomic) _Bool hasOfflinePlaybackKeys;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFairPlaySubscriptionInfo:(struct FPSubscriptionInfo_)arg1;

@end
