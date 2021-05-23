/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface DNDSModeAssertionLifetimeRecord : NSObject

{
    NSString *_lifetimeType;
    NSString *_eventUniqueID;
    NSNumber *_occurrenceDate;
    NSNumber *_onlyDuringEvent;
    NSNumber *_startDate;
    NSNumber *_endDate;
    NSString *_scheduleIdentifier;
    NSString *_behavior;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSString *lifetimeType;
@property (retain, nonatomic) NSString *eventUniqueID;
@property (retain, nonatomic) NSNumber *occurrenceDate;
@property (retain, nonatomic) NSNumber *onlyDuringEvent;
@property (retain, nonatomic) NSNumber *startDate;
@property (retain, nonatomic) NSNumber *endDate;
@property (retain, nonatomic) NSString *scheduleIdentifier;
@property (retain, nonatomic) NSString *behavior;

+ (id)recordForDictionary:(id)arg1 keys:(const CDStruct_0a6492a9 *)arg2;
+ (id)recordForAssertionLifetime:(id)arg1;

- (id)object;
- (id)dictionaryWithKeys:(const CDStruct_0a6492a9 *)arg1 options:(unsigned long long)arg2;

@end
