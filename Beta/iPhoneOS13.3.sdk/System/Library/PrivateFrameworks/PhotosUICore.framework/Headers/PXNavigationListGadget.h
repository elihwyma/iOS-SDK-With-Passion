/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXNavigationListController.h>

@class NSString, PXGadgetSpec;

@protocol PXGadgetDelegate;

@interface PXNavigationListGadget : PXNavigationListController

{
    _Bool _visibleContentRectIsStale;
    PXGadgetSpec *_gadgetSpec;
    id <PXGadgetDelegate> _delegate;
    struct CGRect _visibleContentRect;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long gadgetType;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec;
@property (weak, nonatomic) id <PXGadgetDelegate> delegate;
@property (nonatomic, readonly) _Bool hasContentToDisplay;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) unsigned long long accessoryButtonType;
@property (nonatomic, readonly) NSString *accessoryButtonTitle;
@property (nonatomic, readonly) unsigned long long headerStyle;
@property (nonatomic) long long priority;
@property (nonatomic, readonly) _Bool supportsHighlighting;
@property (nonatomic, readonly) _Bool supportsSelection;
@property (nonatomic, readonly) _Bool supportsAssetsDrop;
@property (nonatomic, readonly) Class collectionViewItemClass;
@property (nonatomic) struct CGRect visibleContentRect;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (struct NSObject *)contentViewController;
- (void)tableViewContentSizeDidChange;
- (_Bool)canNavigateToCollection:(id)arg1;
- (void)navigateToCollection:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_listItemForCollection:(id)arg1;
- (void)_updateTableViewLayoutMargins;
- (void)_updateTableViewForVisibleContentRect;

@end
