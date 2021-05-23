/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, PUTilingDataSource, PUTilingScrollInfo, PUTilingView;

@protocol PUTilingCoordinateSystem;

@interface PUTilingLayout : NSObject

{
    NSMutableDictionary *_tileIdentifierByIndexPathByKind;
    PUTilingDataSource *_dataSource;
    id <PUTilingCoordinateSystem> _coordinateSystem;
    PUTilingView *_tilingView;
    id <PUTilingCoordinateSystem> _parentCoordinateSystem;
    struct CGPoint _coordinateSystemOrigin;
    struct CGRect _visibleRect;
}

@property (weak, nonatomic) PUTilingView *tilingView;
@property (weak, nonatomic) id <PUTilingCoordinateSystem> parentCoordinateSystem;
@property (nonatomic) struct CGPoint coordinateSystemOrigin;
@property (retain, nonatomic) PUTilingDataSource *dataSource;
@property (nonatomic) struct CGRect visibleRect;
@property (nonatomic, readonly) struct CGRect contentBounds;
@property (nonatomic, readonly) PUTilingScrollInfo *preferredScrollInfo;
@property (nonatomic, readonly) id <PUTilingCoordinateSystem> coordinateSystem;

- (id)init;
- (id)description;
- (void)invalidateLayoutWithContext:(id)arg1;
- (void)prepareLayout;
- (id)layoutInfosForTilesInRect:(struct CGRect)arg1;
- (id)layoutInfoForTileWithIndexPath:(id)arg1 kind:(id)arg2;
- (struct CGRect)visibleRectForScrollingToItemAtIndexPath:(id)arg1 scrollPosition:(long long)arg2;
- (void)invalidateLayoutForUpdateWithItems:(id)arg1;
- (id)tileIdentifierForTileWithIndexPath:(id)arg1 kind:(id)arg2;

@end
