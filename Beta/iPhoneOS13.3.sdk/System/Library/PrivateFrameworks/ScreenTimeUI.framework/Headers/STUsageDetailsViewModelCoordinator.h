/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSFetchedResultsController, NSNumber, NSString, NSTimer, STUsageDetailsViewModel;

@protocol STPersistenceControllerProtocol;

@interface STUsageDetailsViewModelCoordinator : NSObject

{
    _Bool _refreshing;
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
    unsigned long long _usageDataRefreshReferenceCount;
}

@property (copy, nonatomic) NSString *organizationIdentifier;
@property (copy, nonatomic) NSNumber *userDSID;
@property (copy, nonatomic) NSArray *devices;
@property (readonly) long long usageContext;
@property (retain, nonatomic) id <STPersistenceControllerProtocol> persistenceController;
@property (retain, nonatomic) NSFetchedResultsController *usageBlocksFetchedResultsController;
@property (retain, nonatomic) NSDate *lastUsageDataRefreshTime;
@property (retain, nonatomic) NSTimer *usageDataRefreshTimer;
@property (nonatomic) unsigned long long usageDataRefreshReferenceCount;
@property (getter=isRefreshing) _Bool refreshing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) STUsageDetailsViewModel *viewModel;
@property (copy, nonatomic) NSString *selectedDeviceIdentifier;

+ (id)defaultDeviceIdentifierForChild:(id)arg1;
+ (id)defaultUsageReportTypeForChild:(id)arg1;
+ (id)defaultDeviceIdentifierForLocalUser;
+ (id)defaultUsageReportTypeForLocalUser;
+ (void)setDefaultUsageReportType:(id)arg1 childDSID:(id)arg2;
+ (void)setDefaultUsageReportTypeForLocalUser:(id)arg1;
+ (void)setDefaultDeviceIdentifier:(id)arg1 childDSID:(id)arg2;
+ (void)setDefaultDeviceIdentifierForLocalUser:(id)arg1;

- (void)dealloc;
- (void)controllerDidChangeContent:(id)arg1;
- (void)loadViewModelWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startRefreshingUsageData;
- (void)stopRefreshingUsageData;
- (void)refreshUsageData;
- (id)initWithPersistenceController:(id)arg1 organizationIdentifier:(id)arg2 userDSID:(id)arg3 devices:(id)arg4 selectedDeviceIdentifier:(id)arg5 selectedUsageReportType:(id)arg6 usageContext:(long long)arg7;
- (void)scheduleRefreshUsageData;
- (void)_refreshUsageDataAndReschedule;
- (void)_refreshUsageDataWithCompletion:(CDUnknownBlockType)arg1;
- (id)_usageBlocksWithUser:(id)arg1 device:(id)arg2 error:(id *)arg3;
- (void)_loadAllHistoricalUsageWithUsageBlocks:(id)arg1 selectedItemDisplayName:(id)arg2 selectedDay:(unsigned long long)arg3 selectedWeek:(unsigned long long)arg4 hadUsageData:(_Bool)arg5 referenceDate:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)_loadTodayUsageWithUsageBlocks:(id)arg1 selectedItemDisplayName:(id)arg2 referenceDate:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_loadLastWeekUsageWithUsageBlocks:(id)arg1 selectedItemDisplayName:(id)arg2 referenceDate:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_usageItemsWithUsageBlocks:(id)arg1 lastUpdatedDate:(id *)arg2 firstPickupByWeekdayByWeek:(id)arg3 referenceDate:(id)arg4 usageContext:(long long)arg5;
- (void)_updateWeekAndDayReportsWithUsageItems:(id)arg1 weekStartDate:(id)arg2 lastUpdatedDate:(id)arg3 referenceDate:(id)arg4 selectedItemDisplayName:(id)arg5 isSelectedWeek:(_Bool)arg6 selectedDay:(unsigned long long)arg7 weekUsageReports:(id)arg8 dayUsageReports:(id)arg9 dayUsageReportByWeekdays:(id)arg10 firstPickupByWeekdayByWeek:(id)arg11;

@end
