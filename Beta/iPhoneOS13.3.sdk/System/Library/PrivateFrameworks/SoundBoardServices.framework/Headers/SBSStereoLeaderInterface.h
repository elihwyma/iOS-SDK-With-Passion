/*
 Image: /System/Library/PrivateFrameworks/SoundBoardServices.framework/SoundBoardServices
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@protocol SBSStereoLeaderRoleImplementer;

@interface SBSStereoLeaderInterface : NSObject

{
    NSXPCConnection *_sbConnection;
    id <SBSStereoLeaderRoleImplementer> _sbProxy;
}

- (id)init;
- (void)setDeviceAsStereoLeader:(_Bool)arg1 withOptions:(id)arg2;

@end
