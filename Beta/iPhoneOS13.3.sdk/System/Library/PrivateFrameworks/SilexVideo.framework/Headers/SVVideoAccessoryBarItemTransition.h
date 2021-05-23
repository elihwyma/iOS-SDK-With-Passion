/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class SVVideoAccessoryBarItemTransitionContext;

@protocol SVAccessoryItem, SVVideoAccessoryItemTransitioning;

@interface SVVideoAccessoryBarItemTransition : NSObject

{
    id <SVAccessoryItem> _fromItem;
    id <SVAccessoryItem> _toItem;
    id <SVVideoAccessoryItemTransitioning> _transitionCoordinator;
    SVVideoAccessoryBarItemTransitionContext *_context;
}

@property (retain, nonatomic) SVVideoAccessoryBarItemTransitionContext *context;
@property (nonatomic, readonly) id <SVAccessoryItem> fromItem;
@property (nonatomic, readonly) id <SVAccessoryItem> toItem;
@property (nonatomic, readonly) id <SVVideoAccessoryItemTransitioning> transitionCoordinator;

- (void)cancel;
- (id)initWithFromItem:(id)arg1 toItem:(id)arg2 transitionCoordinator:(id)arg3;
- (void)performTransitionOnContainerView:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;

@end
