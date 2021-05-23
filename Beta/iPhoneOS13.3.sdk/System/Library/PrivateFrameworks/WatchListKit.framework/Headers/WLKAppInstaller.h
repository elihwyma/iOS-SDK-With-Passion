/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

@protocol OS_dispatch_queue;

@interface WLKAppInstaller : NSObject

{
    NSObject<OS_dispatch_queue> *_installQueue;
    NSMutableSet *_installSessions;
}

+ (id)defaultAppInstaller;

- (id)init;
- (void)installAppForInstallable:(id)arg1 offer:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)installAppForInstallable:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;

@end
