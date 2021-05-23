/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <Foundation/NSObject.h>

@class PLAgent;

@interface PLTelephonyConnection : NSObject

{
    struct __CTServerConnection *connection;
    struct __CFMachPort *ctServerPort;
    struct __CFRunLoopSource *ctServerSource;
    PLAgent *_observerAgent;
}

@property (nonatomic, readonly) struct __CTServerConnection *connection;
@property (retain) PLAgent *observerAgent;

+ (id)sharedTelephonyConnection;

- (id)init;
- (void)invalidate;
- (void)teardownConnection;
- (id)getRemotePortNameWithLocalName:(id)arg1;
- (id)activeBand;
- (void)registerCallback:(CDUnknownFunctionPointerType)arg1 forTelephonyNotification:(struct __CFString *)arg2;
- (void)getRAT:(id *)arg1 preferredRAT:(id *)arg2 campedRAT:(id *)arg3;
- (void)getSignalStrength:(long long *)arg1 asPercentage:(long long *)arg2 withBars:(long long *)arg3;
- (id)currentCallStatus;
- (id)getProperty:(id)arg1 forTrace:(id)arg2;
- (id)humanReadableRATName:(struct __CFString *)arg1;
- (id)humanReadableCallStatus:(int)arg1;
- (void)enableDiagLogging;
- (_Bool)requestBasebandStateDump:(id)arg1;
- (_Bool)requestBasebandCoreDump:(id)arg1;
- (void)deregisterForAllTelephonyNotifications;

@end
