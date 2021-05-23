/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@class NSArray;

@protocol PXTilingControllerCompositionInput <Swift>

@property (nonatomic, readonly) struct CGSize referenceSize;
@property (nonatomic, readonly) struct UIEdgeInsets contentInset;
@property (nonatomic, readonly) NSArray *tilingControllersRequestingFocus;
@property (nonatomic, readonly) NSArray *invalidationContexts;

- (unsigned short)contentBoundsForTilingController: /* Error: Ran out of types for this method. */;
- (unsigned short)scrollBoundsForTilingController: /* Error: Ran out of types for this method. */;
- (unsigned short)scrollInfoForTilingController: /* Error: Ran out of types for this method. */;
- (unsigned short)preferredOriginForTilingController: /* Error: Ran out of types for this method. */;
- (unsigned short)originForTilingController: /* Error: Ran out of types for this method. */;
- (unsigned short)convertRect:fromTilingController: /* Error: Ran out of types for this method. */;
- (unsigned short)convertScrollInfo:fromTilingController: /* Error: Ran out of types for this method. */;

@end
