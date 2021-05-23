/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements
 */

#import <HealthKit/HKQuery.h>

@class NSString;

@interface ACHQuery : HKQuery

{
    CDUnknownBlockType _errorHandler;
    CDUnknownBlockType _initialAchievementsHandler;
    CDUnknownBlockType _newAchievementsHandler;
    CDUnknownBlockType _updatedAchievementsHandler;
    CDUnknownBlockType _removedAchievementsHandler;
}

@property (copy, nonatomic) CDUnknownBlockType initialAchievementsHandler;
@property (copy, nonatomic) CDUnknownBlockType newAchievementsHandler;
@property (copy, nonatomic) CDUnknownBlockType updatedAchievementsHandler;
@property (copy, nonatomic) CDUnknownBlockType removedAchievementsHandler;
@property (copy, nonatomic) CDUnknownBlockType errorHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)arg1;
+ (_Bool)supportsTaskServers;

- (void)queue_deliverError:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)client_achievementsDidFinishInitialFetch:(id)arg1;
- (void)client_deliverNewAchievements:(id)arg1;
- (void)client_deliverUpdatedAchievements:(id)arg1;
- (void)client_deliverRemovedAchievements:(id)arg1;
- (id)initWithInitialAchievementsHandler:(CDUnknownBlockType)arg1 newAchievementsHandler:(CDUnknownBlockType)arg2 updatedAchievementsHandler:(CDUnknownBlockType)arg3 removedAchievementsHandler:(CDUnknownBlockType)arg4;

@end
