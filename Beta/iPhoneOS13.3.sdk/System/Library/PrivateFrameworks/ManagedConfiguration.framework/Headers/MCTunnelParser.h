/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Foundation/NSObject.h>

@interface MCTunnelParser : NSObject

+ (id)responseWithStatus:(id)arg1;
+ (id)responseWithError:(id)arg1;

- (id)_commandDisconnect:(id)arg1;
- (void)processRequest:(id)arg1 assertion:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end
