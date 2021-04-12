//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClockKit/CLKComplicationClient-Protocol.h>

@class NSArray, NSDate, NSSet, NSString, NSXPCConnection;
@protocol CLKComplicationDataSource;

@interface CLKComplicationServer : NSObject <CLKComplicationClient>
{
    NSString *_clientIdentifier;
    Class _dataSourceClass;
    NSXPCConnection *_serverConnection;
    id <CLKComplicationDataSource> _dataSource;
    NSSet *_activeComplications;
//     struct os_unfair_lock_s _connectionLock;
    int _restartNotificationToken;
    struct {
        BOOL supportsGetTimeTravelDirections;
        BOOL supportsGetTimelineStartDate;
        BOOL supportsGetTimelineEndDate;
        BOOL supportsGetPrivacyBehavior;
        BOOL supportsGetTimelineAnimationBehavior;
        BOOL supportsExtendAfter;
        BOOL supportsExtendBefore;
        BOOL supportsGetRequestedUpdate;
        BOOL supportsNotifyRequestedUpdate;
        BOOL supportsNotifyBudgetExhausted;
        BOOL supportsGetPlaceholderTemplate;
        BOOL supportsGetLocalizableDescriptionProvider;
        BOOL supportsGetLocalizableSampleTemplate;
        BOOL exceptionOnSkippedHandler;
        BOOL supportsGetAlwaysOnTemplate;
    } _dataSourceFlags;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)getLocalizableSampleTemplateForComplication:(id)arg1 withHandler:(id /* CDUnknownBlockType */)arg2;
- (void)requestedUpdateBudgetExhausted;
- (void)requestedUpdateDidBegin;
- (void)getNextRequestedUpdateDateWithHandler:(id /* CDUnknownBlockType */)arg1;
- (void)getTimelineEntriesForComplication:(id)arg1 afterDate:(id)arg2 limit:(NSUInteger)arg3 withHandler:(id /* CDUnknownBlockType */)arg4;
- (void)getTimelineEntriesForComplication:(id)arg1 beforeDate:(id)arg2 limit:(NSUInteger)arg3 withHandler:(id /* CDUnknownBlockType */)arg4;
- (void)getCurrentTimelineEntryForComplication:(id)arg1 withHandler:(id /* CDUnknownBlockType */)arg2;
- (void)getAlwaysOnTemplateForComplication:(id)arg1 withHandler:(id /* CDUnknownBlockType */)arg2;
- (void)getTimelineAnimationBehaviorForComplication:(id)arg1 withHandler:(id /* CDUnknownBlockType */)arg2;
- (void)getPrivacyBehaviorForComplication:(id)arg1 withHandler:(id /* CDUnknownBlockType */)arg2;
- (void)getTimelineEndDateForComplication:(id)arg1 withHandler:(id /* CDUnknownBlockType */)arg2;
- (void)getTimelineStartDateForComplication:(id)arg1 withHandler:(id /* CDUnknownBlockType */)arg2;
- (void)getSupportedTimeTravelDirectionsForComplication:(id)arg1 withHandler:(id /* CDUnknownBlockType */)arg2;
- (void)_createDataSourceIfNecessary;
- (void)_checkinWithServer;
- (void)_complicationServiceDidStart;
- (void)_createConnection;
@property(readonly, nonatomic) NSDate *latestTimeTravelDate;
@property(readonly, nonatomic) NSDate *earliestTimeTravelDate;
@property(readonly, nonatomic) NSArray *activeComplications;
- (void)extendTimelineForComplication:(id)arg1;
- (void)reloadTimelineForComplication:(id)arg1;
- (id)serverProxy;
- (void)dealloc;
- (id)_init;
- (id)initWithClientIdentifier:(id)arg1;
- (id)init;

@end

