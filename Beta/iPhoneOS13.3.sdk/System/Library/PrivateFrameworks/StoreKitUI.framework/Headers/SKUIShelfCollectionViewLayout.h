/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UICollectionViewLayout.h>

@class NSString, SKUIShelfLayoutData;

__attribute__((visibility("hidden")))
@interface SKUIShelfCollectionViewLayout : UICollectionViewLayout

{
    SKUIShelfLayoutData *_layoutData;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) SKUIShelfLayoutData *layoutData;

+ (Class)layoutAttributesClass;
+ (double)snapToBoundariesDecelerationRate;
+ (_Bool)collectionViewCanClipToBounds;

- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (_Bool)_shouldScrollToContentBeginningInRightToLeft;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;

@end
