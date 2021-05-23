/*
 Image: /System/Library/PrivateFrameworks/SoundBoardServices.framework/SoundBoardServices
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@protocol SBSImplementer;

@interface SBSSystemInterface : NSObject

{
    NSXPCConnection *_sbConnection;
    id <SBSImplementer> _sbProxy;
}

- (id)init;
- (void)reboot:(id)arg1;
- (void)requestDeferredReboot;

@end
