/*
 Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

#import <UIKit/UIColor.h>

@interface UIColor (NFLAdditions)

@property (nonatomic, readonly) double red;
@property (nonatomic, readonly) double green;
@property (nonatomic, readonly) double blue;
@property (nonatomic, readonly) double alpha;
@property (nonatomic, readonly) double hue;
@property (nonatomic, readonly) double saturation;
@property (nonatomic, readonly) double brightness;

+ (id)nfl_keyColor;
+ (id)nfl_keyHighlightedColor;
+ (id)nfl_dynamicColor:(id)arg1 withDarkStyleVariant:(id)arg2;
+ (id)nfl_accessoryColorForTextColor:(id)arg1 backgroundColor:(id)arg2;
+ (id)nfl_accessoryIconColorForTextColor:(id)arg1 backgroundColor:(id)arg2;
+ (id)nfl_numberedCircleColor;
+ (id)nfl_bylineFontColor;
+ (long long)nfl_binForColor:(id)arg1;
+ (id)nfl_plusLEffectWithForegroundColor:(id)arg1 backgroundColor:(id)arg2;
+ (id)nfl_plusDEffectWithForegroundColor:(id)arg1 backgroundColor:(id)arg2;
+ (id)nfl_accessoryColorForNonDynamicTextColor:(id)arg1 backgroundColor:(id)arg2;
+ (id)nfl_accessoryIconColorForNonDynamicTextColor:(id)arg1 backgroundColor:(id)arg2;
+ (id)nfl_subscriptionGlyphColorForNonDynamicTextColor:(id)arg1 backgroundColor:(id)arg2;
+ (id)nfl_colorWithHexString:(id)arg1;
+ (id)nfl_defaultSystemTintColor;
+ (id)nfl_subscriptionOnlyStickercolor;
+ (id)nfl_subscriptionOnlyTextcolor;
+ (id)nfl_sponsoredStoryTextcolor;
+ (id)nfl_savedStoriesHeadercolor;
+ (id)nfl_forYouStoriesHeadercolor;
+ (id)nfl_topStoriesHeadercolor;
+ (id)nfl_trendingStoriesHeadercolor;
+ (id)nfl_editorialPicksHeadercolor;
+ (id)nfl_topicColorsArray;
+ (id)nfl_colorComponentsFromString:(id)arg1;
+ (id)nfl_colorByInterpolatingFromColor:(id)arg1 toColor:(id)arg2 percent:(double)arg3;
+ (long long)nfl_binUsingBrightnessForColor:(id)arg1;
+ (id)nfl_subscriptionGlyphColorForTextColor:(id)arg1 backgroundColor:(id)arg2;
+ (id)nfl_likeDislikeGlyphCellColor;
+ (id)nfl_saveGlyphCellColor;
+ (id)nfl_colorBetweenGradientColors:(id)arg1 andColor:(id)arg2 atPosition:(double)arg3;

- (void)print;
- (_Bool)isEqualToColor:(id)arg1;
- (void)_getHSBA:(CDUnknownBlockType)arg1;
- (void)_getRGBA:(CDUnknownBlockType)arg1;
- (_Bool)isAboutEqualToColor:(id)arg1;
- (id)nfl_description;
- (id)nfl_colorOrBlackIfTooBright;

@end
