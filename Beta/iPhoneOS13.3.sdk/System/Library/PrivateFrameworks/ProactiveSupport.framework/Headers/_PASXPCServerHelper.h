/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <Foundation/NSObject.h>

@interface _PASXPCServerHelper : NSObject

+ (_Bool)shouldAcceptConnection:(id)arg1 serviceName:(id)arg2 whitelistedServerInterface:(id)arg3 whitelistedClientInterface:(id)arg4 requestHandler:(id)arg5 validateConnection:(CDUnknownBlockType)arg6 setupClientProxy:(CDUnknownBlockType)arg7 interruptionHandler:(CDUnknownBlockType)arg8 invalidationHandler:(CDUnknownBlockType)arg9 logHandle:(id)arg10;
+ (_Bool)hasTrueBooleanEntitlement:(id)arg1 connection:(id)arg2 logHandle:(id)arg3;
+ (_Bool)checkForAndLogTrueBooleanEntitlement:(id)arg1 connection:(id)arg2 serviceName:(id)arg3 logHandle:(id)arg4;
+ (_Bool)checkForAndLogTrueBooleanEntitlement:(id)arg1 connection:(id)arg2 serviceName:(id)arg3 logHandle:(id)arg4 shouldGenerateCrashReport:(_Bool)arg5;

@end
