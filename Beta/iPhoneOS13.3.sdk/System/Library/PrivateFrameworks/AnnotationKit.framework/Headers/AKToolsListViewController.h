/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSString, UITableView;

@protocol AKToolsListViewControllerDelegate;

@interface AKToolsListViewController : UIViewController

{
    _Bool _supportsOpacityEditing;
    id <AKToolsListViewControllerDelegate> _delegate;
    UITableView *_tableView;
    NSArray *_cellItemTypes;
}

@property (retain, nonatomic) UITableView *tableView;
@property (copy, nonatomic) NSArray *cellItemTypes;
@property (weak, nonatomic) id <AKToolsListViewControllerDelegate> delegate;
@property (nonatomic) _Bool supportsOpacityEditing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultCellItemTypes;

- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_shapeButtonPressed:(id)arg1;
- (id)_buttonViewForShapes;
- (id)_buttonViewForText;
- (void)addRowView:(id)arg1 toCellView:(id)arg2;
- (id)_buttonViewForSignature;
- (id)_buttonViewForLoupe;
- (id)_buttonViewForOpacity;
- (long long)_shapesCellIndexRow;
- (id)_buttonViewWithImage:(id)arg1 title:(id)arg2;
- (void)_reloadCellItemTypes;

@end
