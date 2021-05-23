/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <UIKit/UIView.h>

@interface FIUIHostingAreaLayoutView : UIView

{
    UIView *_hostedView;
}

@property (retain, nonatomic) UIView *hostedView;

+ (id)viewHostingView:(id)arg1;
+ (id)blackBackgroundViewHostingView:(id)arg1;

- (struct CGSize)intrinsicContentSize;
- (_Bool)translatesAutoresizingMaskIntoConstraints;

@end
