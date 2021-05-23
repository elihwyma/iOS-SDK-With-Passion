/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class ICStoreDialogResponse, NSDictionary;

@interface ICMusicSubscriptionLeaseStatus : NSObject <Swift>

{
    _Bool _shouldPlaybackRequireOnlineKeys;
    _Bool _hasOnlinePlaybackKeys;
    _Bool _hasOfflinePlaybackKeys;
    _Bool _hasPendingLeaseAcquisition;
    long long _leaseState;
    ICStoreDialogResponse *_stateReasonDialog;
    NSDictionary *_stateReasonDialogMetricsDictionary;
}

@property (nonatomic) _Bool hasOnlinePlaybackKeys;
@property (nonatomic) _Bool hasOfflinePlaybackKeys;
@property (nonatomic) _Bool hasPendingLeaseAcquisition;
@property (nonatomic) _Bool shouldPlaybackRequireOnlineKeys;
@property (nonatomic) long long leaseState;
@property (copy, nonatomic) ICStoreDialogResponse *stateReasonDialog;
@property (copy, nonatomic) NSDictionary *stateReasonDialogMetricsDictionary;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
