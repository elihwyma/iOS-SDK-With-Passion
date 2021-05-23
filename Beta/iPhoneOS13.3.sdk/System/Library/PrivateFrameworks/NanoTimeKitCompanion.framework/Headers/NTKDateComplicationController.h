/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKComplicationController.h>

#import <NanoTimeKitCompanion/Swift-Protocol.h>

@class NSDate, NTKDateComplication;

@protocol NTKDateComplicationDisplay;

@interface NTKDateComplicationController : NTKComplicationController <Swift>

{
    unsigned long long _displayDateStyle;
    NSDate *_timeTravelDate;
}

@property (nonatomic, readonly) NTKDateComplication *complication;
@property (weak, nonatomic, readonly) id <NTKDateComplicationDisplay> legacyDisplay;

+ (id)textForDateStyle:(unsigned long long)arg1;
+ (_Bool)_acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_textForDate:(id)arg1 dateStyle:(unsigned long long)arg2;

- (void)_activate;
- (void)_deactivate;
- (void)_updateDisplay;
- (_Bool)hasTapAction;
- (id)complicationApplicationIdentifier;
- (void)performTapAction;
- (void)setTimeTravelDate:(id)arg1 animated:(_Bool)arg2;
- (void)_configureForLegacyDisplay:(id)arg1;
- (void)_handleTimeChangeNotification;
- (void)_setTextInDisplayIfNeededWithDate:(id)arg1;

@end
