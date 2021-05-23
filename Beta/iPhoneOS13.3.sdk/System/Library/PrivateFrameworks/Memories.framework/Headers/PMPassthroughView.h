/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UIView.h>

@protocol PMPassthroughViewDelegate;

@interface PMPassthroughView : UIView

{
    id <PMPassthroughViewDelegate> _delegate;
}

@property (weak, nonatomic) id <PMPassthroughViewDelegate> delegate;

- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end
