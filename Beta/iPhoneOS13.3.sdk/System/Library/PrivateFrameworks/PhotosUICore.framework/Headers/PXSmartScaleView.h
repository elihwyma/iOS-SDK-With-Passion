/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@interface PXSmartScaleView : UIView

{
    struct CGSize _displaySize;
}

@property struct CGSize displaySize;
@property (readonly) double displayScale;

- (void)setFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewScaleDidChange;

@end
