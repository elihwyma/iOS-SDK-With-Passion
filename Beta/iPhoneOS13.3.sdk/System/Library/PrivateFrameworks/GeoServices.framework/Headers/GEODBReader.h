/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSDictionary, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEODBReader : NSObject

{
    _Bool _defunct;
    _Bool _closed;
    int _editionUpdating;
    NSObject<OS_dispatch_queue> *_readQueue;
    NSString *_path;
    NSDictionary *_pragmaOverrides;
    struct sqlite3 *_db;
    struct sqlite3_stmt *_tileQuery;
    struct sqlite3_stmt *_versionQuery;
    CDStruct_e4886f83 *_expirationRecords;
    unsigned long long _expirationRecordCount;
}

@property _Bool closed;

- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (void)_closeDB;
- (void)setExpirationRecords:(CDStruct_e4886f83 *)arg1 count:(unsigned long long)arg2;
- (id)initWithPath:(id)arg1 pragmaOverrides:(id)arg2;
- (void)_databaseReset:(id)arg1;
- (void)_editionUpdateBegin:(id)arg1;
- (void)_editionUpdateEnd:(id)arg1;
- (void)_openDB;
- (id)_dataForA:(unsigned int)arg1 andB:(unsigned int)arg2 andC:(unsigned int)arg3 andD:(unsigned int)arg4 isCurrent:(_Bool *)arg5 eTag:(id *)arg6;
- (id)_dataForKey:(struct _GEOTileKey)arg1 isCurrent:(_Bool *)arg2 eTag:(id *)arg3;
- (id)dataForKey:(struct _GEOTileKey *)arg1 isCurrent:(_Bool *)arg2 eTag:(id *)arg3;
- (void)dataForKeys:(struct GEOTileKeyList *)arg1 callbackQueue:(id)arg2 asyncHandler:(CDUnknownBlockType)arg3;

@end
