/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@protocol PXCuratedLibraryAllPhotosBodyLayout <Swift>

@property (nonatomic) long long numberOfColumns;
@property (nonatomic) struct UIEdgeInsets padding;
@property (nonatomic) double interItemSpacing;
@property (nonatomic) double itemCaptionSpacing;
@property (nonatomic) _Bool enableBestCropRect;
@property (nonatomic) unsigned char mediaFlags;
@property (nonatomic, readonly) long long visualItemShift;
@property (nonatomic, readonly) double rowHeight;
@property (nonatomic) _Bool hideIncompleteLastRow;
@property (nonatomic) _Bool fillSafeAreaTopInset;
@property (nonatomic, readonly) struct _NSRange loadedItems;
@property (nonatomic, readonly) struct CGRect loadedItemsRect;
@property (nonatomic, readonly) _Bool supportsContentMode;
@property (nonatomic, readonly) _Bool itemCaptionsVisible;
@property (retain, nonatomic) id anchorObjectReference;
@property (nonatomic) struct CGPoint anchorViewportCenter;
@property (nonatomic) _Bool loadItemsOutsideAnchorViewport;
@property (nonatomic) long long contentMode;

- (unsigned short)frameForItem: /* Error: Ran out of types for this method. */;
- (unsigned short)itemClosestTo: /* Error: Ran out of types for this method. */;
- (unsigned short)itemRangeInRect: /* Error: Ran out of types for this method. */;
- (unsigned short)shiftItem:toColumn:hideIncompleteRows: /* Error: Ran out of types for this method. */;
- (unsigned short)columnForItem: /* Error: Ran out of types for this method. */;
- (unsigned short)frameForItem:usingInterItemSpacing: /* Error: Ran out of types for this method. */;

@end
