/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSSet, PHAsset, VCPDatabaseReader;

__attribute__((visibility("hidden")))
@interface VCPDatabaseBatchIterator : NSObject

{
    VCPDatabaseReader *_reader;
    NSArray *_assets;
    NSSet *_resultsTypes;
    int _batchSize;
    int _idxLast;
    int _idxCurrent;
    NSDictionary *_batchAnalyses;
    PHAsset *_asset;
    NSDictionary *_analysis;
}

@property (nonatomic, readonly) PHAsset *asset;
@property (nonatomic, readonly) NSDictionary *analysis;

+ (id)iteratorForAssets:(id)arg1 withDatabaseReader:(id)arg2 resultTypes:(id)arg3 batchSize:(int)arg4;

- (_Bool)next;
- (void)nextBatch;
- (id)initWithDatabaseReader:(id)arg1 forAssets:(id)arg2 resultsTypes:(id)arg3 batchSize:(int)arg4;

@end
