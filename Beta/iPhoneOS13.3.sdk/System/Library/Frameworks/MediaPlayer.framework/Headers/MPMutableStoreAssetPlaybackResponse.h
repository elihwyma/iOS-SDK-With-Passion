/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPStoreAssetPlaybackResponse.h>

@class MPStoreHLSAssetInfo, NSArray, NSDate, NSDictionary;

@interface MPMutableStoreAssetPlaybackResponse : MPStoreAssetPlaybackResponse

@property (copy, nonatomic) NSDictionary *dialogDictionary;
@property (copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSArray *fileAssetInfoList;
@property (retain, nonatomic) MPStoreHLSAssetInfo *hlsAssetInfo;
@property (nonatomic, getter=isLiveRadioStream) _Bool liveRadioStream;
@property (copy, nonatomic) NSArray *radioStreamAssetInfoList;
@property (retain, nonatomic) id suzeLeaseID;
@property (nonatomic, getter=isSubscriptionRequired) _Bool subscriptionRequired;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
