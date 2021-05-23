/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UILegibilityView.h>

@class NSString, UIFont;

@interface _UILegibilityLabel : _UILegibilityView

{
    _Bool _usesSecondaryColor;
    NSString *_string;
    UIFont *_font;
}

@property (copy, nonatomic) NSString *string;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic, readonly) _Bool usesSecondaryColor;
@property (nonatomic, readonly) double baselineOffset;

- (void)dealloc;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateImage;
- (id)initWithSettings:(id)arg1 strength:(double)arg2 string:(id)arg3 font:(id)arg4 options:(long long)arg5;
- (id)initWithSettings:(id)arg1 strength:(double)arg2 string:(id)arg3 font:(id)arg4;

@end
