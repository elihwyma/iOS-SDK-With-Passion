/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@class UILabel;

@interface PXIndexView : UIView

{
    UIView *_frameView;
    UILabel *_label;
}

- (id)init;
- (void)setIndex:(unsigned long long)arg1;
- (void)layoutSubviews;

@end
