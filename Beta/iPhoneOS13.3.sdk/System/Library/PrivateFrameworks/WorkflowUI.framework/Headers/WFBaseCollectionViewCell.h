/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UICollectionViewCell.h>

@interface WFBaseCollectionViewCell : UICollectionViewCell

{
    _Bool _enabled;
}

@property (nonatomic, getter=isEnabled) _Bool enabled;

- (void)setEnabled:(_Bool)arg1 animated:(_Bool)arg2;

@end
