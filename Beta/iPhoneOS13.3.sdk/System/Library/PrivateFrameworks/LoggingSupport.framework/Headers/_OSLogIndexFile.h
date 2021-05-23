/*
 Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

#import <Foundation/NSObject.h>

@class NSString, _OSLogChunkFileReference, _OSLogChunkStore;

__attribute__((visibility("hidden")))
@interface _OSLogIndexFile : NSObject

{
    _OSLogChunkFileReference *_cfr;
    _OSLogChunkStore *_cs;
    unsigned char _bootu[16];
    _Bool _timespanDetermined;
    unsigned long long _cot_header;
    unsigned long long _cot;
    unsigned long long _cet;
    unsigned long long _et;
    unsigned long long _ot;
    char *_path;
}

@property (nonatomic, readonly) const char *bootUUID;
@property (nonatomic, readonly) unsigned long long oldestTime;
@property (nonatomic, readonly) unsigned long long endTime;
@property (nonatomic, readonly) char *path;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithTraceFile:(id)arg1 error:(id *)arg2;
- (id)initWithChunkStore:(id)arg1 error:(id *)arg2;
- (_Bool)_loadHeaderMetadata:(id)arg1;
- (_Bool)_loadCatalogMetadataForTimespan;
- (_Bool)_determineTimespan;
- (id)copyMappedChunkStore:(id *)arg1;

@end
