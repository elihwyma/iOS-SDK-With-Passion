/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIViewController.h>

@class NSMutableArray, NSOperationQueue, NSString, SKUIClientContext, SKUILayoutCache, SKUIProductPage, SKUIProductPageHeaderViewController, SKUIProductPageTableHeaderOnlySection, SKUIProductPageTableTextBoxSection, SKUIProductPageTableViewController, SKUIResourceLoader, UIScrollView;

@protocol SKUIProductPageChildViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKUIProductPageDetailsViewController : UIViewController

{
    _Bool _askPermission;
    SKUIClientContext *_clientContext;
    SKUIProductPageTableHeaderOnlySection *_copyrightSection;
    id <SKUIProductPageChildViewControllerDelegate> _delegate;
    SKUIProductPageTableTextBoxSection *_descriptionSection;
    NSOperationQueue *_operationQueue;
    SKUIProductPage *_productPage;
    SKUIResourceLoader *_resourceLoader;
    SKUIProductPageTableHeaderOnlySection *_screenshotsSection;
    NSMutableArray *_sections;
    SKUIProductPageTableTextBoxSection *_storeNotesSection;
    SKUIProductPageTableViewController *_tableViewController;
    SKUILayoutCache *_textLayoutCache;
    SKUIProductPageTableTextBoxSection *_whatsNewSection;
}

@property (nonatomic, readonly) SKUIProductPage *productPage;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (nonatomic) _Bool askPermission;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (retain, nonatomic) SKUIProductPageHeaderViewController *headerViewController;
@property (weak, nonatomic) id <SKUIProductPageChildViewControllerDelegate> delegate;

+ (double)defaultPageWidthForUserInterfaceIdiom:(long long)arg1;

- (void)dealloc;
- (void)loadView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)_tableViewController;
- (id)_resourceLoader;
- (id)initWithProductPage:(id)arg1;
- (void)itemStateCenterRestrictionsChanged:(id)arg1;
- (id)_storeNotesSection;
- (id)_textLayoutRequestWithText:(id)arg1 widthOffset:(double)arg2;
- (id)_bundledAppsSection;
- (id)_parentBundlesSection;
- (id)_screenshotsSection;
- (id)_descriptionSection;
- (id)_whatsNewSection;
- (id)_featuresSection;
- (id)_infoSection;
- (void)_expandSection:(id)arg1;
- (void)_addTapRecognizerForView:(id)arg1 action:(SEL)arg2;
- (id)_copyrightSection;
- (void)_configureSwooshSection:(id)arg1;
- (void)screenshotsWillBeginDragging:(id)arg1;
- (id)tableViewForTableViewSection:(id)arg1;

@end
