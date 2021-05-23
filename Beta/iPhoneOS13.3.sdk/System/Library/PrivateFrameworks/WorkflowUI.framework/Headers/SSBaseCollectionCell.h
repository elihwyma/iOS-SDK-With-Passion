/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UICollectionViewCell.h>

@interface SSBaseCollectionCell : UICollectionViewCell

{
    _Bool _didCompleteSetup;
}

@property (nonatomic) _Bool didCompleteSetup;

+ (id)identifier;
+ (id)cellForCollectionView:(id)arg1 indexPath:(id)arg2;

- (void)configureCell;

@end
