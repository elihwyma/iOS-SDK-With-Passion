/*
 Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

#import <UIKit/UICollectionView.h>

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerDocumentCollectionView : UICollectionView

{
    _Bool _avoidNegativeContentOffset;
    double _contentSizeAdjustment;
}

@property (nonatomic) double contentSizeAdjustment;

- (void)setBounds:(struct CGRect)arg1;
- (void)setContentSize:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setAdjustedContentSize:(struct CGSize)arg1 withFrameSize:(struct CGSize)arg2;
- (void)_performWhileAvoidingNegativeContentOffset:(CDUnknownBlockType)arg1;
- (struct CGPoint)_updatedContentOffsetForOffset:(struct CGPoint)arg1 avoidNegativeContentOffset:(_Bool)arg2;

@end
