/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <TVMLKit/TVViewLayout.h>

@class NSArray, TVImageLayout, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUITextBadgeLayout : TVViewLayout

{
    unsigned long long _badgeKind;
    double _cornerRadius;
    NSArray *_gradientBgColors;
    VUITextLayout *_textLayout;
    TVImageLayout *_imageLayout;
}

@property (nonatomic) unsigned long long badgeKind;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) NSArray *gradientBgColors;
@property (retain, nonatomic) VUITextLayout *textLayout;
@property (retain, nonatomic) TVImageLayout *imageLayout;

+ (unsigned long long)textBadgeTypeFromString:(id)arg1;
+ (id)layoutWithViewElement:(id)arg1 withTextBadgeType:(unsigned long long)arg2;
+ (id)_spotlightBadgeLayoutWithViewElement:(id)arg1;
+ (id)_textBadgeLayoutWithViewElement:(id)arg1 withBadgeType:(unsigned long long)arg2;
+ (long long)_badgeSizeForElement:(id)arg1;
+ (id)_glyphImageLayoutWithTintColor:(id)arg1 viewElement:(id)arg2;
+ (id)layoutWithViewElement:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_updateTextColorWithViewElement:(id)arg1 defaultColor:(id)arg2;
- (void)_updateBgColorWithViewElement:(id)arg1 defaultColor:(id)arg2;

@end
