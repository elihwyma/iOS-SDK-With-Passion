/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@class NSArray, PXSnapStripViewInternal;

@interface PXSnapStripView : UIView

{
    PXSnapStripViewInternal *_stripView;
    NSArray *_indicatorInfos;
}

@property (copy, nonatomic) NSArray *indicatorInfos;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setIndicatorInfos:(id)arg1 animated:(_Bool)arg2;
- (void)_updateStripView:(_Bool)arg1;

@end
