/*
 Image: /System/Library/PrivateFrameworks/SoundBoardServices.framework/SoundBoardServices
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@protocol SBSImplementer;

@interface SBCannedDemoInterface : NSObject

{
    NSXPCConnection *_sbConnection;
    id <SBSImplementer> _sbProxy;
}

- (id)init;
- (void)siriUtteranceFileToBePlayed:(id)arg1 duckMusic:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;

@end
