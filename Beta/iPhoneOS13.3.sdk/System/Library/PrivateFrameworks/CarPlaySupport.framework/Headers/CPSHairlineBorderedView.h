/*
 Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

#import <UIKit/UIView.h>

@class NSLayoutConstraint;

@interface CPSHairlineBorderedView : UIView

{
    UIView *_contentView;
    NSLayoutConstraint *_bottomConstraint;
}

@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, readonly) NSLayoutConstraint *bottomConstraint;

- (id)initWithContentView:(id)arg1 borderEdges:(unsigned long long)arg2;

@end
