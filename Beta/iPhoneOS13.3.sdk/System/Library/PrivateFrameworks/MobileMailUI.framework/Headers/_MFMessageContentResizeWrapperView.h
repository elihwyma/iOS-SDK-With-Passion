/*
 Image: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
 */

#import <UIKit/UIView.h>

@interface _MFMessageContentResizeWrapperView : UIView

{
    UIView *_snapshotView;
    double _snapshotViewYOrigin;
}

@property (retain, nonatomic) UIView *snapshotView;
@property (nonatomic) double snapshotViewYOrigin;

- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 snapshotView:(id)arg2;

@end
