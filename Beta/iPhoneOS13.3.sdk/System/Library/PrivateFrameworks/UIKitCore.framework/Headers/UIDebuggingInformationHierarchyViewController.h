/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewController.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, UICollectionView, UIDebuggingInformationInspectorDetailViewController, UIRefreshControl, UIView;

__attribute__((visibility("hidden")))
@interface UIDebuggingInformationHierarchyViewController : UIViewController <Swift>

{
    NSArray *_showingOverlayItems;
    NSArray *_normalItems;
    NSMutableArray *_keys;
    NSMutableDictionary *_managedValues;
    NSMutableDictionary *_observersForKeys;
    NSMutableDictionary *_controlsForKeys;
    NSArray *_data;
    UIView *_rootViewForInspection;
    UIRefreshControl *_refreshControl;
    UIView *_highlightedView;
    UICollectionView *_collectionView;
    struct CGColor *_originalBorderColor;
    double _originalBorderWidth;
    UIDebuggingInformationInspectorDetailViewController *_detail;
}

@property (retain, nonatomic) NSMutableArray *keys;
@property (retain, nonatomic) NSMutableDictionary *managedValues;
@property (retain, nonatomic) NSMutableDictionary *observersForKeys;
@property (retain, nonatomic) NSMutableDictionary *controlsForKeys;
@property (retain, nonatomic) NSArray *data;
@property (retain, nonatomic) UIView *rootViewForInspection;
@property (retain, nonatomic) UIRefreshControl *refreshControl;
@property (retain, nonatomic) UIView *highlightedView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) struct CGColor *originalBorderColor;
@property (nonatomic) double originalBorderWidth;
@property (retain, nonatomic) UIDebuggingInformationInspectorDetailViewController *detail;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)highlightView:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)didReceiveNewView:(id)arg1;
- (_Bool)shouldHighlightSelectedCells;
- (void)expandBeneathCell:(id)arg1;
- (void)collapseBeneathCell:(id)arg1;
- (void)displayDetailsForCell:(id)arg1;
- (unsigned long long)indentationLevelForIndexPath:(id)arg1;
- (_Bool)shouldCollapseAtIndexPath:(id)arg1;
- (id)colorForIndentationLevel:(unsigned long long)arg1;
- (void)_showWindowChange;
- (void)chooseNewTarget:(id)arg1;
- (void)refresh:(id)arg1;
- (id)getViewsRecursiveWithLevel:(unsigned long long)arg1 forView:(id)arg2;

@end
