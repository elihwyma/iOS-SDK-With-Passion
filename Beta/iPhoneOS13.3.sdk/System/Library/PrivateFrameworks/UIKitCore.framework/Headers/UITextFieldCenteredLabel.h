/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITextFieldLabel.h>

__attribute__((visibility("hidden")))
@interface UITextFieldCenteredLabel : UITextFieldLabel

{
    double _textXPosition;
    double _textWidth;
}

@property (nonatomic) double textXPosition;
@property (nonatomic) double textWidth;

- (_Bool)_isTextFieldCenteredLabel;

@end
