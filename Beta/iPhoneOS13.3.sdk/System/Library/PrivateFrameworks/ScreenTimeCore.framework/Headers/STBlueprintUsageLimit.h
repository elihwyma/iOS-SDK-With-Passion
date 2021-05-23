/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

#import <CoreData/NSManagedObject.h>

#import <ScreenTimeCore/Swift-Protocol.h>

@class NSArray, NSNumber, NSString, STBlueprint, STBlueprintUsageLimitScheduleRepresentation;

@protocol STSerializableManagedObject;

@interface STBlueprintUsageLimit : NSManagedObject <Swift>

@property (nonatomic) double day0Limit;
@property (nonatomic) double day1Limit;
@property (nonatomic) double day2Limit;
@property (nonatomic) double day3Limit;
@property (nonatomic) double day4Limit;
@property (nonatomic) double day5Limit;
@property (nonatomic) double day6Limit;
@property (nonatomic, readonly) STBlueprint *blueprint;
@property (copy, nonatomic) NSArray *applicationIdentifiers;
@property (copy, nonatomic) NSArray *categoryIdentifiers;
@property (copy, nonatomic) NSArray *websiteIdentifiers;
@property (retain, nonatomic) NSNumber *notificationTimeInterval;
@property (retain, nonatomic) STBlueprintUsageLimitScheduleRepresentation *budgetLimitScheduleRepresentation;
@property (copy, nonatomic) NSString *usageItemType;
@property (copy, nonatomic) NSArray *itemIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) id <STSerializableManagedObject> syncableRootObject;

+ (id)limitKeyPaths;
+ (id)keyPathsForValuesAffectingBudgetLimitScheduleRepresentation;

- (id)dictionaryRepresentation;
- (void)awakeFromFetch;
- (_Bool)updateWithDictionaryRepresentation:(id)arg1;
- (void)setBudgetLimit:(double)arg1 forDay:(unsigned long long)arg2;
- (void)setBudgetLimit:(double)arg1;
- (void)_usageLimitDidChangeFromOldApplicationIdentifiers:(id)arg1 oldCategoryIdentifiers:(id)arg2 oldWebDomains:(id)arg3 oldItemIdentifiers:(id)arg4 oldItemType:(id)arg5 toNewApplicationIdentifiers:(id)arg6 newCategoryIdentifiers:(id)arg7 newWebDomains:(id)arg8 newItemIdentifiers:(id)arg9 newItemType:(id)arg10;

@end
