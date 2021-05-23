/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <NSObject.h>

@class VCDailyMetricCheckIn, WFDailyStatusEvent;

@protocol VCDatabaseProvider;

@interface VCDailyMetricSubmitter : NSObject

{
    VCDailyMetricCheckIn *_dailyCheckIn;
    WFDailyStatusEvent *_event;
    id <VCDatabaseProvider> _databaseProvider;
}

@property (nonatomic, readonly) VCDailyMetricCheckIn *dailyCheckIn;
@property (nonatomic, readonly) WFDailyStatusEvent *event;
@property (nonatomic, readonly) id <VCDatabaseProvider> databaseProvider;

+ (void)scheduleWithDatabaseProvider:(id)arg1;
+ (void)scheduleWithScheduler:(id)arg1 databaseProvider:(id)arg2;
+ (void)performWithDatabaseProvider:(id)arg1;

- (void)perform;
- (_Bool)isAppInstalled;
- (id)initWithDatabaseProvider:(id)arg1;
- (_Bool)isSharingEnabled;
- (id)initWithDailyCheckIn:(id)arg1 event:(id)arg2 databaseProvider:(id)arg3;
- (_Bool)personalAutomationsPresent:(id *)arg1;
- (_Bool)homeAutomationsPresent:(id *)arg1;

@end
