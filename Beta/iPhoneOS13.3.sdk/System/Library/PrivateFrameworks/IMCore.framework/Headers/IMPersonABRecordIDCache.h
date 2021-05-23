/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface IMPersonABRecordIDCache : NSObject

{
    NSMutableDictionary *_cache;
    NSObject<OS_dispatch_queue> *_cacheDiskQueue;
    double _coalescingPeriod;
}

@property (nonatomic) double coalescingPeriod;

+ (id)sharedInstance;

- (id)description;
- (unsigned long long)versionNumber;
- (id)filePath;
- (void)_persistCache;
- (id)cachedRecordResultForQuery:(id)arg1 sequenceNumber:(long long)arg2;
- (void)setCachedRecordResult:(int)arg1 identifier:(int)arg2 forQuery:(id)arg3 sequenceNumber:(long long)arg4;
- (void)clearExistingPreferencesCache;
- (id)abUniqueID;
- (id)_abCache;
- (void)_persistCache:(_Bool)arg1;
- (long long)cacheSequenceNumber;
- (void)setCacheSequenceNumber:(long long)arg1;
- (void)_forceCachePersist;
- (void)setParentPath:(id)arg1;
- (void)clearInMemoryCache;

@end
