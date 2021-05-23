/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIInputViewController.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSMutableDictionary, NSString, TUISystemInputAssistantLayoutSplit, TUISystemInputAssistantLayoutStandard, TUISystemInputAssistantView, UITextInputAssistantItem, UIView, UIViewController;

@protocol UIPredictiveViewController;

__attribute__((visibility("hidden")))
@interface UISystemInputAssistantViewController : UIInputViewController <Swift>

{
    UIViewController<UIPredictiveViewController> *_centerViewController;
    UIView *_popoverSourceView;
    UITextInputAssistantItem *_observedInputAssistantItem;
    NSMutableDictionary *_cachedPredictiveViewControllers;
    TUISystemInputAssistantLayoutStandard *_standardAssistantViewLayout;
    TUISystemInputAssistantLayoutSplit *_splitAssistantViewLayout;
}

@property (weak, nonatomic) UIView *popoverSourceView;
@property (weak, nonatomic) UITextInputAssistantItem *observedInputAssistantItem;
@property (retain, nonatomic) NSMutableDictionary *cachedPredictiveViewControllers;
@property (retain, nonatomic) TUISystemInputAssistantLayoutStandard *standardAssistantViewLayout;
@property (retain, nonatomic) TUISystemInputAssistantLayoutSplit *splitAssistantViewLayout;
@property (retain, nonatomic) UIViewController<UIPredictiveViewController> *centerViewController;
@property (nonatomic, readonly) TUISystemInputAssistantView *systemInputAssistantView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)_requiresProxyInterface;
+ (double)preferredHeightForTraitCollection:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)_beginObservingInputAssistantItemForRelevantItemChanges:(id)arg1;
- (void)_registerForAssistantViewNotifications;
- (_Bool)_isAssistantPreferenceEnabled;
- (_Bool)_shouldShowExpandableButtonBarItemsForResponder:(id)arg1;
- (void)automaticallySetCenterViewControllerBasedOnInputDelegate:(id)arg1;
- (id)_inputDelegateAsResponder:(id)arg1;
- (id)_currentInputDelegate;
- (_Bool)layoutHasBuiltinAssistantView;
- (_Bool)_assistantItemsVisibleForResponder:(id)arg1;
- (_Bool)_centerPredictionViewVisibleForInputDelegate:(id)arg1 inputViews:(id)arg2;
- (id)candidateViewController;
- (id)predictionViewController;
- (void)updateCenterViewVisibilityStateForInputDelegate:(id)arg1;
- (void)_updateSystemInputAssistantViewStylingForInputAssistantItem:(id)arg1;
- (id)_defaultTintColor;
- (_Bool)_allowedToShowBarButtonItemsInline;
- (void)_responderChangedNotification:(id)arg1;
- (void)_responderCapabilitiesChangedNotification:(id)arg1;
- (void)_showCandidates;
- (void)_collapseBarItems;
- (void)_didReceiveTextEffectsRotationNotification:(id)arg1;
- (void)_didChangePlacementOrInputSourceNotification:(id)arg1;
- (void)_expandBarItems;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (void)_updateCenterViewWidthForInterfaceOrientation:(long long)arg1;
- (double)_buttonBarWidthForTraitCollection:(id)arg1 interfaceOrientation:(long long)arg2;
- (double)_centerViewWidthForTraitCollection:(id)arg1 interfaceOrientation:(long long)arg2;
- (id)_popoverViewControllerForBarButtonItemGroup:(id)arg1;
- (_Bool)shouldBeShownForInputDelegate:(id)arg1 inputViews:(id)arg2;
- (void)setInputAssistantButtonItemsForResponder:(id)arg1;
- (void)systemInputAssistantView:(id)arg1 wantsToShowCollapsedItemGroup:(id)arg2 fromView:(id)arg3;

@end
