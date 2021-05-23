/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIScrollView.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface UITableViewWrapperView : UIScrollView

{
    NSMutableArray *_stuckToBackViews;
}

@property (nonatomic, readonly) NSArray *stuckToBackViews;

- (void)dealloc;
- (void)setBounds:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)sendSubviewToBack:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)bringSubviewToFront:(id)arg1;
- (void)willRemoveSubview:(id)arg1;
- (void)_addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_stickViewToBack:(id)arg1;
- (void)_unstickView:(id)arg1;
- (_Bool)_forwardsToParentScroller;

@end
