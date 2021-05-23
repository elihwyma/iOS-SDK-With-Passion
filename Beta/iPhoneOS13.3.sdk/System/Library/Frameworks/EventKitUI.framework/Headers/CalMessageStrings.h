/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@class EKCalendarEventInvitationNotificationAttendee, NSArray;

@interface CalMessageStrings : NSObject

{
    _Bool _timeProposals;
    NSArray *_titleStrings;
    NSArray *_bodyStrings;
    long long _comments;
    EKCalendarEventInvitationNotificationAttendee *_importantAttendee;
}

@property (nonatomic, readonly) NSArray *titleStrings;
@property (nonatomic, readonly) NSArray *bodyStrings;
@property (nonatomic, readonly) long long comments;
@property (nonatomic, readonly) _Bool timeProposals;
@property (nonatomic, readonly) EKCalendarEventInvitationNotificationAttendee *importantAttendee;

- (id)initWithTitles:(id)arg1 bodyStrings:(id)arg2 comments:(long long)arg3 timeProposals:(_Bool)arg4 importantAttendee:(id)arg5;

@end
