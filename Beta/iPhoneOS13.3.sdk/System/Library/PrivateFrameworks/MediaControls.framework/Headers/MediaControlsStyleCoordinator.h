/*
 Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface MediaControlsStyleCoordinator : NSObject

{
    NSMutableArray *_animations;
    NSMutableArray *_completions;
}

- (void)animateAlongsideTransition:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performAnimations;
- (void)performCompletions;

@end
