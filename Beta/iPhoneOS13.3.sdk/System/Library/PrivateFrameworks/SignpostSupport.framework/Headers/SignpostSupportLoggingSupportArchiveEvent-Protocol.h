/*
 Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

#import <SignpostSupport/Swift-Protocol.h>

@class NSString, NSUUID;

@protocol SignpostSupportLoggingSupportArchiveEvent <Swift>

@property (nonatomic) unsigned long long _machContinuousTimestamp;
@property (nonatomic) int processID;
@property (nonatomic) unsigned long long processUniqueID;
@property (nonatomic) unsigned long long threadID;
@property (retain, nonatomic) NSUUID *processImageUUID;
@property (retain, nonatomic) NSString *processImagePath;
@property (retain, nonatomic) NSString *processName;
@property (nonatomic) long long tv_sec;
@property (nonatomic) int tv_usec;
@property (nonatomic) int tz_minuteswest;
@property (nonatomic) int tz_dsttime;

- (unsigned short)beginWallTimeStringWithTimeZoneName: /* Error: Ran out of types for this method. */;
- (unsigned short)endWallTimeStringWithTimeZoneName: /* Error: Ran out of types for this method. */;

@end
