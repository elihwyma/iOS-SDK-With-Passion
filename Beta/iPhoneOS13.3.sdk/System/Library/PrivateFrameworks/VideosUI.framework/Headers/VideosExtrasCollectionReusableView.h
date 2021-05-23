/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UICollectionReusableView.h>

@class MPUContentSizeLayoutConstraint, NSArray, NSLayoutConstraint, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface VideosExtrasCollectionReusableView : UICollectionReusableView

{
    UILabel *_textLabel;
    MPUContentSizeLayoutConstraint *_textTopConstraint;
    NSLayoutConstraint *_textLeftConstraint;
    MPUContentSizeLayoutConstraint *_textBottomConstraint;
    NSLayoutConstraint *_textRightConstraint;
    struct UIEdgeInsets _labelInsets;
    UIView *_borderView;
    NSArray *_borderConstraints;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (void)configureForHeaderElement:(id)arg1 headerStyle:(id)arg2;
- (void)_configureConstraintsForInsets:(struct UIEdgeInsets)arg1;

@end
