/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface SBTransientOverlayDefaultTransitionContextProvider : NSObject

{
    _Bool _didPerformAlongsideTransitions;
    _Bool _isCompleted;
    NSMutableArray *_transitionBlocks;
    NSMutableArray *_transitionCompletionBlocks;
    _Bool _transitionCompletedSuccessfully;
    _Bool animated;
}

@property (nonatomic, getter=isAnimated) _Bool animated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)completeTransition:(_Bool)arg1;
- (void)performAlongsideTransitions;
- (void)transitionAlongsideUsingBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;

@end
