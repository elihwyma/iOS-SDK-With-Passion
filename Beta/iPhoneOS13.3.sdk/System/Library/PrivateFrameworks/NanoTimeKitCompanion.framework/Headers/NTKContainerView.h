/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

@protocol NTKContainerViewLayoutDelegate;

@interface NTKContainerView : UIView

{
    struct {
        unsigned int layoutContainerView:1;
    } _delegateRespondsTo;
    id <NTKContainerViewLayoutDelegate> _layoutDelegate;
}

@property (weak, nonatomic) id <NTKContainerViewLayoutDelegate> layoutDelegate;

- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;

@end
