/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIView.h>

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface PUPhotoEditOverlayBadge : UIView

{
    NSString *_text;
    UILabel *_label;
    struct UIEdgeInsets _insets;
}

@property (nonatomic, readonly) UILabel *label;
@property (nonatomic, readonly) struct UIEdgeInsets insets;
@property (copy, nonatomic) NSString *text;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_updateLabel;

@end
