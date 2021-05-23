/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIViewController.h>

#import <HomeUI/Swift-Protocol.h>

@class HMHome, HUQuickControlSimpleItemUpdater, NSSet, NSString;

@protocol HULayoutAnchorProviding, HUQuickControlContentCharacteristicWritingDelegate, HUQuickControlContentHosting, HUQuickControlItemUpdating, HUQuickControlViewControllerDelegate;

@interface HUQuickControlViewController : UIViewController <Swift>

{
    _Bool _controlsVisible;
    _Bool _userInteractionEnabled;
    _Bool _areControlItemsRequestingToBeHidden;
    id <HUQuickControlContentCharacteristicWritingDelegate> _characteristicWritingDelegate;
    id <HUQuickControlContentHosting> _quickControlHost;
    id <HULayoutAnchorProviding> _preferredFrameLayoutGuide;
    HMHome *_home;
    NSSet *_controlItems;
    id <HUQuickControlItemUpdating> _itemUpdater;
    id <HUQuickControlViewControllerDelegate> _delegate;
    unsigned long long _controlSize;
    unsigned long long _controlOrientation;
    unsigned long long _preferredControl;
    HUQuickControlSimpleItemUpdater *_internalItemUpdater;
}

@property (nonatomic, readonly) HUQuickControlSimpleItemUpdater *internalItemUpdater;
@property (nonatomic) _Bool areControlItemsRequestingToBeHidden;
@property (nonatomic, readonly) HMHome *home;
@property (copy, nonatomic, readonly) NSSet *controlItems;
@property (weak, nonatomic, readonly) id <HUQuickControlItemUpdating> itemUpdater;
@property (weak, nonatomic) id <HUQuickControlViewControllerDelegate> delegate;
@property (copy, nonatomic, readonly) NSString *overrideStatusText;
@property (copy, nonatomic, readonly) NSString *overrideSecondaryStatusText;
@property (nonatomic, readonly) unsigned long long preferredPresentationStyle;
@property (nonatomic) unsigned long long controlSize;
@property (nonatomic) unsigned long long controlOrientation;
@property (nonatomic) unsigned long long preferredControl;
@property (nonatomic, readonly) _Bool hasSingleControlView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <HUQuickControlContentHosting> quickControlHost;
@property (nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled;
@property (retain, nonatomic) id <HULayoutAnchorProviding> preferredFrameLayoutGuide;
@property (weak, nonatomic) id <HUQuickControlContentCharacteristicWritingDelegate> characteristicWritingDelegate;
@property (copy, nonatomic, readonly) NSSet *affectedCharacteristics;
@property (nonatomic, getter=areControlsVisible) _Bool controlsVisible;

+ (id)controlItemPredicate;

- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)_updateControlItemHiddenStateNotifyingHost:(_Bool)arg1;
- (id)initWithControlItems:(id)arg1 home:(id)arg2 itemUpdater:(id)arg3;
- (id)childQuickControlContentViewControllers;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
- (id)overrideValueForCharacteristic:(id)arg1;
- (_Bool)shouldShowContentForReachabilityState:(_Bool)arg1;
- (void)quickControlItemUpdater:(id)arg1 didUpdateResultsForControlItems:(id)arg2;
- (id)hu_preloadContent;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;
- (id)viewControllerForTouchContinuation;

@end
