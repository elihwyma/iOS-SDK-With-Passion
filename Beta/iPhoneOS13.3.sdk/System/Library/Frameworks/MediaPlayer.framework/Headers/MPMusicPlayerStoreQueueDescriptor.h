/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPMusicPlayerQueueDescriptor.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface MPMusicPlayerStoreQueueDescriptor : MPMusicPlayerQueueDescriptor

{
    NSArray *_storeIDs;
    NSMutableDictionary *_storeFronts;
    NSString *_startItemID;
    NSDictionary *_assetStoreFronts;
}

@property (copy, nonatomic) NSDictionary *assetStoreFronts;
@property (copy, nonatomic) NSArray *storeIDs;
@property (copy, nonatomic) NSString *startItemID;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStoreIDs:(id)arg1;
- (void)setStartTime:(double)arg1 forItemWithStoreID:(id)arg2;
- (void)setEndTime:(double)arg1 forItemWithStoreID:(id)arg2;
- (void)setSourceStorefront:(id)arg1 forItemWithStoreID:(id)arg2;

@end
