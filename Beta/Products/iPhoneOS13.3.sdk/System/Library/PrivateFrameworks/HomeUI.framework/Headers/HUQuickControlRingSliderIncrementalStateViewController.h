/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlRingSliderIncrementalStateViewController : HUQuickControlSingleControlViewController <HUQuickControlRingSliderInteractionCoordinatorDelegate> {
    HUQuickControlRingSliderView * _ringSliderView;
}

@property (nonatomic, readonly) HFIncrementalStateControlItem *controlItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HUQuickControlRingSliderView *ringSliderView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HUQuickControlRingSliderViewProfile *viewProfile;

+ (Class)controlItemClass;

- (void).cxx_destruct;
- (id)createInteractionCoordinator;
- (id)ringSliderView;
- (void)setRingSliderView:(id)arg1;

@end