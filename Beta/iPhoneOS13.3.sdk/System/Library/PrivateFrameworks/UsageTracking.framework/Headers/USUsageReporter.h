/*
 Image: /System/Library/PrivateFrameworks/UsageTracking.framework/UsageTracking
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@interface USUsageReporter : NSObject

{
    NSXPCConnection *_xpcConnection;
}

@property (readonly) NSXPCConnection *xpcConnection;

+ (id)getLocalDeviceIdentifierAndReturnError:(id *)arg1;
+ (void)synchronizeUsageWithCompletionHandler:(CDUnknownBlockType)arg1;

- (id)init;
- (void)dealloc;
- (id)getLocalDeviceIdentifierAndReturnError:(id *)arg1;
- (void)fetchReportsDuringInterval:(id)arg1 partitionInterval:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchReportsDuringInterval:(id)arg1 partitionInterval:(double)arg2 forceImmediateSync:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
