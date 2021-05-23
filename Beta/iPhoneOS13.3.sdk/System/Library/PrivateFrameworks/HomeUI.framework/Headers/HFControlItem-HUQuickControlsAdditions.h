/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFControlItem.h>

@interface HFControlItem (HUQuickControlsAdditions)

+ (id)hu_preferredTogglableControlItemInControlItems:(id)arg1;
+ (CDUnknownBlockType)hf_controlItemComparator;
+ (id)hu_preferredQuickControlViewControllerForControlItems:(id)arg1 configuration:(id)arg2 ignoringGrid:(_Bool)arg3;
+ (id)hu_preferredQuickControlViewControllerForControlItems:(id)arg1 configuration:(id)arg2;
+ (id)_hu_prioritizedViewControllerClasses;
+ (id)_hu_quickControlViewControllerOfClass:(Class)arg1 controlItems:(id)arg2 configuration:(id)arg3;
+ (id)_hu_quickControlViewControllerForControlItemWithPreferredPurposes:(unsigned long long)arg1 inControlItems:(id)arg2 configuration:(id)arg3;

@end
