/*
 Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

#import <NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface ATDetailedRequestInfoForAssetType : NSObject

{
    NSMutableDictionary *_mutableContributors;
    unsigned long long _totalBytesSynced;
    unsigned long long _totalBytesToSync;
    unsigned long long _totalAssetsToSync;
    NSDictionary *_contributors;
}

@property (nonatomic, getter=getTotalBytesSynced) unsigned long long totalBytesSynced;
@property (nonatomic, getter=getTotalBytesToSync) unsigned long long totalBytesToSync;
@property (nonatomic, getter=getTotalAssetsToSync) unsigned long long totalAssetsToSync;
@property (retain, nonatomic, getter=getContributors) NSDictionary *contributors;

+ (id)serializedRequestInfoFromATDetailedRequestInfoForAssetType:(id)arg1;

- (id)init;
- (id)description;
- (void)updateBytesSynced:(unsigned long long)arg1;
- (void)updateBytesToSync:(unsigned long long)arg1 forItemIdentifier:(id)arg2;
- (void)incrementAssetCountToSync;

@end
