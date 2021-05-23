/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UIView.h>

@protocol EKLayoutContainerViewDelegate;

@interface EKLayoutContainerView : UIView

{
    id <EKLayoutContainerViewDelegate> _delegate;
}

@property (weak, nonatomic) id <EKLayoutContainerViewDelegate> delegate;

- (void)layoutSubviews;

@end
