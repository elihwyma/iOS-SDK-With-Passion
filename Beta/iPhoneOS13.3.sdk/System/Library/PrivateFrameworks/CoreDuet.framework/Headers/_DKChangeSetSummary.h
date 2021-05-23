/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSDate, NSSet;

@interface _DKChangeSetSummary : NSObject

{
    NSDate *_startDate;
    NSDate *_endDate;
    unsigned long long _sequenceNumber;
    NSSet *_eventUUIDs;
}

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) unsigned long long sequenceNumber;
@property (retain, nonatomic) NSSet *eventUUIDs;

@end
