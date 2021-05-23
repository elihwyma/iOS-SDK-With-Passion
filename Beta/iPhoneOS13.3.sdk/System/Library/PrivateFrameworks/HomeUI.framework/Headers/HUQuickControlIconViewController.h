/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUQuickControlSingleControlViewController.h>

@class HFDictionaryValueControlItem, HUQuickControlIconView, HUQuickControlIconViewProfile;

@interface HUQuickControlIconViewController : HUQuickControlSingleControlViewController

{
    HUQuickControlIconView *_quickControlIconView;
}

@property (nonatomic, readonly) HFDictionaryValueControlItem *controlItem;
@property (nonatomic, readonly) HUQuickControlIconViewProfile *viewProfile;
@property (retain, nonatomic) HUQuickControlIconView *quickControlIconView;

+ (id)controlItemPredicate;
+ (Class)controlItemClass;

- (id)createInteractionCoordinator;
- (id)createViewProfile;

@end
