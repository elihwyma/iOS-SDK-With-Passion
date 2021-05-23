/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class HFHomeKitDispatcher, HMHome;

@interface HFServiceMigrationController : NSObject

{
    HFHomeKitDispatcher *_dispatcher;
    HMHome *_home;
    unsigned long long _timeoutOverride;
}

@property (retain, nonatomic) HFHomeKitDispatcher *dispatcher;
@property (retain, nonatomic) HMHome *home;
@property (nonatomic) unsigned long long timeoutOverride;

+ (id)primaryServicesToMigrateForHome:(id)arg1;
+ (id)accessoriesToMigrateFavoritesForHome:(id)arg1;
+ (_Bool)homeNeedsMigration:(id)arg1;
+ (_Bool)homeNeedsToDisplayMigrationOnboardingUI;

- (id)initWithHome:(id)arg1;
- (id)migrateServicesToAccessory;

@end
