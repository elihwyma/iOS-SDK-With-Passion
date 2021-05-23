/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIImage.h>

__attribute__((visibility("hidden")))
@interface _UIResizableImage : UIImage

{
    _Bool _alwaysStretches;
    _Bool _isSubimage;
    struct UIEdgeInsets _subimageInsets;
    struct UIEdgeInsets _capInsets;
}

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)_isResizable;
- (struct UIEdgeInsets)capInsets;
- (_Bool)_suppressesAccessibilityHairlineThickening;
- (id)_resizableImageWithCapMask:(int)arg1;
- (void)_configureImage:(id)arg1 assumePreconfigured:(_Bool)arg2;
- (void)_setCapInsets:(struct UIEdgeInsets)arg1;
- (void)_setAlwaysStretches:(_Bool)arg1;
- (struct CGRect)_contentStretchInPixels;
- (struct CGRect)_contentInsetsInPixels:(struct UIEdgeInsets)arg1 emptySizeFallback:(CDUnknownBlockType)arg2;
- (struct CGRect)_contentRectInPixels;
- (long long)resizingMode;
- (id)initWithImage:(id)arg1 capInsets:(struct UIEdgeInsets)arg2;
- (void)_setSubimageInsets:(struct UIEdgeInsets)arg1;
- (_Bool)_isSubimage;
- (_Bool)_isTiledWhenStretchedToSize:(struct CGSize)arg1;

@end
