/*
 Image: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
 */

@protocol AWRemoteClient

- (unsigned short)invalidate;
- (unsigned short)pingWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)setClientConfig:shouldReset:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)getLastEvent: /* Error: Ran out of types for this method. */;
- (unsigned short)resetAttentionLostTimerWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)pollWithTimeout:reply: /* Error: Ran out of types for this method. */;

@end
