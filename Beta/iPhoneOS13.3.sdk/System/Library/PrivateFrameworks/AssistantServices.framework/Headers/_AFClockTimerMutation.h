/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AFClockTimer, NSDate, NSString, NSURL, NSUUID;

@interface _AFClockTimerMutation : NSObject

{
    AFClockTimer *_baseModel;
    NSUUID *_timerID;
    NSURL *_timerURL;
    _Bool _isFiring;
    NSString *_title;
    long long _state;
    double _duration;
    long long _type;
    double _fireTimeInterval;
    NSDate *_fireDate;
    NSDate *_firedDate;
    NSDate *_dismissedDate;
    NSDate *_lastModifiedDate;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasTimerID:1;
        unsigned int hasTimerURL:1;
        unsigned int hasIsFiring:1;
        unsigned int hasTitle:1;
        unsigned int hasState:1;
        unsigned int hasDuration:1;
        unsigned int hasType:1;
        unsigned int hasFireTimeInterval:1;
        unsigned int hasFireDate:1;
        unsigned int hasFiredDate:1;
        unsigned int hasDismissedDate:1;
        unsigned int hasLastModifiedDate:1;
    } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)setType:(long long)arg1;
- (void)setFireDate:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setDuration:(double)arg1;
- (void)setFireTimeInterval:(double)arg1;
- (void)setLastModifiedDate:(id)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)generate;
- (void)setTimerID:(id)arg1;
- (void)setTimerURL:(id)arg1;
- (void)setIsFiring:(_Bool)arg1;
- (void)setFiredDate:(id)arg1;
- (void)setDismissedDate:(id)arg1;

@end
