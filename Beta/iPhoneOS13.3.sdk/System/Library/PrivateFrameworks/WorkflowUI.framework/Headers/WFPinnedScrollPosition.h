/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class UIView, WFScrollPositionPinningCollectionView;

@interface WFPinnedScrollPosition : NSObject

{
    WFScrollPositionPinningCollectionView *_scrollView;
    UIView *_view;
    struct CGPoint _center;
}

@property (weak, nonatomic, readonly) WFScrollPositionPinningCollectionView *scrollView;
@property (nonatomic, readonly) UIView *view;
@property (nonatomic, readonly) struct CGPoint center;

- (id)initWithScrollView:(id)arg1 view:(id)arg2;
- (struct CGRect)adjustedBounds:(struct CGRect)arg1 contentSize:(struct CGSize)arg2;

@end
