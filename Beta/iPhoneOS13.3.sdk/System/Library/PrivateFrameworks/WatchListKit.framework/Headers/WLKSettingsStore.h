/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableArray, NSNumber, NSString, NSUserDefaults, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface WLKSettingsStore : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_readWriteQueue;
    _Bool _privateModeEnabled;
    _Bool _sportsScoreSpoilersAllowed;
    NSString *_pushToken;
    NSString *_accountID;
    NSNumber *_optedInVal;
    _Bool _optedIn;
    _Bool _migratediOS;
    _Bool _migratedtvOS;
    NSMutableArray *_apps;
    NSUserDefaults *_defaultsAccessor;
    int _didChangeNotificationToken;
    NSXPCConnection *_connection;
    _Bool _hasOutstandingChanges;
    int _ignoreChangesCount;
    NSDate *_lastSyncDate;
    NSDate *_lastSyncToCloudDate;
}

@property int ignoreChangesCount;
@property _Bool hasOutstandingChanges;
@property (nonatomic) _Bool privateModeEnabled;
@property (nonatomic) _Bool sportsScoreSpoilersAllowed;
@property (nonatomic) _Bool optedIn;
@property (copy, nonatomic) NSNumber *optedInVal;
@property (nonatomic) _Bool migratediOS;
@property (nonatomic) _Bool migratedtvOS;
@property (copy, nonatomic) NSString *pushToken;
@property (copy, nonatomic, readonly) NSDate *lastSyncDate;
@property (copy, nonatomic, readonly) NSDate *lastSyncToCloudDate;

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)sharedSettings;
+ (void)synchronizeSettingsDefaultsForKeys:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)_connection;
- (void)refresh;
- (id)_dictionaryRepresentation;
- (_Bool)synchronize:(unsigned long long)arg1;
- (void)_writeToDisk;
- (void)setLastSyncDate:(id)arg1;
- (id)_supportPath;
- (id)_watchListAppsFiltered;
- (void)_updateDisplayNamesForUI:(CDUnknownBlockType)arg1;
- (void)synchronize:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)beginIgnoringChanges;
- (void)setStatus:(unsigned long long)arg1 forChannelID:(id)arg2 externalID:(id)arg3;
- (void)endIgnoringChanges;
- (void)forceUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (id)settingsForChannelID:(id)arg1 externalID:(id)arg2;
- (id)watchListApps;
- (id)consentedBrands;
- (id)deniedBrands;
- (void)_readFromDisk;
- (id)_dictionaryOnDisk;
- (void)_dictionaryOnDisk:(CDUnknownBlockType)arg1;
- (void)_removeWatchListApp:(id)arg1;
- (void)setLastSyncToCloudDate:(id)arg1;
- (id)_dictionaryRepresentationDataOnly;
- (void)_activeAccountChangedNotification:(id)arg1;
- (id)_appsForChannelID:(id)arg1;
- (void)_attemptCullingOfObsoleteApp:(id)arg1;
- (void)_tickleKVO;
- (void)setName:(id)arg1 forChannelID:(id)arg2 externalID:(id)arg3;
- (id)_dictionaryRepresentationCopyingItems:(_Bool)arg1;
- (void)_writeToDisk:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)watchListAppsFiltered;

@end
