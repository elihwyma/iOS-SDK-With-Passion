/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/Swift-Protocol.h>

@protocol GameControllerDaemon <Swift>

- (unsigned short)ping;
- (unsigned short)setUserActivityUserInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)microControllerWithUDID:setDigitizerX:digitizerY:withTimeStamp:touchDown: /* Error: Ran out of types for this method. */;
- (unsigned short)startForwardingToApplicationNamed:pid:bundlePath: /* Error: Ran out of types for this method. */;
- (unsigned short)startBonjourService;
- (unsigned short)addController:forward: /* Error: Ran out of types for this method. */;
- (unsigned short)removeController:forward: /* Error: Ran out of types for this method. */;
- (unsigned short)controllerWithUDID:setValue:forElement:forward: /* Error: Ran out of types for this method. */;
- (unsigned short)controllerWithUDID:setArrayValue:forElement:forward: /* Error: Ran out of types for this method. */;
- (unsigned short)appWillEnterForeground;
- (unsigned short)appDidEnterBackground;
- (unsigned short)appWillEnterForegroundWithPID: /* Error: Ran out of types for this method. */;
- (unsigned short)appDidEnterBackgroundWithPID: /* Error: Ran out of types for this method. */;
- (unsigned short)requestConnectedHosts;

@end
