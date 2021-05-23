/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSDate, NSSet;

@interface CRKEventLog : NSObject

{
    NSSet *mLazilyLoadedEvents;
    NSDate *_startDate;
    NSDate *_endDate;
    NSSet *_passedInEvents;
    NSSet *_passedInEventDatas;
}

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSSet *passedInEvents;
@property (copy, nonatomic) NSSet *passedInEventDatas;
@property (copy, nonatomic, readonly) NSSet *events;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 events:(id)arg3;
- (_Bool)isEqualToTimeline:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 eventDatas:(id)arg3;

@end
