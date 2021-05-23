/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKEventEditItem.h>

@interface EKEventPrivacyLevelInlineEditItem : EKEventEditItem

{
    _Bool _originalSwitchState;
    _Bool _currentSwitchState;
}

- (id)footerTitle;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (_Bool)isInline;
- (_Bool)saveAndDismissWithForce:(_Bool)arg1;
- (_Bool)shouldAppearWithVisibility:(int)arg1;
- (void)refreshFromCalendarItemAndStore;
- (_Bool)canBeConfiguredForCalendarConstraints:(id)arg1;
- (_Bool)requiresReconfigurationOnSave;
- (_Bool)forceTableReloadOnSave;
- (double)footerHeightForWidth:(double)arg1;
- (void)_switchChanged:(id)arg1;

@end
