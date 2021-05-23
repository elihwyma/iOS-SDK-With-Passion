/*
 Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, NSTimeZone, NSUUID, OSLogEventBacktrace, OSLogEventDecomposedMessage;

@interface OSLogEventProxy : NSObject

{
    struct {
        unsigned long long type;
        int pid;
        unsigned long long proc_id;
        unsigned int pidversion;
        char *proc_imageuuid;
        char *proc_imagepath;
        unsigned long long activity_id;
        unsigned long long parent_id;
        struct {
            unsigned long long trace_id;
            unsigned long long timestamp;
            unsigned long long thread;
            struct mach_timebase_info timebase;
            char *dsc_uuid;
            char *image_uuid;
            char *image_path;
            struct timeval tv_gmt;
            struct timezone tz;
            unsigned int offset;
            unsigned int opaque_flags;
            char *message;
            unsigned long long sz;
        } common;
        union {
            struct {
                unsigned long long creator_aid;
                unsigned long long unique_pid;
            } activity_create;
            struct {
                unsigned long long transition_id;
            } activity_transition;
            struct {
                char *buffer;
                unsigned long long buffer_sz;
                struct os_log_fmt_hdr_s *hdr;
                void *pubdata;
                unsigned short pubdata_sz;
                char *privdata;
                unsigned long long privdata_sz;
                char *subsystem;
                char *category;
                unsigned int oversize_id;
                unsigned char ttl;
                _Bool persisted;
                unsigned char signpost_scope;
                unsigned char signpost_type;
                unsigned long long signpost_id;
                unsigned int signpost_name_offset;
                char *signpost_name;
                _Bool has_context_data;
            } log_message;
            struct {
                _Bool persisted;
            } useraction;
            struct {
                unsigned char boot_uuid[16];
                unsigned long long flags;
                unsigned long long continuous_time;
                unsigned long long wallclock_nsec;
                unsigned char ttl;
            } timesync;
            struct {
                CDStruct_69b3e0b9 start;
                CDStruct_69b3e0b9 end;
                unsigned int count;
            } loss;
        } ;
        struct {
            unsigned long long message_size;
            unsigned char ttl;
        } statedump;
    } _eint;
    struct os_activity_map_s *_aid_map;
    CDStruct_c6d697a1 *_event;
    unsigned long long _efv;
    struct _os_timesync_db_s *_tsdb;
    int _uuiddbfd;
    struct timezone _tz;
    _Bool _sensitive;
    _Bool _trackActivities;
    unsigned long long _thread;
    unsigned long long _retainCount;
    NSString *_processImagePath;
    NSString *_senderImagePath;
    OSLogEventBacktrace *_backtrace;
    NSString *_logMessage;
    OSLogEventDecomposedMessage *_decomposedMessage;
    unsigned long long _uuidi;
}

@property (nonatomic, readonly) unsigned int _oversizeIdentifier;
@property (nonatomic) unsigned long long _timesyncRangeUUIDIndex;
@property (nonatomic, readonly) NSString *composedMessage;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) unsigned long long logType;
@property (nonatomic, readonly) unsigned long long size;
@property (nonatomic, readonly) unsigned long long timeToLive;
@property (nonatomic, readonly) unsigned long long traceIdentifier;
@property (nonatomic, readonly) unsigned long long threadIdentifier;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSTimeZone *timeZone;
@property (nonatomic, readonly) struct timeval *unixDate;
@property (nonatomic, readonly) struct timezone *unixTimeZone;
@property (nonatomic, readonly) int processIdentifier;
@property (nonatomic, readonly) unsigned long long activityIdentifier;
@property (nonatomic, readonly) unsigned long long parentActivityIdentifier;
@property (nonatomic, readonly) unsigned long long transitionActivityIdentifier;
@property (nonatomic, readonly) NSUUID *bootUUID;
@property (nonatomic, readonly) unsigned long long continuousNanosecondsSinceBoot;
@property (nonatomic, readonly) unsigned long long machContinuousTimestamp;
@property (nonatomic, readonly) NSUUID *processImageUUID;
@property (nonatomic, readonly) const char *processImageUUIDBytes;
@property (nonatomic, readonly) NSString *processImagePath;
@property (nonatomic, readonly) NSString *process;
@property (nonatomic, readonly) NSUUID *senderImageUUID;
@property (nonatomic, readonly) const char *senderImageUUIDBytes;
@property (nonatomic, readonly) NSString *senderImagePath;
@property (nonatomic, readonly) NSString *sender;
@property (nonatomic, readonly) unsigned long long senderImageOffset;
@property (nonatomic, readonly) OSLogEventBacktrace *backtrace;
@property (nonatomic, readonly) NSString *subsystem;
@property (nonatomic, readonly) NSString *category;
@property (nonatomic, readonly) NSString *formatString;
@property (nonatomic, readonly) OSLogEventDecomposedMessage *decomposedMessage;
@property (nonatomic, readonly) unsigned long long signpostIdentifier;
@property (nonatomic, readonly) unsigned long long signpostType;
@property (nonatomic, readonly) unsigned long long signpostScope;
@property (nonatomic, readonly) NSString *signpostName;
@property (nonatomic, readonly) unsigned long long creatorActivityIdentifier;
@property (nonatomic, readonly) unsigned long long creatorProcessUniqueIdentifier;
@property (nonatomic, readonly) unsigned long long lossStartMachContinuousTimestamp;
@property (nonatomic, readonly) struct timeval *lossStartUnixDate;
@property (nonatomic, readonly) struct timezone *lossStartUnixTimeZone;
@property (nonatomic, readonly) unsigned long long lossEndMachContinuousTimestamp;
@property (nonatomic, readonly) struct timeval *lossEndUnixDate;
@property (nonatomic, readonly) struct timezone *lossEndUnixTimeZone;
@property (nonatomic, readonly) CDStruct_0dd72924 lossCount;

+ (id)_make;

- (id)init;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)retain;
- (oneway void)release;
- (id)description;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)formatArguments;
- (oneway void)_unmake;
- (void)_assertBalanced;
- (void)_setThreadCrumb;
- (void)_setIncludeSensitive:(_Bool)arg1;
- (_Bool)_shouldIncludeSensitive;
- (void)_setTimesyncDatabase:(struct _os_timesync_db_s *)arg1;
- (void)_setUUIDDBFileDescriptor:(int)arg1;
- (void)_setFallbackTimezone;
- (void)_setDoNotTrackActivites:(_Bool)arg1;
- (void)_setBuffer:(const void *)arg1 size:(unsigned long long)arg2 privateBuffer:(const void *)arg3 privateSize:(unsigned long long)arg4;
- (_Bool)_setLogEvent:(CDStruct_c6d697a1 *)arg1 rangeUUIDIndex:(unsigned long long)arg2 machTimebase:(struct mach_timebase_info *)arg3;
- (void)_fillFromXPCEventObject:(id)arg1;
- (unsigned int)processIdentifierVersion;
- (unsigned long long)processUniqueIdentifier;

@end
