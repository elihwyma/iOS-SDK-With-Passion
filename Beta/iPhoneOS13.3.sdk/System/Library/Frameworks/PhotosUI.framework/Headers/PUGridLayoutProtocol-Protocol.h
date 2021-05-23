/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/Swift-Protocol.h>

@class NSIndexPath, NSSet, NSString;

@protocol PUGridLayoutProtocol <Swift>

@property (nonatomic, readonly) NSIndexPath *globalFooterIndexPath;
@property (nonatomic) double globalHeaderHeight;
@property (nonatomic) double globalFooterHeight;
@property (nonatomic) double globalTopPadding;
@property (nonatomic) double globalBottomPadding;
@property (copy, nonatomic) NSSet *hiddenItemIndexPaths;
@property (copy, nonatomic) NSString *sectionHeaderElementKind;
@property (nonatomic) _Bool sectionHeadersEnabled;
@property (nonatomic) double sectionTopPadding;
@property (nonatomic) _Bool usesAspectItems;
@property (nonatomic, readonly) struct CGSize itemSize;

- (unsigned short)assetIndexPathsForElementsInRect: /* Error: Ran out of types for this method. */;
- (unsigned short)invalidateLayoutForVerticalScroll;
- (unsigned short)prepareForViewTransitionToSize: /* Error: Ran out of types for this method. */;
- (unsigned short)finalizeViewTransitionToSize;
- (unsigned short)targetContentOffsetForViewSizeTransitionContext: /* Error: Ran out of types for this method. */;

@end
