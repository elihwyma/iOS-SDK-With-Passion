/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewController.h>

@class UISearchController;

@interface UISearchContainerViewController : UIViewController

{
    UISearchController *_searchController;
}

@property (retain, nonatomic) UISearchController *searchController;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_prepareForContainerTransition:(id)arg1;
- (_Bool)_transitionsChildViewControllers;
- (void)_presentSearchControllerIfNecessary;
- (id)initWithSearchController:(id)arg1;

@end
