/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/Swift-Protocol.h>

@class NSDate;

@protocol MMCSOperationStateTimeRange <Swift>

@property (readonly) unsigned long long operationState;
@property (readonly) NSDate *startDate;
@property (readonly) double duration;
@property (readonly) double absoluteStart;
@property (readonly) double absoluteStop;

- (unsigned short)compareStartTime: /* Error: Ran out of types for this method. */;
- (unsigned short)compareStopTime: /* Error: Ran out of types for this method. */;

@end
