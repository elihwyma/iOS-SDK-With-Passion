/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@interface PPXPCServerHelper : NSObject

+ (_Bool)shouldAcceptConnection:(id)arg1 serviceName:(id)arg2 whitelistedServerInterface:(id)arg3 whitelistedClientInterface:(id)arg4 requestHandler:(id)arg5 validateConnection:(CDUnknownBlockType)arg6 setupClientProxy:(CDUnknownBlockType)arg7 interruptionHandler:(CDUnknownBlockType)arg8 invalidationHandler:(CDUnknownBlockType)arg9;
+ (_Bool)hasTrueBooleanEntitlement:(id)arg1 connection:(id)arg2;
+ (_Bool)checkForAndLogTrueBooleanEntitlement:(id)arg1 connection:(id)arg2 serviceName:(id)arg3;

@end
