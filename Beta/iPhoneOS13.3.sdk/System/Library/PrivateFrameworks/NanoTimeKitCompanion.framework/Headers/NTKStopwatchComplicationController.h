/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKComplicationController.h>

#import <NanoTimeKitCompanion/Swift-Protocol.h>

@class NSDate;

@protocol NTKStopwatchComplicationDisplay;

@interface NTKStopwatchComplicationController : NTKComplicationController <Swift>

{
    NSDate *_timeTravelDate;
}

@property (weak, nonatomic, readonly) id <NTKStopwatchComplicationDisplay> legacyDisplay;
@property (retain, nonatomic) NSDate *timeTravelDate;

+ (_Bool)_acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2;

- (void)_activate;
- (void)_deactivate;
- (void)_updateDisplay;
- (_Bool)hasTapAction;
- (id)complicationApplicationIdentifier;
- (void)performTapAction;
- (void)setDataMode:(long long)arg1 forDisplayWrapper:(id)arg2;
- (void)setTimeTravelDate:(id)arg1 animated:(_Bool)arg2;
- (void)_configureForLegacyDisplay:(id)arg1;
- (void)_handleStopwatchChange;

@end
