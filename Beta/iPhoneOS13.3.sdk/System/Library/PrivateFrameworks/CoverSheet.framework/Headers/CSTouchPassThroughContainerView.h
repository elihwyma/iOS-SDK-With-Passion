/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <UIKit/UIView.h>

@protocol CSTouchPassThroughContainerViewDelegate;

@interface CSTouchPassThroughContainerView : UIView

{
    id <CSTouchPassThroughContainerViewDelegate> _delegate;
}

@property (weak, nonatomic) id <CSTouchPassThroughContainerViewDelegate> delegate;

- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end
