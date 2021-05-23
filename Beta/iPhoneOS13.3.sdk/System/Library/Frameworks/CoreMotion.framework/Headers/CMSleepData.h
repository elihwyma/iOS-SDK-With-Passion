/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@class NSDate, NSUUID;

@interface CMSleepData : NSObject

{
    unsigned long long fRecordId;
    NSUUID *fSourceId;
    NSUUID *fSessionId;
    NSDate *fEventTime;
    long long fEventType;
}

@property (nonatomic, readonly) unsigned long long recordId;
@property (nonatomic, readonly) NSUUID *sourceId;
@property (nonatomic, readonly) NSUUID *sessionId;
@property (nonatomic, readonly) NSDate *eventTime;
@property (nonatomic, readonly) long long eventType;

+ (_Bool)supportsSecureCoding;
+ (id)eventTypeName:(long long)arg1;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionId:(id)arg1;
- (id)initWithRecordId:(unsigned long long)arg1 sourceId:(id)arg2 sessionId:(id)arg3 eventTime:(id)arg4 eventType:(long long)arg5;
- (void)convertToSpringTrackerEntry:(struct CLSpringTrackerEntry *)arg1;
- (id)initWithSpringEntry:(const struct CLSpringTrackerEntry *)arg1;

@end
