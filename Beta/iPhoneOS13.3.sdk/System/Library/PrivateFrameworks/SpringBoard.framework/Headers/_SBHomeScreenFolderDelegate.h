/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@protocol SBFolderControllerDelegate;

@interface _SBHomeScreenFolderDelegate : NSObject

{
    id <SBFolderControllerDelegate> _forwardingTarget;
}

@property (retain, nonatomic) id <SBFolderControllerDelegate> forwardingTarget;

- (_Bool)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)backgroundViewForDockForRootFolderController:(id)arg1;

@end
