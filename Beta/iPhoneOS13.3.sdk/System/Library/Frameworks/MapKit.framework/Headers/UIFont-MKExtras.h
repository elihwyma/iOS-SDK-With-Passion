/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIFont.h>

@interface UIFont (MKExtras)

+ (_Bool)_mapkit_accessibilityTextEnabled;
+ (id)_mapkit_preferredFontForTextStyleInTableViewCell:(id)arg1 addingSymbolicTraits:(unsigned int)arg2;
+ (id)_mapkit_preferredFontForTextStyleInTableViewCell:(id)arg1 weight:(double)arg2 contentSizeCategory:(id)arg3 symbolicTraits:(unsigned int)arg4;
+ (id)_contentSizeCategoryInTableViewCellWithContentSizeCategory:(id)arg1;
+ (id)_mapkit_preferredFontForTextStyle:(id)arg1 weight:(double)arg2 contentSizeCategory:(id)arg3 symbolicTraits:(unsigned int)arg4;
+ (id)_mapkit_preferredFontForTextStyleTimeDisplayInTableViewCell:(id)arg1 addingSymbolicTraits:(unsigned int)arg2 useMonospace:(_Bool)arg3;
+ (id)_mapkit_preferredFontForTextStyleInTableViewCell:(id)arg1;
+ (id)_mapkit_preferredFontForTextStyleInTableViewCell:(id)arg1 weight:(double)arg2;
+ (id)_mapkit_preferredFontForTextStyleTimeDisplayInTableViewCell:(id)arg1 addingSymbolicTraits:(unsigned int)arg2;
+ (_Bool)_mapkit_ax3TextEnabled;

- (double)_mapkit_scaledValueForValue:(double)arg1;
- (double)_mapkit_lineHeight;
- (id)_mapkit_fontByAddingFeaturesForTimeDisplayUseMonospace:(_Bool)arg1;
- (id)_mapkit_fontByAddingFeaturesForTimeDisplay;
- (id)_mapkit_fontByAddingFeaturesForTabularFigures;
- (id)_mapkit_fontWithWeight:(double)arg1;

@end
