/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIStatusBarItemView.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIStatusBarDateTimeItemView : UIStatusBarItemView

{
    _Bool _useCustomFadeAnimation;
    NSString *_dateTimeString;
}

@property (copy, nonatomic) NSString *dateTimeString;
@property (nonatomic) _Bool useCustomFadeAnimation;

+ (const char *)_cStringFromData:(CDStruct_0942cde0 *)arg1;

- (long long)textStyle;
- (void)setFrame:(struct CGRect)arg1;
- (id)accessibilityHUDRepresentation;
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;
- (void)setVisible:(_Bool)arg1 frame:(struct CGRect)arg2 duration:(double)arg3;
- (id)contentsImage;
- (double)extraRightPadding;
- (_Bool)shouldTintContentImage;

@end
