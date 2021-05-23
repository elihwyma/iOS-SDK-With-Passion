/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKComplicationController.h>

#import <NanoTimeKitCompanion/Swift-Protocol.h>

@class NSString;

@protocol NTKMonogramComplicationDisplay;

@interface NTKMonogramComplicationController : NTKComplicationController <Swift>

{
    NSString *_monogramText;
}

@property (weak, nonatomic, readonly) id <NTKMonogramComplicationDisplay> legacyDisplay;

+ (_Bool)_acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2;

- (void)_activate;
- (void)_deactivate;
- (void)_updateDisplay;
- (_Bool)hasTapAction;
- (void)setTimeTravelDate:(id)arg1 animated:(_Bool)arg2;
- (void)_handleMonogramTextReload;
- (void)_reloadMonogramText;
- (void)_configureForLegacyDisplay:(id)arg1;

@end
