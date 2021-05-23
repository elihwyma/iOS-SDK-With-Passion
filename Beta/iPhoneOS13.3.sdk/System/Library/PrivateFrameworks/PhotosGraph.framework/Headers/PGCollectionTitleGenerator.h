/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSSet, PGTitleTuple, PHAsset, PHAssetCollection;

@protocol PGEventEnrichment;

@interface PGCollectionTitleGenerator : NSObject

{
    _Bool _forDiagnostics;
    id <PGEventEnrichment> _collection;
    PGTitleTuple *_titleTuple;
    PHAsset *_keyAsset;
    PHAssetCollection *_curatedAssetCollection;
    NSSet *_whitelistedMeaningLabels;
}

@property (retain, nonatomic) id <PGEventEnrichment> collection;
@property (retain, nonatomic) PHAsset *keyAsset;
@property (retain, nonatomic) PHAssetCollection *curatedAssetCollection;
@property (retain, nonatomic) NSSet *whitelistedMeaningLabels;
@property (retain, nonatomic) PGTitleTuple *titleTuple;
@property (nonatomic) _Bool forDiagnostics;

- (id)initWithCollection:(id)arg1;
- (void)_generateTitleTuples;
- (id)initWithCollection:(id)arg1 whitelistedMeaningLabels:(id)arg2;
- (id)initWithCollection:(id)arg1 keyAsset:(id)arg2 curatedAssetCollection:(id)arg3;
- (id)_meaningLabelForTitle;
- (id)_sortedMeaningLabels;

@end
