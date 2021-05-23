/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UICellAccessory.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface UICellImageAccessory : UICellAccessory

{
    UIImage *_image;
}

@property (copy, nonatomic) UIImage *image;

- (id)view;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
