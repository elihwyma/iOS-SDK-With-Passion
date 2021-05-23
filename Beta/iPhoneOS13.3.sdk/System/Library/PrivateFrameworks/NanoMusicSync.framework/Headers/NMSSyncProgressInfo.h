/*
 Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NMSSyncProgressInfo : NSObject

{
    float _estimatedSyncProgress;
    NSString *_assetType;
    unsigned long long _syncState;
    unsigned long long _syncWaitingSubstate;
    long long _numberOfAssetItems;
    long long _numberOfAssetItemsSynced;
    long long _numberOfAssetItemsNeedingDownload;
    unsigned long long _aggregateAssetItemBytesAdded;
}

@property (retain, nonatomic) NSString *assetType;
@property (nonatomic) unsigned long long syncState;
@property (nonatomic) unsigned long long syncWaitingSubstate;
@property (nonatomic) float estimatedSyncProgress;
@property (nonatomic) long long numberOfAssetItems;
@property (nonatomic) long long numberOfAssetItemsSynced;
@property (nonatomic) long long numberOfAssetItemsNeedingDownload;
@property (nonatomic) unsigned long long aggregateAssetItemBytesAdded;

+ (id)_stringFromSyncState:(unsigned long long)arg1;
+ (id)_stringFromWaitingSubstate:(unsigned long long)arg1;

- (id)description;

@end
