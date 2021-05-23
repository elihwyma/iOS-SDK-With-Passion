/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKEventDetailCell.h>

@class EKEventDetailAttendeesListView, NSArray, NSLayoutConstraint, NSObject, UIImageView, UILabel, UIViewController;

@protocol EKEventDetailAttendeeCellDelegate;

__attribute__((visibility("hidden")))
@interface EKEventDetailAttendeesCell : EKEventDetailCell

{
    UILabel *_titleLabel;
    UILabel *_countLabel;
    UIImageView *_disclosure;
    NSLayoutConstraint *_listHeight;
    EKEventDetailAttendeesListView *_attendeesListView;
    NSArray *_cachedAttendeesWithoutOrganizerAndLocations;
    UIViewController *_viewController;
    NSObject<EKEventDetailAttendeeCellDelegate> *_attendeeCellDelegate;
}

@property (weak) UIViewController *viewController;
@property (weak) NSObject<EKEventDetailAttendeeCellDelegate> *attendeeCellDelegate;

+ (_Bool)requiresConstraintBasedLayout;

- (_Bool)update;
- (void)layoutForWidth:(double)arg1 position:(int)arg2;
- (id)initWithEvent:(id)arg1 editable:(_Bool)arg2;
- (id)_attendeesListView;
- (double)headerInset;
- (double)listToTitle;
- (double)footerInset;
- (id)_attendeesWithoutOrganizerAndLocations;
- (void)_setAttendees:(id)arg1;
- (double)displayHeight;
- (void)_attendeesDidFinishLoadingForTest;

@end
