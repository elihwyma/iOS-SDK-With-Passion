/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
 */

#import <DiagnosticsSupport/DSLogLine.h>

@class NSString;

@interface DSUsageLogLine : DSLogLine

@property (nonatomic, readonly) NSString *eventType;
@property (nonatomic, readonly) int usageTime;
@property (nonatomic, readonly) int standbyTime;
@property (nonatomic, readonly) int batteryLevel;
@property (nonatomic, readonly) _Bool isReset;
@property (nonatomic, readonly) _Bool isOnPower;
@property (nonatomic, readonly) _Bool isOffPower;

@end
