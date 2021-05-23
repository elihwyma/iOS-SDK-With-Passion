/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UITableViewCell.h>

@class NSString, UIViewController;

@interface HUViewControllerTableViewCell : UITableViewCell

{
    _Bool _ignoreRounding;
    UIViewController *_viewController;
    UIViewController *_parentViewController;
}

@property (weak, nonatomic) UIViewController *parentViewController;
@property (nonatomic) _Bool ignoreRounding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) UIViewController *viewController;

- (void)prepareForReuse;
- (void)layoutSubviews;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)removeFromParentViewController;
- (void)addToParentViewController:(id)arg1;
- (void)_removeFromParentViewControllerAndClearProperty:(_Bool)arg1;

@end
