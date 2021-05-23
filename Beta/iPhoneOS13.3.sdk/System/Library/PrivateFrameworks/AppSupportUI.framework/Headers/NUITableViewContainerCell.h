/*
 Image: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
 */

#import <UIKit/UITableViewCell.h>

@class NUIContainerView;

@interface NUITableViewContainerCell : UITableViewCell

{
    NUIContainerView *_containerView;
}

@property (nonatomic, readonly) NUIContainerView *containerView;

+ (Class)containerViewClass;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
