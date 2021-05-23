/*
 Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

@class NSDate, NSString, NSTimeZone, NSUUID, OSLogEventBacktrace, OSLogEventDecomposedMessage;

@protocol OSLogEventProvider

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

@end
