/*
 Image: /System/Library/PrivateFrameworks/SoundBoardServices.framework/SoundBoardServices
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@protocol SBSImplementer;

@interface SBSDebugInterface : NSObject

{
    NSXPCConnection *_sbConnection;
    id <SBSImplementer> _sbProxy;
}

- (id)init;
- (void)getAllDebugInfo:(CDUnknownBlockType)arg1;
- (void)getTuningInfo:(CDUnknownBlockType)arg1;
- (void)setTuningInfoOnBox:(id)arg1 at:(id)arg2 withValue:(float)arg3;
- (void)playTone:(unsigned int)arg1;
- (void)stopTone:(unsigned int)arg1;
- (void)getUserDefaults:(CDUnknownBlockType)arg1;
- (void)setUserDefaults:(id)arg1 withValue:(id)arg2;
- (void)resetAllUserDefaults;
- (void)resetUserDefault:(id)arg1;

@end
