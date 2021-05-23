/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UICollectionViewFlowLayout.h>

__attribute__((visibility("hidden")))
@interface UITableViewIndexOverlaySelectionViewCollectionViewFlowLayout : UICollectionViewFlowLayout

{
    struct CGRect _frameForDoneButton;
    double _rightMarginForDoneButton;
}

@property (nonatomic) struct CGRect frameForDoneButton;
@property (nonatomic) double rightMarginForDoneButton;

+ (Class)layoutAttributesClass;

- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;

@end
