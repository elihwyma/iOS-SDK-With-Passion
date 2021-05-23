/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSString, SKUIClientContext, SKUIFlexibleSegmentedControl, SKUIMenuPopoverController, SKUIMenuViewController, SKUISegmentedControlViewElement, UIBarButtonItem, UIView, UIViewController;

__attribute__((visibility("hidden")))
@interface SKUISegmentedControlViewElementController : NSObject

{
    SKUIClientContext *_clientContext;
    long long _defaultMaximumNumberOfVisibleItems;
    double _desiredSegmentWidth;
    UIBarButtonItem *_menuSheetCancelButtonItem;
    SKUIMenuViewController *_menuSheetViewController;
    UIViewController *_parentViewController;
    SKUIMenuPopoverController *_popoverMenuViewController;
    SKUIFlexibleSegmentedControl *_segmentedControl;
    SKUISegmentedControlViewElement *_viewElement;
}

@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (nonatomic) long long defaultMaximumNumberOfVisibleItems;
@property (nonatomic) double desiredSegmentWidth;
@property (weak, nonatomic) UIViewController *parentViewController;
@property (nonatomic, readonly) UIView *segmentedControlView;
@property (nonatomic, readonly) SKUISegmentedControlViewElement *viewElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)_segmentedControl;
- (id)initWithViewElement:(id)arg1;
- (void)reloadAfterDocumentUpdate;
- (id)initWithViewElement:(id)arg1 segmentedControl:(id)arg2;
- (void)menuPopoverDidCancel:(id)arg1;
- (void)menuPopover:(id)arg1 didSelectMenuItemAtIndex:(long long)arg2;
- (void)menuPopover:(id)arg1 willRepositionToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;
- (void)_destroyPopoverController;
- (void)menuViewController:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)_connectToSegmentedControl:(id)arg1;
- (void)_reloadPropertiesForSegmentedControl:(id)arg1;
- (void)_showPopoverMoreListWithTitles:(id)arg1;
- (void)_showMoreListSheetWithTitles:(id)arg1 selectedIndex:(long long)arg2;
- (void)_destroyMenuSheetViewController;
- (void)_cancelMenuAction:(id)arg1;
- (void)segmentedControl:(id)arg1 didSelectSegmentIndex:(long long)arg2;
- (void)segmentedControl:(id)arg1 showMoreListWithTitles:(id)arg2;

@end
