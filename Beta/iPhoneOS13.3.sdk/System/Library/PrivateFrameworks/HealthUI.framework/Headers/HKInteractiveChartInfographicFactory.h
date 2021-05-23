/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@interface HKInteractiveChartInfographicFactory : NSObject

+ (id)_environmentalAudioExposureInfographic;
+ (id)_headphoneAudioExposureInfographic;
+ (id)_itemForAudioInfographicWithClassification:(unsigned long long)arg1 descriptionKey:(id)arg2;
+ (id)_exposureLimitTextItem;
+ (id)_itemWithTitleKey:(id)arg1 valueKey:(id)arg2;
+ (id)_itemWithTitleKey:(id)arg1 valueKey:(id)arg2 hideSeparator:(_Bool)arg3;
+ (id)_whoExposureTextItem;
+ (id)_attributedSymbolForAudioClassification:(unsigned long long)arg1 textStyle:(id)arg2;
+ (id)_audioTitleAttributes;
+ (id)_tableTitleAttributes;
+ (_Bool)infographicSupportedForDisplayType:(id)arg1;
+ (id)infographicViewControllerForDisplayType:(id)arg1;

@end
