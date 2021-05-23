/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGTitleGenerator.h>

@class PHAsset, PHAssetCollection;

@protocol PGEventEnrichment;

@interface PGDefaultCollectionTitleGenerator : PGTitleGenerator

{
    _Bool _debug;
    _Bool _forDiagnostics;
    id <PGEventEnrichment> _collection;
    PHAsset *_keyAsset;
    PHAssetCollection *_curatedAssetCollection;
}

@property (nonatomic, readonly) PHAsset *keyAsset;
@property (nonatomic, readonly) PHAssetCollection *curatedAssetCollection;
@property (nonatomic, readonly) id <PGEventEnrichment> collection;
@property (nonatomic, getter=isDebug) _Bool debug;
@property (nonatomic) _Bool forDiagnostics;

- (id)initWithCollection:(id)arg1 keyAsset:(id)arg2 curatedAssetCollection:(id)arg3;
- (void)_generateTitleAndSubtitleWithManager:(id)arg1 result:(CDUnknownBlockType)arg2;

@end
