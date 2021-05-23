/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <MediaMiningKit/CLSPrimitive.h>

@class CLLocation, NSArray, NSDate, NSString;

@interface CLSEvent : CLSPrimitive

{
    _Bool _meetingRoom;
    _Bool _organizedByMe;
    _Bool _accepted;
    NSString *_title;
    CLLocation *_location;
    NSArray *_attendees;
    NSArray *_performers;
    NSDate *_startDate;
    NSDate *_endDate;
}

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *attendees;
@property (retain, nonatomic) NSArray *performers;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) CLLocation *location;
@property (nonatomic, getter=hasMeetingRoom) _Bool meetingRoom;
@property (nonatomic, getter=isOrganizedByMe) _Bool organizedByMe;
@property (nonatomic, getter=isAccepted) _Bool accepted;

+ (id)event;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToEvent:(id)arg1;

@end
