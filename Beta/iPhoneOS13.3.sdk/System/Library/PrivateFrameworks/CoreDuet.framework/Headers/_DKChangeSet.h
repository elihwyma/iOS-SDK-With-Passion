/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSString, NSUUID;

@interface _DKChangeSet : NSObject

{
    NSArray *_eventsToAdd;
    NSArray *_eventIDsToDelete;
    NSUUID *_deviceIdentifier;
    unsigned long long _sequenceNumber;
    NSDate *_startDate;
    NSDate *_endDate;
    NSString *_type;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSArray *eventsToAdd;
@property (retain, nonatomic) NSArray *eventIDsToDelete;
@property (retain, nonatomic) NSUUID *deviceIdentifier;
@property (nonatomic) unsigned long long sequenceNumber;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSString *type;

+ (id)additionChangeSetEntityName;
+ (id)deletionChangeSetEntityName;
+ (id)fromPBCodable:(id)arg1;
+ (id)_createFromData:(id)arg1 deviceIdentifier:(id)arg2 sequenceNumber:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5;
+ (id)createFromData:(id)arg1 deviceIdentifier:(id)arg2 sequenceNumber:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5;
+ (id)createFromData:(id)arg1 deviceIdentifier:(id)arg2 sequenceNumber:(unsigned long long)arg3;
+ (id)dataFromCompressedChangeSet:(id)arg1;

- (id)initWithEventsToAdd:(id)arg1 deviceIdentifier:(id)arg2 sequenceNumber:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5;
- (id)initWithEventIDsToDelete:(id)arg1 deviceIdentifier:(id)arg2 sequenceNumber:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5;
- (id)initWithEventsToAdd:(id)arg1 eventIDsToDelete:(id)arg2 deviceIdentifier:(id)arg3 sequenceNumber:(unsigned long long)arg4 startDate:(id)arg5 endDate:(id)arg6 type:(id)arg7;
- (id)toPBCodable;
- (id)initWithEventsToAdd:(id)arg1 eventIDsToDelete:(id)arg2 deviceIdentifier:(id)arg3 sequenceNumber:(unsigned long long)arg4;
- (id)asData;
- (id)insertInManagedObjectContext:(id)arg1;
- (id)initWithManagedObject:(id)arg1;

@end
