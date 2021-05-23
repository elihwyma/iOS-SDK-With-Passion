/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface PUReviewInstructionalView : UIView

{
    UILabel *__instructionalLabel;
}

@property (nonatomic, readonly) UILabel *_instructionalLabel;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_commonPUReviewInstructionalViewInitialization;

@end
