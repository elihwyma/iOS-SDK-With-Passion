/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UICollectionViewCell.h>

@class NSString, UIViewController;

@interface HUViewControllerCollectionViewCell : UICollectionViewCell

{
    _Bool _allowSelfSizing;
    UIViewController *_viewController;
    UIViewController *_parentViewController;
}

@property (weak, nonatomic) UIViewController *parentViewController;
@property (nonatomic) _Bool allowSelfSizing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) UIViewController *viewController;

- (void)prepareForReuse;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)removeFromParentViewController;
- (void)addToParentViewController:(id)arg1;
- (void)_removeFromParentViewControllerAndClearProperty:(_Bool)arg1;

@end
