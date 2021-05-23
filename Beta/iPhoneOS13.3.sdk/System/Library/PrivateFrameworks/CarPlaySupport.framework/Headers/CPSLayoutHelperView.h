/*
 Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

#import <UIKit/UIView.h>

@protocol CPSLayoutHelperViewDelegate;

@interface CPSLayoutHelperView : UIView

{
    id <CPSLayoutHelperViewDelegate> _layoutDelegate;
}

@property (weak, nonatomic) id <CPSLayoutHelperViewDelegate> layoutDelegate;

- (id)init;
- (void)layoutSubviews;

@end
