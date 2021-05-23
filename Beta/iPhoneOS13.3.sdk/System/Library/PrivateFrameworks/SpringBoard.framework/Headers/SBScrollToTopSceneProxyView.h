/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

@class SBSceneHandle;

@protocol SBScrollToTopSceneProxyViewDelegate;

@interface SBScrollToTopSceneProxyView : UIView

{
    SBSceneHandle *_sceneHandle;
    id <SBScrollToTopSceneProxyViewDelegate> _delegate;
}

@property (retain, nonatomic) SBSceneHandle *sceneHandle;
@property (weak, nonatomic) id <SBScrollToTopSceneProxyViewDelegate> delegate;

- (_Bool)isScrollEnabled;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (void)_scrollToTopFromTouchAtScreenLocation:(struct CGPoint)arg1 resultHandler:(CDUnknownBlockType)arg2;

@end
