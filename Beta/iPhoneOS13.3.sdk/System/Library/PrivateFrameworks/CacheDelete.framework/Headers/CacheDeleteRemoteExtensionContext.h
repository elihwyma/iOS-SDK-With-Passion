/*
 Image: /System/Library/PrivateFrameworks/CacheDelete.framework/CacheDelete
 */

#import <NSExtensionContext.h>

@interface CacheDeleteRemoteExtensionContext : NSExtensionContext

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (id)init;
- (void)servicePurgeable:(int)arg1 info:(id)arg2 replyBlock:(CDUnknownBlockType)arg3;
- (void)servicePurge:(int)arg1 info:(id)arg2 replyBlock:(CDUnknownBlockType)arg3;
- (void)servicePeriodic:(int)arg1 info:(id)arg2 replyBlock:(CDUnknownBlockType)arg3;
- (void)serviceCancelPurge:(CDUnknownBlockType)arg1;
- (void)servicePing:(CDUnknownBlockType)arg1;
- (void)serviceNotify:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;
- (void)serviceCallback:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;

@end
