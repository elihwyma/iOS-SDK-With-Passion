/*
 Image: /System/Library/PrivateFrameworks/SoundBoardServices.framework/SoundBoardServices
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@protocol SBSImplementer;

@interface SBSAppleCareInterface : NSObject

{
    NSXPCConnection *_sbConnection;
    id <SBSImplementer> _sbProxy;
}

- (id)init;
- (void)setAppleCareIsEnabled:(_Bool)arg1 withOptions:(id)arg2;

@end
