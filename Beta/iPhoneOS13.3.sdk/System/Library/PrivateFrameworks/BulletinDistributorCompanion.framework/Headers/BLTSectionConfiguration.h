/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <BulletinDistributorCompanion/BLTSectionConfigurationInternal.h>

@class BLTWatchKitAppList, NSCondition, NSString;

@protocol BLTSectionConfigurationDelegate;

@interface BLTSectionConfiguration : BLTSectionConfigurationInternal

{
    BLTWatchKitAppList *_watchKitAppList;
    NSCondition *_watchKitAppListLoadedCondition;
    _Bool _watchKitAppListLoaded;
    id <BLTSectionConfigurationDelegate> _delegate;
}

@property (weak, nonatomic) id <BLTSectionConfigurationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)watchKitAppList:(id)arg1 added:(id)arg2 removed:(id)arg3;
- (_Bool)shouldSectionIDSettingsAlwaysSync:(id)arg1;
- (void)_waitForWatchKitAppListLoaded;
- (id)initWithWatchKitAppList:(id)arg1;
- (_Bool)override:(id)arg1 appliesToConfigurationForSectionID:(id)arg2;

@end
