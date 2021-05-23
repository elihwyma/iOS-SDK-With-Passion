/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKEventDetailItem.h>

@class UITableViewCell;

@protocol EKIdentityProtocol;

__attribute__((visibility("hidden")))
@interface EKEventOrganizerDetailItem : EKEventDetailItem

{
    UITableViewCell *_cell;
    _Bool _hideDisclosureIndicator;
    id <EKIdentityProtocol> _organizerOverride;
}

@property (retain) id <EKIdentityProtocol> organizerOverride;
@property (nonatomic) _Bool hideDisclosureIndicator;

- (void)reset;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (_Bool)configureWithCalendar:(id)arg1 preview:(_Bool)arg2;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (void)_updateDisclosureIndicator;

@end
