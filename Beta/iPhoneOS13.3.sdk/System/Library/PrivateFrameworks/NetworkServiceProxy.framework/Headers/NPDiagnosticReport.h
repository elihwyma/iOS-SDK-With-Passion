/*
 Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

#import <Foundation/NSObject.h>

@interface NPDiagnosticReport : NSObject

+ (void)logInternalError:(id)arg1 context:(id)arg2;
+ (_Bool)logNSPDiagnosticReport:(id)arg1 event:(id)arg2 context:(id)arg3;
+ (void)logConnectionFailed:(long long)arg1 error:(int)arg2 onRamp:(id)arg3;
+ (void)logLatencyMapTimeout:(long long)arg1;
+ (void)logFetchError:(id)arg1 requestType:(int)arg2;

@end
