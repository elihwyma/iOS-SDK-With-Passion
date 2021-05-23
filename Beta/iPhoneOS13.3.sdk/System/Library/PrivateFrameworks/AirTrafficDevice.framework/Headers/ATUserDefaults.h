/*
 Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

#import <NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface ATUserDefaults : NSObject

{
    NSMutableDictionary *_defaults;
}

@property (nonatomic) _Bool hasCompletedDataMigration;
@property (retain, nonatomic) NSDictionary *diskUsageInfo;

+ (id)sharedInstance;
+ (void)synchronize;
+ (id)readOnlyDefaults;

- (id)init;
- (void)_updateDefaults;
- (id)allHosts;
- (void)updateHostInfo:(id)arg1 disabledAssetTypes:(id)arg2;
- (void)updateLastSyncWithHostLibrary:(id)arg1;
- (void)removeHost:(id)arg1;
- (id)hostInfoForIdentifier:(id)arg1;

@end
