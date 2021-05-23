/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <UIKit/UIImagePickerController.h>

__attribute__((visibility("hidden")))
@interface WFImagePickerController : UIImagePickerController

{
    CDUnknownBlockType _magicTapHandler;
}

@property (copy, nonatomic) CDUnknownBlockType magicTapHandler;

- (_Bool)accessibilityPerformMagicTap;

@end
