/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NFUnfairLock, NSMutableDictionary, NSString;

@interface FCPersistentAssetKeyCache : NSObject <Swift>

{
    _Bool _flushingEnabled;
    _Bool _needsSave;
    NSString *_cachePath;
    NSMutableDictionary *_cacheEntries;
    NFUnfairLock *_cacheEntriesLock;
}

@property (copy, nonatomic, readonly) NSString *cachePath;
@property (nonatomic, readonly) NSMutableDictionary *cacheEntries;
@property (nonatomic, readonly) NFUnfairLock *cacheEntriesLock;
@property _Bool flushingEnabled;
@property _Bool needsSave;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_persistenceCoder;

- (void)_loadFromDisk;
- (void)_prepareForUse;
- (void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1;
- (void)activityObservingApplicationDidEnterBackground;
- (id)wrappingKeyForWrappingKeyID:(id)arg1;
- (void)removeAllWrappingKeys;
- (void)setWrappingKey:(id)arg1 forWrappingKeyID:(id)arg2;
- (void)_saveToDisk;
- (void)saveIfNeeded;
- (id)initWithCacheDirectory:(id)arg1 cacheName:(id)arg2;

@end
