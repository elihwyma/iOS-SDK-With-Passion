/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class CKDClientContext, NSString, PQLConnection;

__attribute__((visibility("hidden")))
@interface CKDKeyValueDiskCache : NSObject

{
    double _expirationTimeout;
    PQLConnection *_db;
    NSString *_identifier;
    CKDClientContext *_context;
}

@property (retain, nonatomic) PQLConnection *db;
@property (retain, nonatomic) NSString *identifier;
@property (weak, nonatomic) CKDClientContext *context;
@property (nonatomic) double expirationTimeout;

- (void)dealloc;
- (void)setCachedValue:(id)arg1 forKey:(id)arg2;
- (id)cachedValueForKey:(id)arg1;
- (id)initWithIdentifier:(id)arg1 context:(id)arg2;
- (id)dbPath;
- (_Bool)setupCacheWithError:(id *)arg1;
- (void)_garbageCollectExpiredEntries;
- (void)removeCachedValueForKey:(id)arg1;
- (void)deleteCachedValuesBecauseOfLowDisk;

@end
