/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, NSUserDefaults;

@protocol OS_dispatch_queue;

@interface TPSDataCacheController : NSObject

{
    NSObject<OS_dispatch_queue> *_dataCacheSerialQueue;
    long long _dataType;
    _Bool _backgroundOriginUpdate;
    _Bool _dataCacheDirty;
    float _defaultPriority;
    NSString *_languageCode;
    NSMutableArray *_dataCacheArray;
    unsigned long long _cacheSize;
    unsigned long long _maxDataCacheSize;
    NSString *_identifier;
    NSUserDefaults *_userDefaults;
    NSMutableDictionary *_dataCacheMap;
    NSString *_cacheDirectory;
    NSMutableArray *_originFetchItems;
}

@property (nonatomic) unsigned long long cacheSize;
@property (nonatomic) unsigned long long maxDataCacheSize;
@property (nonatomic) _Bool dataCacheDirty;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSUserDefaults *userDefaults;
@property (retain, nonatomic) NSMutableDictionary *dataCacheMap;
@property (retain, nonatomic) NSString *cacheDirectory;
@property (retain, nonatomic) NSMutableArray *originFetchItems;
@property (nonatomic) float defaultPriority;
@property (nonatomic) _Bool backgroundOriginUpdate;
@property (retain, nonatomic) NSString *languageCode;
@property (retain, nonatomic) NSMutableArray *dataCacheArray;

+ (id)sharedInstance;
+ (void)setAppGroupIdentifier:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)commonInit;
- (void)updateCache;
- (id)dataCacheForIdentifier:(id)arg1;
- (id)formattedDataWithFileURL:(id)arg1;
- (id)saveFileURL:(id)arg1 identifier:(id)arg2 fileSize:(unsigned long long)arg3 lastModified:(id)arg4 dataCache:(id)arg5;
- (id)cacheFileURLForDataCache:(id)arg1;
- (id)formattedDataWithData:(id)arg1;
- (id)initWithIdentifier:(id)arg1 directoryName:(id)arg2 maxCacheSize:(unsigned long long)arg3 URLSessionDataType:(long long)arg4;
- (_Bool)isURLValid:(id)arg1;
- (id)newDataCache;
- (void)formattedDataWithFileURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)formattedDataForRequest:(id)arg1 identifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)formattedDataForPath:(id)arg1 identifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)cancelAllOriginSessionItems;
- (void)updateCacheDelay;
- (void)reloadDataCache;
- (id)cacheFileURLForIdentifier:(id)arg1;
- (void)removeAllDataCache;
- (void)createCacheDirectory;
- (void)removeDataCache:(id)arg1 updateCache:(_Bool)arg2;
- (void)removeDataCache:(id)arg1;
- (void)addDataCache:(id)arg1;
- (void)syncCacheImmediately;
- (id)dataCacheForPath:(id)arg1;
- (_Bool)cacheValidForIdentifier:(id)arg1 path:(id)arg2;
- (void)removeCacheForIdentifier:(id)arg1;

@end
