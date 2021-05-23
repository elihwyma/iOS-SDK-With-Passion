/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, SUControlAppearance, UIImage;

@interface SUSegmentedControlAppearance : NSObject

{
    SUControlAppearance *_backgroundImages;
    NSMutableDictionary *_dividerImages;
    UIImage *_optionsBackgroundImage;
    NSMutableDictionary *_titleTextAttributes;
}

@property (retain, nonatomic) UIImage *optionsBackgroundImage;

+ (id)defaultBarAppearance;
+ (id)defaultOptionsAppearanceForTintStyle:(long long)arg1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)titleTextAttributesForState:(unsigned long long)arg1;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (id)backgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;
- (id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3 barMetrics:(long long)arg4;
- (void)styleSegmentedControl:(id)arg1;
- (id)_newDividerImageKeyWithLeftState:(unsigned long long)arg1 rightState:(unsigned long long)arg2 barMetrics:(long long)arg3;

@end
