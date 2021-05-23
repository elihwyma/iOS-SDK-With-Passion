/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <UIKit/UIViewController.h>

@class MTMaterialView, NSArray, NSString, UIContextMenuInteraction;

@interface SBHIconViewContextMenuWrapperViewController : UIViewController

{
    MTMaterialView *_backgroundView;
    NSArray *_layoutConstraints;
    UIViewController *_contentViewController;
    NSString *_groupNameBase;
    double _backgroundScale;
    UIContextMenuInteraction *_contextMenuInteraction;
}

@property (retain, nonatomic) UIViewController *contentViewController;
@property (copy, nonatomic) NSString *groupNameBase;
@property (nonatomic) double backgroundScale;
@property (retain, nonatomic) UIContextMenuInteraction *contextMenuInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)_applyPreferredContentSizeChange:(struct CGSize)arg1;
- (void)remoteViewControllerDidConnectForWidgetViewController:(id)arg1;
- (void)remoteViewControllerViewDidAppearForWidgetViewController:(id)arg1;
- (void)recentsDocumentExtensionViewControllerRequestsDismiss:(id)arg1;

@end
