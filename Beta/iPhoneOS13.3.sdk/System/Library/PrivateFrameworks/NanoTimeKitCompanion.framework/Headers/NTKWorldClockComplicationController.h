/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKComplicationController.h>

#import <NanoTimeKitCompanion/Swift-Protocol.h>

@class NSDate, NTKWorldClockComplication;

@protocol NTKWorldClockComplicationDisplay;

@interface NTKWorldClockComplicationController : NTKComplicationController <Swift>

{
    struct {
        unsigned int wantsShortCity:1;
        unsigned int wantsLongCity:1;
    } _displayFlags;
    NSDate *_timeTravelDate;
}

@property (weak, nonatomic, readonly) id <NTKWorldClockComplicationDisplay> legacyDisplay;
@property (nonatomic, readonly) NTKWorldClockComplication *complication;

+ (_Bool)_acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2;

- (void)_activate;
- (void)_deactivate;
- (void)_updateDisplay;
- (void)_handleTimeZoneChange;
- (void)_handleLocaleChange;
- (_Bool)hasTapAction;
- (id)complicationApplicationIdentifier;
- (void)performTapAction;
- (void)setPauseDate:(id)arg1;
- (void)setDataMode:(long long)arg1 forDisplayWrapper:(id)arg2;
- (void)setTimeTravelDate:(id)arg1 animated:(_Bool)arg2;
- (void)_configureForLegacyDisplay:(id)arg1;
- (void)_handleAbbreviationStoreChange:(id)arg1;
- (void)_startTimeTravelAnimated:(_Bool)arg1;
- (void)_endTimeTravelAnimated:(_Bool)arg1;

@end
