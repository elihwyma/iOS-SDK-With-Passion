/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDCoreMotionDataCollector.h>

@class NSNumber, NSString;

@interface HDPedometerDataCollector : HDCoreMotionDataCollector

{
    NSNumber *_userCondition;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)isPedometerDataCollectionSupported;

- (void)dealloc;
- (id)persistentIdentifier;
- (id)initWithProfile:(id)arg1;
- (void)userCharacteristicsManager:(id)arg1 didUpdateUserProfile:(id)arg2;
- (Class)coreMotionDatumClass;
- (id)collectedTypes;
- (id)queue_newDataSource;
- (double)queue_differenceFromDatum:(id)arg1 toDatum:(id)arg2 type:(id)arg3;
- (_Bool)queue_userConditionIsSet;
- (_Bool)queue_userIsAbleBodied;

@end
