/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

@class NSString, PXCMMPosterHeaderView, PXGadgetSpec, PXRoundedCornerOverlayView, PXUpdater;

@protocol PXCMMSuggestion, PXGadgetDelegate, PXMessagesCMMSuggestionGadgetActionDelegate;

@interface PXMessagesCMMSuggestionGadget : UIViewController

{
    PXUpdater *_updater;
    PXCMMPosterHeaderView *_posterHeaderView;
    PXRoundedCornerOverlayView *_roundedOverlayView;
    long long _priority;
    id <PXGadgetDelegate> _delegate;
    unsigned long long _accessoryButtonType;
    PXGadgetSpec *_gadgetSpec;
    id <PXCMMSuggestion> _suggestion;
    id <PXMessagesCMMSuggestionGadgetActionDelegate> _actionDelegate;
}

@property (retain, nonatomic) id <PXCMMSuggestion> suggestion;
@property (weak, nonatomic) id <PXMessagesCMMSuggestionGadgetActionDelegate> actionDelegate;
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

- (id)initWithCoder:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (struct NSObject *)contentViewController;
- (id)initWithSuggestion:(id)arg1;
- (void)userDidSelectGadget;
- (void)_scheduleLayout;
- (void)_updatePosterHeaderView;

@end
