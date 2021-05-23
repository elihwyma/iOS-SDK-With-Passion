/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AFClockTimerSnapshot, NSDate, NSDictionary, NSOrderedSet, NSString;

@interface _AFClockTimerSnapshotMutation : NSObject

{
    AFClockTimerSnapshot *_baseModel;
    unsigned long long _generation;
    NSDate *_date;
    NSDictionary *_timersByID;
    NSOrderedSet *_notifiedFiringTimerIDs;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasGeneration:1;
        unsigned int hasDate:1;
        unsigned int hasTimersByID:1;
        unsigned int hasNotifiedFiringTimerIDs:1;
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
- (void)setTimersByID:(id)arg1;
- (void)setNotifiedFiringTimerIDs:(id)arg1;

@end
