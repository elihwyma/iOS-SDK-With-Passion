/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class ML3MusicLibrary;

__attribute__((visibility("hidden")))
@interface MLITDBGeniusDatabase : NSObject

@property (nonatomic, readonly) ML3MusicLibrary *musicLibrary;

+ (id)sharedGeniusDatabase;

- (id)init;
- (_Bool)hasGeniusDataAvailable;
- (_Bool)hasGeniusFeatureEnabled;
- (void)performGeniusDatabaseReadWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)_copyBlobData:(id *)arg1 blobAllocType:(int)arg2 table:(id)arg3 blobColumn:(id)arg4 where:(id)arg5;
- (_Bool)_hasAnySongs;
- (_Bool)_hasRowsInTable:(id)arg1;
- (unsigned int)_getInt32ValueInTable:(id)arg1 column:(id)arg2;
- (id)_copyBlobDataAndBytesInTable:(id)arg1 blobColumn:(id)arg2 where:(id)arg3;
- (_Bool)_readBlobIntoData:(id)arg1 table:(id)arg2 blobColumn:(id)arg3 where:(id)arg4;
- (_Bool)_readBlobForRowID:(unsigned long long)arg1 intoData:(id)arg2 table:(const char *)arg3 blobColumn:(const char *)arg4;
- (unsigned long long)_getInt64ValueInTable:(id)arg1 column:(id)arg2 where:(id)arg3 limit:(unsigned int)arg4;
- (unsigned long long)defaultMinTrackCount;
- (unsigned long long)defaultTrackCount;
- (id)copyGeniusConfigrationDataAndBytes;
- (unsigned int)geniusConfigurationVersion;
- (id)copyGeniusMetadataDataAndBytesForGlobalID:(unsigned long long)arg1;
- (id)copyGeniusSimilaritiesDataAndBytesForGlobalID:(unsigned long long)arg1;
- (_Bool)getGeniusConfigrationDataAndBytesIntoData:(id)arg1;
- (_Bool)getGeniusMetadataDataAndBytesForGlobalID:(unsigned long long)arg1 intoData:(id)arg2;
- (_Bool)getGeniusSimilaritiesDataAndBytesForGlobalID:(unsigned long long)arg1 intoData:(id)arg2;

@end
