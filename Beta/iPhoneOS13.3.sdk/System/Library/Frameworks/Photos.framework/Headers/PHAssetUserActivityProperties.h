/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHAssetPropertySet.h>

@interface PHAssetUserActivityProperties : PHAssetPropertySet

{
    long long _syncedPlayCount;
    long long _syncedShareCount;
    long long _syncedViewCount;
    long long _pendingPlayCount;
    long long _pendingShareCount;
    long long _pendingViewCount;
}

@property (nonatomic) long long syncedPlayCount;
@property (nonatomic) long long syncedShareCount;
@property (nonatomic) long long syncedViewCount;
@property (nonatomic) long long pendingPlayCount;
@property (nonatomic) long long pendingShareCount;
@property (nonatomic) long long pendingViewCount;
@property (nonatomic, readonly) long long playCount;
@property (nonatomic, readonly) long long shareCount;
@property (nonatomic, readonly) long long viewCount;

+ (id)propertiesToFetch;
+ (id)propertySetName;

- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(_Bool)arg3;

@end
