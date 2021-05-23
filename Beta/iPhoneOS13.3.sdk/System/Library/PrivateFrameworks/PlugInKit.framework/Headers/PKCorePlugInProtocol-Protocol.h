/*
 Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
 */

@class NSDictionary;

@protocol PKCorePlugInProtocol

@property (copy) NSDictionary *_userInfo;

- (unsigned short)prepareUsingPlugIn:hostProtocol:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)prepareUsing:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)beginUsingPlugIn:ready: /* Error: Ran out of types for this method. */;
- (unsigned short)hostHasControl;
- (unsigned short)shutdownPlugIn;
- (unsigned short)prefsObjectForKey:inPlugIn:result: /* Error: Ran out of types for this method. */;
- (unsigned short)prefsSetObject:forKey:inPlugIn:result: /* Error: Ran out of types for this method. */;

@end
