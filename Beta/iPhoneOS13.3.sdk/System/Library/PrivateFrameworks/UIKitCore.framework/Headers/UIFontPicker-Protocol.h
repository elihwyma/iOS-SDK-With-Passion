/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class UIFontDescriptor;

@protocol UIFontPickerDelegate;

@protocol UIFontPicker <Swift>

@property (retain, nonatomic) UIFontDescriptor *selectedFontDescriptor;
@property (weak, nonatomic) id <UIFontPickerDelegate> delegate;

@end
