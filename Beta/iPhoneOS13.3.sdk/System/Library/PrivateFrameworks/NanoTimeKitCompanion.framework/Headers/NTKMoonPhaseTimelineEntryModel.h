/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>

@class NSDate, NSString;

@interface NTKMoonPhaseTimelineEntryModel : NTKTimelineEntryModel

{
    _Bool _currentEvent;
    NSString *_phaseName;
    unsigned long long _phaseNumber;
    long long _hemisphere;
    long long _event;
    NSDate *_eventDate;
    NSString *_animationGroup;
}

@property (retain, nonatomic) NSString *phaseName;
@property (nonatomic) unsigned long long phaseNumber;
@property (nonatomic) long long hemisphere;
@property (nonatomic) long long event;
@property (retain, nonatomic) NSDate *eventDate;
@property (nonatomic) _Bool currentEvent;
@property (retain, nonatomic) NSString *animationGroup;

+ (id)imageProviderWithOnePieceImage:(id)arg1;
+ (id)largeModular:(id)arg1;
+ (id)largeUtility:(id)arg1;
+ (id)smallModular:(id)arg1;
+ (id)smallUtility:(id)arg1;
+ (id)circular:(id)arg1 isMedium:(_Bool)arg2;
+ (id)extraLarge:(id)arg1;
+ (id)providerWithText:(id)arg1;
+ (id)textForMoonPhaseEvent:(long long)arg1;
+ (id)textForMoonPhaseEvent:(long long)arg1 useShort:(_Bool)arg2;

- (id)templateForComplicationFamily:(long long)arg1;

@end
