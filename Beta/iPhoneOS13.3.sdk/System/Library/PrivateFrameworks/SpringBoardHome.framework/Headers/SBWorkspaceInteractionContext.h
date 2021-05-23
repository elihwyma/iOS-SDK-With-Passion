/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@class UIGestureRecognizer, UIInteractionProgress;

@interface SBWorkspaceInteractionContext : NSObject

{
    UIInteractionProgress *_interactionProgress;
    UIGestureRecognizer *_gestureRecognizer;
}

@property (nonatomic, readonly) UIInteractionProgress *interactionProgress;
@property (nonatomic, readonly) UIGestureRecognizer *gestureRecognizer;

- (id)initWithInteractionProgress:(id)arg1;
- (id)initWithGestureRecognizer:(id)arg1;

@end
