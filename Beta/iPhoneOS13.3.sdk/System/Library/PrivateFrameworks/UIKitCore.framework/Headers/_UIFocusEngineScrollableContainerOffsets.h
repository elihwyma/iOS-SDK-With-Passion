/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@protocol UIFocusItemScrollableContainer, UIScrollViewDelegate;

__attribute__((visibility("hidden")))
@interface _UIFocusEngineScrollableContainerOffsets : NSObject

{
    id <UIFocusItemScrollableContainer> _scrollableContainer;
    id <UIScrollViewDelegate> _scrollDelegate;
    double _convergenceRate;
    CDUnknownBlockType _completion;
    struct CGPoint _lastContentOffset;
    struct CGPoint _targetContentOffset;
    struct CGPoint _lastVelocity;
}

@property (retain, nonatomic) id <UIFocusItemScrollableContainer> scrollableContainer;
@property (retain, nonatomic) id <UIScrollViewDelegate> scrollDelegate;
@property (nonatomic) struct CGPoint lastContentOffset;
@property (nonatomic) struct CGPoint targetContentOffset;
@property (nonatomic) double convergenceRate;
@property (nonatomic) struct CGPoint lastVelocity;
@property (copy, nonatomic) CDUnknownBlockType completion;

@end
