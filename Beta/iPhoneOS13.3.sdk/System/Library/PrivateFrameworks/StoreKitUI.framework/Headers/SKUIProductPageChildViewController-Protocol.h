/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/Swift-Protocol.h>

@class SKUIProductPageHeaderViewController, UIScrollView;

@protocol SKUIProductPageChildViewControllerDelegate;

@protocol SKUIProductPageChildViewController <Swift>

@property (nonatomic, readonly) UIScrollView *scrollView;
@property (retain, nonatomic) SKUIProductPageHeaderViewController *headerViewController;
@property (weak, nonatomic) id <SKUIProductPageChildViewControllerDelegate> delegate;

@end
