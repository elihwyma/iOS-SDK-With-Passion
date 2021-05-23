/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKComplicationController.h>

@class CLKComplicationTemplate;

@interface NTKTimelineComplicationController : NTKComplicationController

{
    _Bool _ignoreNewTemplates;
    CLKComplicationTemplate *_alwaysOnTemplate;
    CLKComplicationTemplate *_lockedTemplate;
}

@property (nonatomic, readonly) CLKComplicationTemplate *alwaysOnTemplate;
@property (nonatomic) _Bool ignoreNewTemplates;
@property (nonatomic, readonly) CLKComplicationTemplate *lockedTemplate;
@property (nonatomic, readonly) CLKComplicationTemplate *activeDisplayTemplate;

+ (_Bool)_isLegacy;

- (unsigned long long)_animationForTimelineEntryTransitionFrom:(id)arg1 to:(id)arg2 withAnimationBehavior:(unsigned long long)arg3;
- (void)_aggdAppLaunchForTimeTravelDate:(id)arg1 timelineEntryDate:(id)arg2;

@end
