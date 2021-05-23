/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewController.h>

@class SKUIDeveloperInfo, SKUIDeveloperInfoView, UIScrollView;

__attribute__((visibility("hidden")))
@interface SKUIDeveloperInfoViewController : SKUIViewController

{
    SKUIDeveloperInfo *_developerInfo;
    SKUIDeveloperInfoView *_infoView;
    UIScrollView *_scrollView;
}

@property (nonatomic, readonly) SKUIDeveloperInfo *developerInfo;

- (void)loadView;
- (id)initWithDeveloperInfo:(id)arg1;

@end
