/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@class NSArray, UIImageView, UILabel;

@interface PXPeopleDetailStatusOverlayView : UIView

{
    UIImageView *_keyAssetImageView;
    UILabel *_messageField;
    UILabel *_subtitleField;
    NSArray *_viewConstraints;
}

@property (copy, nonatomic) NSArray *viewConstraints;
@property (nonatomic, readonly) UIImageView *keyAssetImageView;
@property (nonatomic, readonly) UILabel *messageField;
@property (nonatomic, readonly) UILabel *subtitleField;

- (void)updateConstraints;
- (double)preferredHeightForWidth:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1 keyImage:(id)arg2 message:(id)arg3 subtitleText:(id)arg4;
- (double)_imageHeightMultiplier;

@end
