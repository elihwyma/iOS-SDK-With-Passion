/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKEventEditItem.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface EKEventAvailabilityEditItem : EKEventEditItem

{
    long long _availability;
    unsigned long long _supportedAvailabilities;
    NSArray *_choices;
    unsigned long long _availabilityIndexInChoices;
}

- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (_Bool)editItemViewControllerSave:(id)arg1;
- (_Bool)saveAndDismissWithForce:(_Bool)arg1;
- (void)refreshFromCalendarItemAndStore;
- (_Bool)canBeConfiguredForCalendarConstraints:(id)arg1;

@end
