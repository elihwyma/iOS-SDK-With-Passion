/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <UIKit/UITableViewController.h>

@class NSMutableSet, NSString, WFContentCollection;

@protocol WFChooseImageViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface WFChooseImageViewController : UITableViewController

{
    long long _itemsPerRow;
    NSMutableSet *_selectedItems;
    struct CGRect _lastFrame;
    id <WFChooseImageViewControllerDelegate> _delegate;
    unsigned long long _minimumNumberOfItems;
    unsigned long long _maximumNumberOfItems;
    WFContentCollection *_collection;
}

@property (nonatomic, readonly) WFContentCollection *collection;
@property (nonatomic) long long itemsPerRow;
@property (weak, nonatomic) id <WFChooseImageViewControllerDelegate> delegate;
@property (nonatomic) unsigned long long minimumNumberOfItems;
@property (nonatomic) unsigned long long maximumNumberOfItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)cancel;
- (void)done;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)cell:(id)arg1 didSelectImageViewAtIndex:(unsigned long long)arg2;
- (id)initWithCollection:(id)arg1 selectedIndexes:(id)arg2;

@end
