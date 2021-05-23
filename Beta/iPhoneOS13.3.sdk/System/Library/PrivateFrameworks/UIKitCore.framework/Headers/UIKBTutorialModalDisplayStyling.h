/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, UIColor;

__attribute__((visibility("hidden")))
@interface UIKBTutorialModalDisplayStyling : NSObject

{
    NSArray *_backgroundEffects;
    UIColor *_backgroundColor;
    UIColor *_mainTextColor;
    UIColor *_buttonTextColor;
}

@property (retain, nonatomic) NSArray *backgroundEffects;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *mainTextColor;
@property (retain, nonatomic) UIColor *buttonTextColor;

- (id)initWithKeyboardAppearance:(long long)arg1;
- (id)backgroundBlurEffects:(long long)arg1;

@end
