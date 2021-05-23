/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@class PXGLayout;

@protocol PXGAccessibilityRendererDelegate <Swift>

@property (nonatomic, readonly) PXGLayout *accessibilityRootLayout;
@property (nonatomic, readonly) _Bool canSelectAccessibilityGroupElements;
@property (nonatomic, readonly) _Bool canSelectAccessibilityGroupElementsChildren;

- (unsigned short)accessibilityViewForSpriteIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)selectAssets: /* Error: Ran out of types for this method. */;
- (unsigned short)itemWasDoubleClickedWithHitTestResult: /* Error: Ran out of types for this method. */;
- (unsigned short)itemWasRightClickedWithHitTestResult:location: /* Error: Ran out of types for this method. */;
- (unsigned short)itemDidShowAlternateUIAtLocation: /* Error: Ran out of types for this method. */;
- (unsigned short)itemDidShowDefaultUIAtLocation: /* Error: Ran out of types for this method. */;
- (unsigned short)accessibilityHitTestResultAtPoint: /* Error: Ran out of types for this method. */;
- (unsigned short)assetClosestToAsset:inDirection: /* Error: Ran out of types for this method. */;
- (unsigned short)axScrollToAsset: /* Error: Ran out of types for this method. */;
- (unsigned short)notifySelectedCellsChanged;

@end
