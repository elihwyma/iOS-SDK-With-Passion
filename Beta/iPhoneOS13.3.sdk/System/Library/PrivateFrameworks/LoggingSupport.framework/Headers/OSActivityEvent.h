/*
 Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, NSTimeZone, NSUUID;

@interface OSActivityEvent : NSObject

{
    _Bool _persisted;
    int _processID;
    unsigned long long _processUniqueID;
    NSUUID *_processImageUUID;
    NSString *_processImagePath;
    unsigned long long _eventType;
    unsigned long long _parentActivityID;
    unsigned long long _activityID;
    unsigned long long _traceID;
    unsigned long long _threadID;
    unsigned long long _machTimestamp;
    NSDate *_timestamp;
    NSTimeZone *_timezone;
    NSUUID *_senderImageUUID;
    NSString *_senderImagePath;
    NSString *_eventMessage;
    struct timezone _tz;
    NSString *_timezoneName;
    struct timeval _timeGMT;
}

@property (nonatomic, readonly) struct timeval timeGMT;
@property (nonatomic, readonly) struct timezone tz;
@property (retain, nonatomic) NSString *timezoneName;
@property (nonatomic, readonly) int processID;
@property (nonatomic, readonly) unsigned long long processUniqueID;
@property (copy, nonatomic, readonly) NSUUID *processImageUUID;
@property (copy, nonatomic, readonly) NSString *processImagePath;
@property (copy, nonatomic, readonly) NSString *process;
@property (nonatomic, readonly) unsigned long long eventType;
@property (nonatomic, readonly) unsigned long long parentActivityID;
@property (nonatomic, readonly) unsigned long long activityID;
@property (nonatomic, readonly) unsigned long long traceID;
@property (nonatomic, readonly) unsigned long long threadID;
@property (nonatomic, readonly) unsigned long long machTimestamp;
@property (copy, nonatomic, readonly) NSDate *timestamp;
@property (copy, nonatomic, readonly) NSTimeZone *timezone;
@property (copy, nonatomic, readonly) NSUUID *senderImageUUID;
@property (copy, nonatomic, readonly) NSString *senderImagePath;
@property (copy, nonatomic, readonly) NSString *sender;
@property (copy, nonatomic) NSString *eventMessage;
@property (nonatomic, readonly) _Bool persisted;

+ (id)activityEventFromStreamEntry:(struct os_activity_stream_entry_s *)arg1;

- (id)description;
- (id)properties;
- (void)_initWithProperties:(id)arg1;
- (void)_addProperties:(id)arg1;
- (void)fillFromStreamEntry:(struct os_activity_stream_entry_s *)arg1 eventMessage:(const char *)arg2 persisted:(_Bool)arg3;

@end
