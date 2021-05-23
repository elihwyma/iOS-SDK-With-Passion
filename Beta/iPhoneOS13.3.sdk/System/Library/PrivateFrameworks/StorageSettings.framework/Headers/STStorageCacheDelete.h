/*
 Image: /System/Library/PrivateFrameworks/StorageSettings.framework/StorageSettings
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface STStorageCacheDelete : NSObject

{
    int _cdNotifyToken;
    NSDictionary *_cdDict;
}

@property (retain) NSDictionary *cdDict;

+ (id)sharedMonitor;

- (id)init;
- (void)dealloc;
- (void)stopMonitor;
- (void)startMonitor;
- (id)cacheDeleteDict;
- (void)refreshPurgeableSpace;

@end
