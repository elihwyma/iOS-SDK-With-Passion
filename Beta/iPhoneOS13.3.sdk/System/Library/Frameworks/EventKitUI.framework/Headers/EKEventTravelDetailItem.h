/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKEventDetailItem.h>

__attribute__((visibility("hidden")))
@interface EKEventTravelDetailItem : EKEventDetailItem

- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (_Bool)editItemViewControllerShouldShowDetachAlert;
- (_Bool)editItemViewControllerSave:(id)arg1;
- (_Bool)_canChangeTravelTime;

@end
