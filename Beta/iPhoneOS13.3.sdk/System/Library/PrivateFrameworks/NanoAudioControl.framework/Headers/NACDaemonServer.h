/*
 Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

#import <Foundation/NSObject.h>

@class NACIDSServer;

@interface NACDaemonServer : NSObject

{
    NACIDSServer *_idsServer;
}

+ (id)gizmoServer;
+ (id)companionServer;

@end
