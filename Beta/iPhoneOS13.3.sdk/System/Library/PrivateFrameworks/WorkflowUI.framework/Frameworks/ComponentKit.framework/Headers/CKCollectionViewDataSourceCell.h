/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <UIKit/UICollectionViewCell.h>

@class CKComponentRootView;

@interface CKCollectionViewDataSourceCell : UICollectionViewCell

{
    CKComponentRootView *_rootView;
}

@property (nonatomic, readonly) CKComponentRootView *rootView;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)setAlpha:(double)arg1;
- (void)layoutSubviews;

@end
