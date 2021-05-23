/*
 Image: /System/Library/Frameworks/LocalAuthentication.framework/Support/SharedUtils.framework/SharedUtils
 */

@protocol LADaemonXPC

- (unsigned short)connectToExistingContext:callback:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)connectToContextWithUUID:callback:token:senderAuditTokenData:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)prearmTouchIdWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)notifyEvent:options:reply: /* Error: Ran out of types for this method. */;

@end
