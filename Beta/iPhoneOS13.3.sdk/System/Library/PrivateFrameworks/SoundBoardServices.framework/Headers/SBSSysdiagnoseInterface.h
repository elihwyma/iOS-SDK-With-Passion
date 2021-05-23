/*
 Image: /System/Library/PrivateFrameworks/SoundBoardServices.framework/SoundBoardServices
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@protocol SBSImplementer;

@interface SBSSysdiagnoseInterface : NSObject

{
    NSXPCConnection *_sbConnection;
    id <SBSImplementer> _sbProxy;
}

- (id)init;
- (void)sysdiagnoseHasStarted:(_Bool)arg1;

@end
