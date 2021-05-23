/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUQuickControlViewController.h>

@class NSString;

@interface HUQuickControlAlarmDetailsViewController : HUQuickControlViewController

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)controlItemPredicate;

- (id)controlItem;
- (id)initWithControlItems:(id)arg1 home:(id)arg2 itemUpdater:(id)arg3;
- (_Bool)shouldShowContentForReachabilityState:(_Bool)arg1;
- (id)createDetailsViewController;
- (id)secondaryQuickControlPresentationStyle;

@end
