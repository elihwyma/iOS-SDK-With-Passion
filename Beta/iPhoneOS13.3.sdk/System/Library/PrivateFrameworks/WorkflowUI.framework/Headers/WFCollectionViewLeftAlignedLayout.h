/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSMutableDictionary;

@interface WFCollectionViewLeftAlignedLayout : UICollectionViewFlowLayout

{
    NSMutableDictionary *_frameCache;
    NSMutableDictionary *_sectionInsetCache;
}

@property (retain, nonatomic) NSMutableDictionary *frameCache;
@property (retain, nonatomic) NSMutableDictionary *sectionInsetCache;

- (id)init;
- (void)invalidateLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (double)minimumInteritemSpacingForSectionAtIndex:(long long)arg1;
- (struct UIEdgeInsets)sectionInsetForItemAtIndex:(long long)arg1;
- (id)leftAlignedAttributesForAttribute:(id)arg1 sectionInset:(struct UIEdgeInsets)arg2;

@end
