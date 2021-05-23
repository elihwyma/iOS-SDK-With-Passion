/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface MFSimpleAnimationCoordinator : NSObject

{
    _Bool _animated;
    NSMutableArray *_animations;
    NSMutableArray *_completions;
}

@property (retain, nonatomic) NSMutableArray *animations;
@property (retain, nonatomic) NSMutableArray *completions;
@property (nonatomic, getter=isAnimated) _Bool animated;

- (id)init;
- (void)animateAlongsideAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initCoordinatorAnimated:(_Bool)arg1;
- (void)playAnimations;
- (void)playCompletions:(_Bool)arg1;

@end
