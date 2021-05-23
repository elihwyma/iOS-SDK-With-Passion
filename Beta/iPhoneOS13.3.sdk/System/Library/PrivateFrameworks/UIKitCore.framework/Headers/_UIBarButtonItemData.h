/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIBarAppearanceData.h>

@class NSDictionary, NSString, UIImage, UIImageSymbolConfiguration;

@protocol _UIBarButtonItemDataFallback;

__attribute__((visibility("hidden")))
@interface _UIBarButtonItemData : _UIBarAppearanceData

{
    NSDictionary *_titleTextAttributes[4];
    UIImage *_backgroundImage[4];
    struct UIOffset _titlePositionAdjustment[4];
    struct UIOffset _backgroundImagePositionAdjustment[4];
    UIImageSymbolConfiguration *_preferredSymbolConfiguration;
    UIImageSymbolConfiguration *_compactPreferredSymbolConfiguration;
    UIImage *_backIndicatorImage;
    UIImage *_backIndicatorTransitionMaskImage;
    id <_UIBarButtonItemDataFallback> _fallback;
    struct {
        unsigned int hasUserFont:1;
        unsigned int hasUserColor:1;
        unsigned int hasUserTitlePosition:1;
        unsigned int hasUserBackgroundImage:1;
        unsigned int hasUserBackgroundImagePosition:1;
    } _stateFlags[4];
    struct {
        unsigned int isBackButtonData:1;
    } _dataFlags;
    long long _style;
}

@property (nonatomic, readonly) long long style;
@property (nonatomic, readonly) _Bool isBackButtonData;
@property (nonatomic, readonly) id <_UIBarButtonItemDataFallback> fallback;
@property (nonatomic, readonly) UIImageSymbolConfiguration *preferredSymbolConfiguration;
@property (nonatomic, readonly) UIImageSymbolConfiguration *compactPreferredSymbolConfiguration;
@property (nonatomic, readonly) UIImage *backIndicatorImage;
@property (nonatomic, readonly) UIImage *backIndicatorTransitionMaskImage;
@property (nonatomic, readonly) UIImage *compactBackIndicatorImage;
@property (nonatomic, readonly) UIImage *compactBackIndicatorTransitionMaskImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)decodeFromCoder:(id)arg1 prefix:(id)arg2;
+ (id)standardItemDataForStyle:(long long)arg1;
+ (id)standardBackButtonData;

- (id)initWithStyle:(long long)arg1;
- (void)encodeToCoder:(id)arg1 prefix:(id)arg2;
- (void)describeInto:(id)arg1;
- (id)replicate;
- (long long)hashInto:(long long)arg1;
- (_Bool)checkEqualTo:(id)arg1;
- (id)backgroundImageForState:(long long)arg1;
- (struct UIOffset)backgroundImagePositionAdjustmentForState:(long long)arg1;
- (struct UIOffset)titlePositionAdjustmentForState:(long long)arg1;
- (id)titleTextAttributesForState:(long long)arg1;
- (void)setBackgroundImage:(id)arg1 forState:(long long)arg2;
- (void)setTitleTextAttributes:(id)arg1 forState:(long long)arg2;
- (void)setTitlePositionAdjustment:(struct UIOffset)arg1 forState:(long long)arg2;
- (void)setBackgroundImagePositionAdjustment:(struct UIOffset)arg1 forState:(long long)arg2;
- (id)dataWithNewFallback:(id)arg1;
- (id)copyAsBackButtonDataWithIndicatorsAndFallbackFrom:(id)arg1;
- (void)setBackIndicatorImage:(id)arg1 transitionMaskImage:(id)arg2;
- (void)resetBackIndicatorImages;
- (id)fontForState:(long long)arg1 style:(long long)arg2;
- (id)colorForState:(long long)arg1 style:(long long)arg2;
- (struct UIOffset)titlePositionAdjustmentForState:(long long)arg1 style:(long long)arg2;
- (id)backgroundImageForState:(long long)arg1 style:(long long)arg2;
- (struct UIOffset)backgroundImagePositionAdjustmentForState:(long long)arg1 style:(long long)arg2;
- (void)_decodeTitleTextAttributesFromCoder:(id)arg1 prefix:(id)arg2;
- (void)_decodeBackgroundImagesFromCoder:(id)arg1 prefix:(id)arg2;
- (void)_decodeTitlePositionAdjustmentsFromCoder:(id)arg1 prefix:(id)arg2;
- (void)_decodeBackgroundPositionAdjustmentsFromCoder:(id)arg1 prefix:(id)arg2;
- (id)_fallbackFontForState:(long long)arg1;
- (id)_fallbackColorForState:(long long)arg1;

@end
