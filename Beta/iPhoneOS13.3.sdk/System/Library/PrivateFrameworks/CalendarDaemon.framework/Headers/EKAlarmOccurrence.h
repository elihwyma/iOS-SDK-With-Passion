/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <Foundation/NSObject.h>

@class CADObjectID, NSDate, NSString, NSTimeZone, NSURL;

@interface EKAlarmOccurrence : NSObject

{
    CADObjectID *_alarmID;
    CADObjectID *_ownerID;
    NSDate *_ownerDate;
    NSTimeZone *_ownerTimeZone;
    NSURL *_ownerURI;
    NSDate *_fireDate;
    NSString *_externalID;
    NSDate *_acknowledgedDate;
}

@property (nonatomic, readonly) CADObjectID *alarmID;
@property (nonatomic, readonly) CADObjectID *ownerID;
@property (nonatomic, readonly) NSDate *ownerDate;
@property (nonatomic, readonly) NSTimeZone *ownerTimeZone;
@property (nonatomic, readonly) NSURL *ownerURI;
@property (nonatomic, readonly) NSDate *fireDate;
@property (nonatomic, readonly) NSString *externalID;
@property (nonatomic, readonly) NSDate *acknowledgedDate;

+ (id)alarmOccurrenceWithAlarmID:(id)arg1 ownerID:(id)arg2 ownerDate:(id)arg3 ownerTimeZone:(id)arg4 ownerURI:(id)arg5 fireDate:(id)arg6 externalID:(id)arg7 acknowledgedDate:(id)arg8;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithAlarmID:(id)arg1 ownerID:(id)arg2 ownerDate:(id)arg3 ownerTimeZone:(id)arg4 ownerURI:(id)arg5 fireDate:(id)arg6 externalID:(id)arg7 acknowledgedDate:(id)arg8;

@end
