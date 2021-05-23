/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/Swift-Protocol.h>

@class NSArray, NSString;

@protocol SKUIStorePageCollectionViewLayout <Swift>

@property (copy, nonatomic) NSString *backdropGroupName;
@property (nonatomic, readonly) NSArray *indexPathsForPinningItems;
@property (copy, nonatomic) NSArray *indexPathsForGradientItems;
@property (nonatomic) _Bool rendersWithParallax;
@property (nonatomic) _Bool rendersWithPerspective;

- (unsigned short)layoutAttributesForUnpinnedItemAtIndexPath: /* Error: Ran out of types for this method. */;
- (unsigned short)pinnedLayoutAttributesForItemsInRect: /* Error: Ran out of types for this method. */;

@end
