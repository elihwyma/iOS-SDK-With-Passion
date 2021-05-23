/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKEventEditItem.h>

@class EKEventAvailabilityEditItem, EKEventPrivacyLevelInlineEditItem;

@interface EKEventVisibilityEditItem : EKEventEditItem

{
    EKEventAvailabilityEditItem *_availabilityEditItem;
    EKEventPrivacyLevelInlineEditItem *_privacyLevelEditItem;
    EKEventEditItem *_subitemOfLastDetailViewControllerRequested;
    unsigned long long _lastKnownNumberOfSubitems;
}

- (id)init;
- (void)setDelegate:(id)arg1;
- (void)reset;
- (id)footerTitle;
- (id)footerView;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSubitems;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (_Bool)editItemViewControllerSave:(id)arg1;
- (_Bool)usesDetailViewControllerForSubitem:(unsigned long long)arg1;
- (_Bool)saveAndDismissWithForce:(_Bool)arg1;
- (_Bool)editor:(id)arg1 canSelectSubitem:(unsigned long long)arg2;
- (_Bool)shouldAppearWithVisibility:(int)arg1;
- (_Bool)canBeConfiguredForCalendarConstraints:(id)arg1;
- (_Bool)requiresReconfigurationOnSave;
- (void)setCalendarItem:(id)arg1 store:(id)arg2;
- (_Bool)forceTableReloadOnSave;
- (id)_editItemForIndex:(unsigned long long)arg1;
- (id)_lowestEditItem;
- (double)footerHeightForWidth:(double)arg1;

@end
