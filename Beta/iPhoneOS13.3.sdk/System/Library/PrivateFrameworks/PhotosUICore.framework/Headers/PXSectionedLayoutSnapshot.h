/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXLayoutSnapshot.h>

@class NSArray, PXLayoutPageMap;

@interface PXSectionedLayoutSnapshot : PXLayoutSnapshot

{
    NSArray *_sections;
    PXLayoutPageMap *_pageMap;
}

+ (id)emptyLayoutSnapshot;

- (id)init;
- (id)description;
- (id)initWithContentRect:(struct CGRect)arg1;
- (id)initWithContentRect:(struct CGRect)arg1 forSections:(id)arg2;
- (struct _PXLayoutGeometry)geometryForItem:(id)arg1;
- (void)enumerateGeometriesForItemsInRect:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateFramesForSectionsInRect:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (struct CGRect)frameForSectionAtIndex:(unsigned long long)arg1;

@end
