/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIFoundation/NSTextAttachment.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface _UIImageTextAttachment : NSTextAttachment

{
    UIImage *_image;
    struct CGRect _bounds;
    struct {
        unsigned int explicitBounds:1;
    } _flags;
}

- (void)setImage:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (id)imageForBounds:(struct CGRect)arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3;
- (struct CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (id)_initWithImage:(id)arg1;
- (id)_imageAdaptedForTextAtIndex:(long long)arg1 inContainer:(id)arg2 sizeOnly:(_Bool)arg3;

@end
