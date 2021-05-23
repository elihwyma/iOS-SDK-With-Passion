/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCPDatabaseReader : NSObject

{
    NSObject<OS_dispatch_queue> *_sqlSerialQueue;
    NSString *_filepath;
    struct sqlite3 *_database;
}

+ (_Bool)shouldQueryInternalFields;
+ (id)databaseForPhotoLibrary:(id)arg1;

- (void)dealloc;
- (void)closeDatabase;
- (int)openDatabase;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)queryAnalysesForAssets:(id)arg1 withTypes:(id)arg2;
- (int)parseHeader:(struct sqlite3_stmt *)arg1 startColumn:(int)arg2 analysis:(id)arg3;
- (int)parseResults:(struct sqlite3_stmt *)arg1 typeColumn:(int)arg2 dataColumn:(int)arg3 results:(id)arg4;
- (int)executeDatabaseBlock:(CDUnknownBlockType)arg1;
- (int)queryHeaderForAsset:(id)arg1 analysis:(id *)arg2 assetId:(long long *)arg3;
- (int)queryResultsForAssetId:(long long)arg1 analysis:(id)arg2;
- (int)queryResultsForAssetId:(long long)arg1 withTypes:(id)arg2 analysis:(id)arg3;
- (int)queryHeadersForAssets:(id)arg1 analyses:(id)arg2 idMap:(id)arg3;
- (int)queryResultsForAssets:(id)arg1 withTypes:(id)arg2 batchResults:(id)arg3;
- (id)blacklistedLocalIdentifiersFromAssets:(id)arg1;
- (id)queryBlacklistedLocalIdentifiers;
- (id)queryAnalysisPropertiesForAsset:(id)arg1;
- (id)queryFailedProcessingStatusFromAssets:(id)arg1 forTaskID:(unsigned long long)arg2;
- (id)queryAnalysisPropertiesForAssets:(id)arg1;
- (_Bool)isAssetBlacklisted:(id)arg1 blacklistDate:(id *)arg2;
- (id)queryAnalysisForAsset:(id)arg1;
- (id)queryAssetsAnalyzedSince:(id)arg1;
- (id)queryAnalysisForAsset:(id)arg1 withTypes:(id)arg2;

@end
