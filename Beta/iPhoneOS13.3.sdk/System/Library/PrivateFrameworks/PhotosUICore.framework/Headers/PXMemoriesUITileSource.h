/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSIndexSet, NSMutableSet, NSString, PXFeedDateFormatter, PXPhotoKitUIMediaProvider, PXReusableObjectPool, PXUIScrollViewController;

@protocol PXMemoriesUITileSourceDelegate;

@interface PXMemoriesUITileSource : NSObject

{
    NSMutableSet *_checkedOutTiles;
    struct {
        _Bool memoryToPreheatForIndexPath;
    } _delegateRespondsTo;
    _Bool _canRenderTextAsynchronously;
    PXReusableObjectPool *_viewTilePool;
    PXUIScrollViewController *_scrollViewController;
    NSIndexSet *_providingTilesForKinds;
    id <PXMemoriesUITileSourceDelegate> _delegate;
    PXPhotoKitUIMediaProvider *__mediaProvider;
    PXFeedDateFormatter *__dateFormatter;
    unsigned long long __memoriesStyle;
}

@property (nonatomic, readonly) PXPhotoKitUIMediaProvider *_mediaProvider;
@property (nonatomic, readonly) PXFeedDateFormatter *_dateFormatter;
@property (nonatomic, readonly) unsigned long long _memoriesStyle;
@property (nonatomic, readonly) PXReusableObjectPool *viewTilePool;
@property (nonatomic, readonly) PXUIScrollViewController *scrollViewController;
@property (nonatomic) _Bool canRenderTextAsynchronously;
@property (nonatomic, readonly) NSIndexSet *providingTilesForKinds;
@property (weak, nonatomic) id <PXMemoriesUITileSourceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)startPreheatingTilesForIdentifiers:(const struct PXTileIdentifier *)arg1 withGeometries:(const struct PXTileGeometry *)arg2 count:(unsigned long long)arg3 context:(void *)arg4;
- (void)stopPreheatingTilesForIdentifiers:(const struct PXTileIdentifier *)arg1 withGeometries:(const struct PXTileGeometry *)arg2 count:(unsigned long long)arg3 context:(void *)arg4;
- (void)reusableObjectPool:(id)arg1 didCreateReusableObject:(id)arg2;
- (void)reusableObjectPool:(id)arg1 didEvictReusableObject:(id)arg2;
- (void *)checkOutTileForIdentifier:(struct PXTileIdentifier)arg1 layout:(id)arg2;
- (void)checkInTile:(void *)arg1 withIdentifier:(struct PXTileIdentifier)arg2;
- (id)_assetsBySizeWithTileIdentifiers:(const struct PXTileIdentifier *)arg1 withGeometries:(const struct PXTileGeometry *)arg2 count:(unsigned long long)arg3;
- (void *)_tileForIdentifier:(struct PXTileIdentifier)arg1 layout:(id)arg2;
- (id)initWithScrollViewController:(id)arg1 memoriesStyle:(unsigned long long)arg2;
- (_Bool)providesTileForIdentifier:(struct PXTileIdentifier)arg1;
- (void)_getImageRequester:(id *)arg1 title:(id *)arg2 subtitle:(id *)arg3 forIndexPath:(struct PXSimpleIndexPath)arg4 dataSource:(id)arg5;
- (void)_updateDateLabelTile:(id)arg1;
- (void)_dateFormatterChanged:(id)arg1;

@end
