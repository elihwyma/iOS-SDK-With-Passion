/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UICollectionViewCell.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface _TVAlertActionCell : UICollectionViewCell

{
    UIView *_buttonView;
}

@property (retain, nonatomic) UIView *buttonView;

- (void)prepareForReuse;
- (id)preferredFocusEnvironments;

@end
