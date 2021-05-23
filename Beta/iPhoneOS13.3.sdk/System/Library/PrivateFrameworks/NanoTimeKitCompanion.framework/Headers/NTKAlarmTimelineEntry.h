/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>

@class NSDate, NSString;

@interface NTKAlarmTimelineEntry : NTKTimelineEntryModel

{
    unsigned long long _entryType;
    NSString *_alarmLabel;
    NSDate *_fireDate;
    NSDate *_snoozeDate;
}

@property (nonatomic) unsigned long long entryType;
@property (retain, nonatomic) NSString *alarmLabel;
@property (retain, nonatomic) NSDate *fireDate;
@property (retain, nonatomic) NSDate *snoozeDate;

+ (id)companionModel;

- (id)description;
- (id)_newSmallModularTemplate;
- (id)_newLargeModularTemplate;
- (id)_newCircularSmallTemplate;
- (id)_newSmallFlatUtilityTemplate;
- (id)_newExtraLargeTemplate;
- (id)_newCircularMediumTemplate;
- (id)templateForComplicationFamily:(long long)arg1;
- (id)_newLargeUtilityTemplate;
- (id)_newSignatureCornerTemplate;
- (id)_newSignatureCircularTemplate;
- (id)_newSignatureBezelTemplate;
- (id)_newSignatureRectangularTemplate;
- (id)_activeStateTimeTextProvider;
- (id)_snoozeStateDateTextProvider;
- (id)_modularSmallAlarmInactiveImageProvider;
- (void)_makeAlarmStackTextTimeProvider:(id *)arg1 designatorProvider:(id *)arg2 designatorExists:(_Bool *)arg3 designatorLeads:(_Bool *)arg4;
- (id)_circularTemplateForAlarm:(_Bool)arg1;
- (id)_largeUtilityInactiveImageProvider;
- (id)_extraLargeAlarmInactiveImageProvider;
- (id)_activeStateTimeRelativeDateTextProvider;

@end
