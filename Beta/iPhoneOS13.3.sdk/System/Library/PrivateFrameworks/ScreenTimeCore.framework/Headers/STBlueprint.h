/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

@class NSData, NSDate, NSSet, NSString, STBlueprintSchedule, STBlueprintUsageLimit, STCoreOrganization;

@interface STBlueprint

@property (getter=isDowntimeEnabled) _Bool downtimeEnabled;
@property (copy, readonly) NSString *downtimeScheduleText;
@property (getter=isUsageLimitEnabled) _Bool usageLimitEnabled;
@property (copy, readonly) NSString *limitDisplayName;
@property (copy, readonly) NSString *limitScheduleText;
@property (nonatomic) _Bool isDirty;
@property (nonatomic) _Bool isTombstoned;
@property (copy, nonatomic) NSData *versionVector;
@property (nonatomic) _Bool invertUsageLimit;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) _Bool enabled;
@property (nonatomic) _Bool limitEnabled;
@property (copy, nonatomic) NSDate *expiration;
@property (copy, nonatomic) NSDate *minimumInstallationDate;
@property (retain, nonatomic) NSSet *users;
@property (retain, nonatomic) STBlueprintSchedule *schedule;
@property (retain, nonatomic) STBlueprintUsageLimit *usageLimit;
@property (retain, nonatomic) NSSet *configurations;
@property (retain, nonatomic) STCoreOrganization *organization;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)displayNameForUsageLimitWithCategoryIdentifiers:(id)arg1 bundleIdentifiers:(id)arg2 webDomains:(id)arg3;
+ (id)defaultAlwaysAllowBundleIDs;
+ (id)fetchRequestMatchingBlueprintsForUserWithDSID:(id)arg1 ofType:(id)arg2;
+ (id)fetchRequestMatchingBlueprintsForUserWithDSID:(id)arg1 ofType:(id)arg2 fromOrganization:(id)arg3;
+ (id)simpleScheduleTimeRangeWithStartTimeComponents:(id)arg1 endTimeComponents:(id)arg2;
+ (_Bool)saveManagedUserBlueprintForUser:(id)arg1 error:(id *)arg2;
+ (_Bool)deleteManagedUserBlueprintForUser:(id)arg1 error:(id *)arg2;
+ (id)customScheduleTimeRangeWithLocale:(id)arg1 startTimeComponents:(id)arg2 endTimeComponents:(id)arg3;
+ (id)scheduleTextWithLocale:(id)arg1 weekdayScheduleComparator:(CDUnknownBlockType)arg2 scheduleTimeGetter:(CDUnknownBlockType)arg3;
+ (id)defaultStartTime;
+ (id)defaultEndTime;
+ (id)fetchResultsRequestsForChangesToBlueprintsForUserWithDSID:(id)arg1;
+ (id)fetchRequestMatchingBlueprintsForUserWithDSID:(id)arg1 ofType:(id)arg2 withIdentifier:(id)arg3 fromOrganization:(id)arg4;
+ (_Bool)saveDowntimeForUser:(id)arg1 startTime:(id)arg2 endTime:(id)arg3 scheduleByWeekdayIndex:(id)arg4 enabled:(_Bool)arg5 behaviorType:(unsigned long long)arg6 error:(id *)arg7;
+ (_Bool)saveUsageLimitWithIdentifier:(id)arg1 user:(id)arg2 bundleIdentifiers:(id)arg3 webDomains:(id)arg4 categoryIdentifiers:(id)arg5 dailyBudgetLimit:(double)arg6 budgetLimitByWeekday:(id)arg7 enabled:(_Bool)arg8 behaviorType:(unsigned long long)arg9 error:(id *)arg10;
+ (_Bool)deleteUsageLimitWithIdentifier:(id)arg1 user:(id)arg2 managedObjectContext:(id)arg3 error:(id *)arg4;
+ (_Bool)saveAlwaysAllowListForUser:(id)arg1 withBundleIDs:(id)arg2 error:(id *)arg3;
+ (id)_fetchRequestMatchingBlueprintsForUserWithDSID:(id)arg1;
+ (id)blueprintIdentifierForUser:(id)arg1;
+ (id)fetchOrCreateWithDictionaryRepresentation:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
+ (id)fetchRequestMatchingExpiredBlueprints;
+ (id)fetchRequestMatchingOrphanedBlueprints;
+ (id)fetchRequestMatchingUnexpiredOneMoreMinuteBlueprints;
+ (id)fetchRequestMatchingBlueprintsForUserWithDSID:(id)arg1 fromOrganization:(id)arg2;
+ (id)fetchResultsRequestsForChangesToBlueprints;
+ (id)createBlueprintWithType:(id)arg1 user:(id)arg2;
+ (id)keyPathsForValuesAffectingDowntimeScheduleText;
+ (id)_getDisplayNameAndAddCategories:(id)arg1 toItemNames:(id)arg2 remainingItems:(unsigned long long *)arg3;
+ (void)_createDisplayNameWithItemNames:(id)arg1 itemCount:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)_addWebDomains:(id)arg1 toItemNames:(id)arg2 remainingItems:(unsigned long long)arg3 totalCount:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (id)keyPathsForValuesAffectingLimitDisplayName;
+ (void)fetchDisplayNameForUsageLimitWithCategoryIdentifiers:(id)arg1 bundleIdentifiers:(id)arg2 webDomains:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (id)keyPathsForValuesAffectingLimitScheduleText;

- (void)didChangeValueForKey:(id)arg1;
- (id)dictionaryRepresentation;
- (void)tombstone;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;
- (void)_didFetchAppInfo:(id)arg1;
- (_Bool)updateWithDictionaryRepresentation:(id)arg1;
- (void)_limitedApplicationsDidChange:(id)arg1;
- (id)declarationsWithError:(id *)arg1;
- (id)computeUniqueIdentifier;
- (void)setStartTime:(id)arg1 endTime:(id)arg2;
- (void)setStartTime:(id)arg1 endTime:(id)arg2 forDay:(unsigned long long)arg3;
- (void)disableDowntimeForDay:(unsigned long long)arg1;
- (id)_webFilterBlacklistStringsForURL:(id)arg1;
- (_Bool)permitWebFilterURL:(id)arg1 pageTitle:(id)arg2 error:(id *)arg3;

@end
