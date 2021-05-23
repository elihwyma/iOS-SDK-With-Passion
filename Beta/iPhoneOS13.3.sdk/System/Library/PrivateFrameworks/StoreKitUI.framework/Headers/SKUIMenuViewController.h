/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UITableViewController.h>

@class NSArray;

@protocol SKUIMenuViewControllerDelegate;

@interface SKUIMenuViewController : UITableViewController

{
    id <SKUIMenuViewControllerDelegate> _delegate;
    long long _indexOfCheckedTitle;
    NSArray *_menuTitles;
    NSArray *_menuImages;
    long long _menuStyle;
}

@property (nonatomic, readonly) NSArray *menuTitles;
@property (nonatomic, readonly) NSArray *menuImages;
@property (weak, nonatomic) id <SKUIMenuViewControllerDelegate> delegate;
@property (nonatomic) long long indexOfCheckedTitle;
@property (nonatomic) long long menuStyle;

- (void)loadView;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)preferredUserInterfaceStyle;
- (id)initWithMenuTitles:(id)arg1;
- (id)initWithMenuTitles:(id)arg1 images:(id)arg2;

@end
