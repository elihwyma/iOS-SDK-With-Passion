//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXLayoutSnapshot.h>

@class NSArray, PXLayoutPageMap;

@interface PXSectionedLayoutSnapshot : PXLayoutSnapshot
{
    NSArray *_sections;
    PXLayoutPageMap *_pageMap;
}

+ (id)emptyLayoutSnapshot;
// - (void).cxx_destruct;
- (CGRect)frameForSectionAtIndex:(NSUInteger)arg1;
- (void)enumerateFramesForSectionsInRect:(CGRect)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
- (void)enumerateGeometriesForItemsInRect:(CGRect)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
- (struct _PXLayoutGeometry)geometryForItem:(id)arg1;
- (id)description;
- (id)initWithContentRect:(CGRect)arg1 forSections:(id)arg2;
- (id)initWithContentRect:(CGRect)arg1;
- (id)init;

@end

