/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class MPStoreHLSAssetInfo, NSArray, NSDate, NSDictionary;

@interface MPStoreAssetPlaybackResponse : NSObject <Swift>

{
    NSDictionary *_dialogDictionary;
    NSDate *_expirationDate;
    NSArray *_fileAssetInfoList;
    MPStoreHLSAssetInfo *_hlsAssetInfo;
    _Bool _liveRadioStream;
    NSArray *_radioStreamAssetInfoList;
    id _suzeLeaseID;
    _Bool _subscriptionRequired;
}

@property (copy, nonatomic, readonly) NSDictionary *dialogDictionary;
@property (copy, nonatomic, readonly) NSDate *expirationDate;
@property (copy, nonatomic, readonly) NSArray *fileAssetInfoList;
@property (nonatomic, readonly) MPStoreHLSAssetInfo *hlsAssetInfo;
@property (nonatomic, readonly, getter=isLiveRadioStream) _Bool liveRadioStream;
@property (copy, nonatomic, readonly) NSArray *radioStreamAssetInfoList;
@property (nonatomic, readonly) id suzeLeaseID;
@property (nonatomic, readonly, getter=isSubscriptionRequired) _Bool subscriptionRequired;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)_copyWithPlaybackResponseClass:(Class)arg1;

@end
