/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, _UICollectionLayoutSectionGeometryTranslator, _UIOrderedRangeIndexer, _UIRTree;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutSolutionState : NSObject

{
    _UICollectionLayoutSectionGeometryTranslator *_sectionGeometryTranslator;
    NSArray *_bookmarks;
    _UIRTree *_geometricIndexer;
    _UIOrderedRangeIndexer *_itemRangeIndexer;
    NSDictionary *_auxillaryRangeIndexerKindDict;
}

@property (nonatomic, readonly) NSArray *bookmarks;
@property (nonatomic, readonly) _UIRTree *geometricIndexer;
@property (nonatomic, readonly) _UIOrderedRangeIndexer *itemRangeIndexer;
@property (nonatomic, readonly) NSDictionary *auxillaryRangeIndexerKindDict;
@property (nonatomic, readonly) _UICollectionLayoutSectionGeometryTranslator *sectionGeometryTranslator;

- (id)description;
- (id)initWithGeometryTranslator:(id)arg1 bookmarks:(id)arg2 geometricIndexer:(id)arg3 itemRangeIndexer:(id)arg4 auxillaryRangeIndexerDict:(id)arg5;
- (id)copyWithGeometryConverter:(id)arg1;

@end
