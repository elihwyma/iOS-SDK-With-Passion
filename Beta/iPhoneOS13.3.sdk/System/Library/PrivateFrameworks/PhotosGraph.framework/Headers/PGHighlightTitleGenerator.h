/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class PGTitleTuple, PHAsset, PHAssetCollection;

@protocol PGEventEnrichment;

@interface PGHighlightTitleGenerator : NSObject

{
    _Bool _createVerboseTitle;
    id <PGEventEnrichment> _collection;
    PHAssetCollection *_curatedAssetCollection;
    PHAsset *_keyAsset;
    PGTitleTuple *_titleTuple;
}

@property (retain, nonatomic) id <PGEventEnrichment> collection;
@property (retain, nonatomic) PHAssetCollection *curatedAssetCollection;
@property (retain, nonatomic) PHAsset *keyAsset;
@property (nonatomic) _Bool createVerboseTitle;
@property (retain, nonatomic) PGTitleTuple *titleTuple;

+ (_Bool)collectionContainsAppleEvent:(id)arg1;
+ (id)commonMeaningLabelForTitleUsingMomentNodes:(id)arg1;
+ (id)meaningLabelsSortedByPriority;

- (id)initWithCollection:(id)arg1 curatedAssetCollection:(id)arg2 keyAsset:(id)arg3 createVerboseTitle:(_Bool)arg4;
- (void)_generateTitleTuples;

@end
