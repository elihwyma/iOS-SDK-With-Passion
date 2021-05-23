/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKEventEditItem.h>

@interface EKEventTravelTimeEditItem : EKEventEditItem

{
    _Bool _isHidden;
}

- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSubitems;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (_Bool)editItemViewControllerSave:(id)arg1;
- (_Bool)isInline;
- (_Bool)forceRefreshStartAndEndDatesOnSave;
- (void)_updateHiddenState;

@end
