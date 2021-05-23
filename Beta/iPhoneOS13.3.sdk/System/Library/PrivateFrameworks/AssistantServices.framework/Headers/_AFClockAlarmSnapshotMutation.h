/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AFClockAlarmSnapshot, NSDate, NSDictionary, NSOrderedSet, NSString;

@interface _AFClockAlarmSnapshotMutation : NSObject

{
    AFClockAlarmSnapshot *_baseModel;
    unsigned long long _generation;
    NSDate *_date;
    NSDictionary *_alarmsByID;
    NSOrderedSet *_notifiedFiringAlarmIDs;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasGeneration:1;
        unsigned int hasDate:1;
        unsigned int hasAlarmsByID:1;
        unsigned int hasNotifiedFiringAlarmIDs:1;
    } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)setDate:(id)arg1;
- (void)setGeneration:(unsigned long long)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)generate;
- (void)setAlarmsByID:(id)arg1;
- (void)setNotifiedFiringAlarmIDs:(id)arg1;

@end
