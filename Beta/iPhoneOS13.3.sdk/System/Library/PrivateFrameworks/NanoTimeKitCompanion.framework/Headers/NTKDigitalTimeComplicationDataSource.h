/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKComplicationDataSource.h>

@interface NTKDigitalTimeComplicationDataSource : NTKComplicationDataSource

+ (_Bool)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2;
+ (_Bool)acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2;

- (id)complicationApplicationIdentifier;
- (void)getLaunchURLForTimelineEntryDate:(id)arg1 timeTravelDate:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (unsigned long long)timelineAnimationBehavior;
- (_Bool)supportsTapAction;
- (_Bool)alwaysShowIdealizedTemplateInSwitcher;
- (id)currentSwitcherTemplate;
- (void)getSupportedTimeTravelDirectionsWithHandler:(CDUnknownBlockType)arg1;
- (void)getCurrentTimelineEntryWithHandler:(CDUnknownBlockType)arg1;
- (Class)richComplicationDisplayViewClassForDevice:(id)arg1;
- (id)_templateWithShouldDisplayIdealizeState:(_Bool)arg1;

@end
