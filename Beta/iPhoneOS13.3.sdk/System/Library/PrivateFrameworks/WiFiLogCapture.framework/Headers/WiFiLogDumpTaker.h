/*
 Image: /System/Library/PrivateFrameworks/WiFiLogCapture.framework/WiFiLogCapture
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, OS_xpc_object;

@interface WiFiLogDumpTaker : NSObject

{
    NSObject<OS_dispatch_queue> *event_queue;
    NSObject<OS_xpc_object> *xpc_connection;
    _Bool _didLastCaptureFallback;
}

@property (nonatomic, readonly) _Bool didLastCaptureFallback;

- (id)init;
- (void)handleConnection:(id)arg1;
- (void)takeWiFiDiagnosticsDumpWithPath:(const char *)arg1 reason:(const char *)arg2 shouldTryFallback:(_Bool)arg3 callback:(CDUnknownBlockType)arg4;
- (id)XPCConnection:(const char *)arg1;
- (void)takeWiFiCoreCaptureDumpWithReason:(const char *)arg1 callback:(CDUnknownBlockType)arg2;
- (void)takeWiFiDiagnosticsDumpWithPath:(const char *)arg1 reason:(const char *)arg2 callback:(CDUnknownBlockType)arg3;
- (void)takeWiFiDiagnosticsDumpWithPathAndReason:(CDUnknownBlockType)arg1:(const char *)arg2:(const char *)arg3;

@end
