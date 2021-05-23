/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSIndexSet;

@interface PXCuratedLibraryLayoutSnapshotGeometryDescriptor : NSObject

{
    NSDictionary *_sectionGeometryDescriptorsByIndexPath;
    double _intersectionSpacing;
    unsigned long long _dataSourceIdentifier;
    unsigned long long _skimmingDataSourceIdentifier;
    long long _zoomLevel;
    struct CGPoint _offset;
    struct CGRect _visibleRect;
}

@property (nonatomic, readonly) unsigned long long dataSourceIdentifier;
@property (nonatomic, readonly) unsigned long long skimmingDataSourceIdentifier;
@property (nonatomic, readonly) long long zoomLevel;
@property (nonatomic, readonly) struct CGRect visibleRect;
@property (nonatomic) struct CGPoint offset;
@property (nonatomic, readonly) NSIndexSet *sections;

- (id)init;
- (id)description;
- (id)initWithLayout:(id)arg1;
- (id)geometryDescriptorForSectionAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (void)extrapolateSectionsBetween:(long long)arg1 and:(long long)arg2 withAnchorSection:(long long)arg3;
- (void)compactifySectionsBeyondVisibleRectWithAnchorSection:(long long)arg1;

@end
