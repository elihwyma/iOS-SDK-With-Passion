/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <CoreUI/CUIPSDLayer.h>

@class CUIImage;

@interface CUIPSDImageLayer : CUIPSDLayer

{
    CUIImage *_image;
}

@property (nonatomic, readonly) struct CGImage *cgImageRef;

- (void)dealloc;
- (id)initWithCGImageRef:(struct CGImage *)arg1;

@end
