/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIControl.h>

@class NSString, UIImageView;

@interface NTKFaceViewTapControl : UIControl

{
    UIImageView *_highlightImageView;
}

@property (retain, nonatomic) UIImageView *highlightImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)shouldCancelTouchesInScrollview;

@end
