/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableArray;

__attribute__((visibility("hidden")))
@interface EKInviteeTimeSpan : NSObject

{
    NSDate *_startDate;
    NSDate *_endDate;
    NSMutableArray *_conflictedParticipants;
}

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSMutableArray *conflictedParticipants;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
