/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <Foundation/NSObject.h>

@class CalDAVOccurrenceChange, NSArray, NSMutableDictionary, NSString;

@interface CalDAVScheduleChangesProperty : NSObject

{
    int _actionType;
    NSString *_dateStamp;
    NSString *_attendeeAddress;
    CalDAVOccurrenceChange *_masterChange;
    NSMutableDictionary *_occurrenceChanges;
}

@property (retain, nonatomic) NSMutableDictionary *occurrenceChanges;
@property (nonatomic, readonly) _Bool isCancel;
@property (nonatomic, readonly) _Bool isReply;
@property (nonatomic, readonly) _Bool isUpdate;
@property (nonatomic, readonly) _Bool isCreate;
@property (nonatomic, readonly) NSArray *recurrenceIDs;
@property (retain, nonatomic) NSString *dateStamp;
@property (nonatomic) int actionType;
@property (retain, nonatomic) NSString *attendeeAddress;
@property (retain, nonatomic) CalDAVOccurrenceChange *masterChange;

+ (void)initialize;
+ (id)debugStringForType:(int)arg1;
+ (id)propertyWithItem:(id)arg1;

- (id)init;
- (id)changeForOccurrence:(id)arg1;
- (void)addOccurrenceChange:(id)arg1;

@end
