/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class PXTilingCoordinateSpace, PXTilingScrollInfo;

@protocol PXTilingLayoutObserver;

@interface PXTilingLayout : NSObject

{
    PXTilingScrollInfo *_scrollInfo;
    void *_coordinateSpaceIdentifier;
    id <PXTilingLayoutObserver> _observer;
    PXTilingCoordinateSpace *_coordinateSpace;
    struct CGSize _referenceSize;
    struct CGSize _visibleSize;
    struct CGPoint _visibleOrigin;
    struct UIEdgeInsets _contentInset;
}

@property (weak, nonatomic) id <PXTilingLayoutObserver> observer;
@property (nonatomic, readonly) PXTilingCoordinateSpace *coordinateSpace;
@property (nonatomic, readonly) _Bool shouldFlipHorizontally;
@property (nonatomic) struct CGSize referenceSize;
@property (nonatomic) struct CGSize visibleSize;
@property (nonatomic) struct UIEdgeInsets contentInset;
@property (nonatomic) struct CGPoint visibleOrigin;
@property (nonatomic, readonly) struct CGRect visibleRect;
@property (nonatomic, readonly) struct CGRect contentBounds;
@property (nonatomic, readonly) struct CGRect scrollBounds;
@property (copy, nonatomic, readonly) PXTilingScrollInfo *scrollInfo;
@property (nonatomic, readonly) void *coordinateSpaceIdentifier;
@property (nonatomic, readonly) _Bool allowHorizontalFlip;

- (id)init;
- (void)invalidateLayout;
- (void)invalidateLayoutWithContext:(id)arg1;
- (void)prepareLayout;
- (void)enumerateTilesInRect:(struct CGRect)arg1 withOptions:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)getGeometry:(struct PXTileGeometry *)arg1 group:(unsigned long long *)arg2 userData:(id *)arg3 forTileWithIdentifier:(struct PXTileIdentifier)arg4;

@end
