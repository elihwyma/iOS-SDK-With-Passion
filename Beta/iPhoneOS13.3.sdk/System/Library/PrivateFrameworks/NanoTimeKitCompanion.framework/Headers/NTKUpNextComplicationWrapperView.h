/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

@interface NTKUpNextComplicationWrapperView : UIView

{
    UIView *_wrappedView;
}

@property (nonatomic, readonly) UIView *wrappedView;

- (void)layoutSubviews;
- (void)setWrappedView:(id)arg1;

@end
