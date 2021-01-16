//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenTimeUI/STUsageDetailsViewModelCoordinator-Protocol.h>

@class NSArray, NSDate, NSFetchedResultsController, NSNumber, NSString, NSTimer, STUsageDetailsViewModel;
@protocol STPersistenceControllerProtocol;

@interface STUsageDetailsViewModelCoordinator : NSObject <NSFetchedResultsControllerDelegate, STUsageDetailsViewModelCoordinator>
{
    BOOL _refreshing;
    STUsageDetailsViewModel *_viewModel;
    NSArray *_devices;
    NSString *_selectedDeviceIdentifier;
    NSString *_organizationIdentifier;
    NSNumber *_userDSID;
    long long _usageContext;
    id <STPersistenceControllerProtocol> _persistenceController;
    NSFetchedResultsController *_usageBlocksFetchedResultsController;
    NSDate *_lastUsageDataRefreshTime;
    NSTimer *_usageDataRefreshTimer;
    NSUInteger _usageDataRefreshReferenceCount;
}

+ (void)setDefaultUsageReportType:(id)arg1 childDSID:(id)arg2;
+ (id)defaultUsageReportTypeForChild:(id)arg1;
+ (void)setDefaultDeviceIdentifier:(id)arg1 childDSID:(id)arg2;
+ (id)defaultDeviceIdentifierForChild:(id)arg1;
+ (void)setDefaultUsageReportTypeForLocalUser:(id)arg1;
+ (id)defaultUsageReportTypeForLocalUser;
+ (void)setDefaultDeviceIdentifierForLocalUser:(id)arg1;
+ (id)defaultDeviceIdentifierForLocalUser;
@property(getter=isRefreshing) BOOL refreshing; // @synthesize refreshing=_refreshing;
@property(nonatomic) NSUInteger usageDataRefreshReferenceCount; // @synthesize usageDataRefreshReferenceCount=_usageDataRefreshReferenceCount;
@property(retain, nonatomic) NSTimer *usageDataRefreshTimer; // @synthesize usageDataRefreshTimer=_usageDataRefreshTimer;
@property(retain, nonatomic) NSDate *lastUsageDataRefreshTime; // @synthesize lastUsageDataRefreshTime=_lastUsageDataRefreshTime;
@property(retain, nonatomic) NSFetchedResultsController *usageBlocksFetchedResultsController; // @synthesize usageBlocksFetchedResultsController=_usageBlocksFetchedResultsController;
@property(retain, nonatomic) id <STPersistenceControllerProtocol> persistenceController; // @synthesize persistenceController=_persistenceController;
@property(readonly) long long usageContext; // @synthesize usageContext=_usageContext;
@property(copy, nonatomic) NSNumber *userDSID; // @synthesize userDSID=_userDSID;
@property(copy, nonatomic) NSString *organizationIdentifier; // @synthesize organizationIdentifier=_organizationIdentifier;
@property(copy, nonatomic) NSString *selectedDeviceIdentifier; // @synthesize selectedDeviceIdentifier=_selectedDeviceIdentifier;
@property(copy, nonatomic) NSArray *devices; // @synthesize devices=_devices;
@property(readonly, nonatomic) STUsageDetailsViewModel *viewModel; // @synthesize viewModel=_viewModel;
// - (void).cxx_destruct;
- (void)_updateWeekAndDayReportsWithUsageItems:(id)arg1 weekStartDate:(id)arg2 lastUpdatedDate:(id)arg3 referenceDate:(id)arg4 selectedItemDisplayName:(id)arg5 isSelectedWeek:(BOOL)arg6 selectedDay:(NSUInteger)arg7 weekUsageReports:(id)arg8 dayUsageReports:(id)arg9 dayUsageReportByWeekdays:(id)arg10 firstPickupByWeekdayByWeek:(id)arg11;
- (void)_loadAllHistoricalUsageWithUsageBlocks:(id)arg1 selectedItemDisplayName:(id)arg2 selectedDay:(NSUInteger)arg3 selectedWeek:(NSUInteger)arg4 hadUsageData:(BOOL)arg5 referenceDate:(id)arg6 completionHandler:(id /* CDUnknownBlockType */)arg7;
- (void)_loadLastWeekUsageWithUsageBlocks:(id)arg1 selectedItemDisplayName:(id)arg2 referenceDate:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)_loadTodayUsageWithUsageBlocks:(id)arg1 selectedItemDisplayName:(id)arg2 referenceDate:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)loadViewModelWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (id)_usageItemsWithUsageBlocks:(id)arg1 lastUpdatedDate:(id )arg2 firstPickupByWeekdayByWeek:(id)arg3 referenceDate:(id)arg4 usageContext:(long long)arg5;
- (id)_usageBlocksWithUser:(id)arg1 device:(id)arg2 error:(id )arg3;
- (void)controllerDidChangeContent:(id)arg1;
- (void)_refreshUsageDataWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)refreshUsageData;
- (void)_refreshUsageDataAndReschedule;
- (void)scheduleRefreshUsageData;
- (void)stopRefreshingUsageData;
- (void)startRefreshingUsageData;
- (void)dealloc;
- (id)initWithPersistenceController:(id)arg1 organizationIdentifier:(id)arg2 userDSID:(id)arg3 devices:(id)arg4 selectedDeviceIdentifier:(id)arg5 selectedUsageReportType:(id)arg6 usageContext:(long long)arg7;

@end
