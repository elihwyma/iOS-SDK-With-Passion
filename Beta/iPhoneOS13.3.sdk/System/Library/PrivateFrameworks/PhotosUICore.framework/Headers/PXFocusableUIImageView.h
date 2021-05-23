/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIImageView.h>

@interface PXFocusableUIImageView : UIImageView

{
    _Bool _allowsFocus;
}

@property (nonatomic) _Bool allowsFocus;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)canBecomeFocused;

@end
