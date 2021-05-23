/*
 Image: /System/Library/PrivateFrameworks/ProactiveExperimentsInternals.framework/ProactiveExperimentsInternals
 */

#import <Foundation/NSObject.h>

@interface PREXPCServerHelper : NSObject

+ (_Bool)hasTrueBooleanEntitlement:(id)arg1 connection:(id)arg2;
+ (_Bool)checkForAndLogTrueBooleanEntitlement:(id)arg1 connection:(id)arg2 serviceName:(id)arg3;
+ (_Bool)shouldAcceptConnection:(id)arg1 serviceName:(id)arg2 whitelistedServerInterface:(id)arg3 requestHandler:(id)arg4 validateConnection:(CDUnknownBlockType)arg5 setupClientProxy:(CDUnknownBlockType)arg6 interruptionHandler:(CDUnknownBlockType)arg7 invalidationHandler:(CDUnknownBlockType)arg8;

@end
