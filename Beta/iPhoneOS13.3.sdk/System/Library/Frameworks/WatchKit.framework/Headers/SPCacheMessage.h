/*
 Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

#import <Foundation/NSObject.h>

@class NSData, NSString, SPAssetCacheSyncData;

@interface SPCacheMessage : NSObject

{
    int _messageType;
    unsigned long long _cacheType;
    NSString *_assetKey;
    NSString *_gizmoCacheIdentifier;
    NSData *_assetData;
    SPAssetCacheSyncData *_syncData;
    unsigned long long _error;
}

@property (nonatomic) int messageType;
@property (nonatomic) unsigned long long cacheType;
@property (retain, nonatomic) NSString *assetKey;
@property (retain, nonatomic) NSString *gizmoCacheIdentifier;
@property (retain, nonatomic) NSData *assetData;
@property (retain, nonatomic) SPAssetCacheSyncData *syncData;
@property (nonatomic) unsigned long long error;

+ (id)toProto:(id)arg1;
+ (id)fromProto:(id)arg1;

- (id)init;
- (id)initWithDictionary:(id)arg1;

@end
