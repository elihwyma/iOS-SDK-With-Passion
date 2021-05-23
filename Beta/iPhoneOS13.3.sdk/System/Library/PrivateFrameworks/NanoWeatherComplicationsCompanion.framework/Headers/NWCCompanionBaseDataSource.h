/*
 Image: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion
 */

#import <ClockComplications/CLKCComplicationBundleDataSource.h>

@class CLKComplicationTemplate;

@interface NWCCompanionBaseDataSource : CLKCComplicationBundleDataSource

{
    CLKComplicationTemplate *_template;
}

+ (id)localizedAppName;
+ (id)appIdentifier;
+ (id)complicationLocalizationKey;

- (void)dealloc;
- (void)_localeDidChange:(id)arg1;
- (id)_complicationTemplate;
- (id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3;
- (id)currentSwitcherTemplate;

@end
