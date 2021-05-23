/*
 Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerFlowLayout : UICollectionViewFlowLayout

{
    long long cellStyle;
    double _contentSizeAdjustment;
}

@property (nonatomic) double contentSizeAdjustment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) long long cellStyle;

- (struct CGSize)collectionViewContentSize;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (_Bool)canBeEdited;

@end
