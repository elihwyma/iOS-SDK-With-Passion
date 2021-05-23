/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate;

@interface EKInviteeAlternativeTime : NSObject

{
    NSDate *_startDate;
    NSDate *_endDate;
    NSArray *_conflictedParticipants;
}

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSArray *conflictedParticipants;

- (id)description;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 conflictedParticipants:(id)arg3;

@end
