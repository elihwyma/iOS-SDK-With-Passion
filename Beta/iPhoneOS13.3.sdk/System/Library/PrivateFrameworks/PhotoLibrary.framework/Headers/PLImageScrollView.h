/*
 Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <UIKit/UIScrollView.h>

@interface PLImageScrollView : UIScrollView

{
    _Bool _adjustZoomScaleAfterRotation;
}

@property (nonatomic) _Bool adjustZoomScaleAfterRotation;

- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_centerContentIfNecessary;
- (void)willAnimateRotationToInterfaceOrientation:(id)arg1;

@end
