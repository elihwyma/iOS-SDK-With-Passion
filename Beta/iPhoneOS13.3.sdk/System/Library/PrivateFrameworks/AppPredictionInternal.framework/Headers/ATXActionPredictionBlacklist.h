/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class ATXAppPredictionBlacklist, _PASLock;

@interface ATXActionPredictionBlacklist : NSObject

{
    _PASLock *_lock;
    id _blacklistNotificationToken;
    ATXAppPredictionBlacklist *_appPredictionBlacklist;
    int _prefsChangeNotificationToken;
}

+ (id)sharedInstanceWithoutAppPredictionBlacklist;
+ (id)sharedInstanceWithAppPredictionBlacklist;

- (id)init;
- (void)dealloc;
- (_Bool)shouldPredictBundleIdForShortcuts:(id)arg1 action:(id)arg2;
- (_Bool)shouldPredictBundleIdForShortcuts:(id)arg1 action:(id)arg2 forPrimaryShortcuts:(_Bool)arg3;
- (id)initWithAppPredictionBlacklist:(id)arg1;
- (void)setBlacklistFromAssetData:(id)arg1 predictionBlacklist:(id)arg2 shortcutBlacklist:(id)arg3 primaryShortcutBlacklist:(id)arg4;
- (void)addToBlacklists:(id)arg1 blacklistAppList:(id)arg2 blacklistActionList:(id)arg3 blacklistAppAndActionList:(id)arg4;
- (id)disabledBundlesInSettings;
- (id)_perfsDisabledApps;
- (id)spotlightDisabledShortcutsInSettings;
- (void)_handlePrefsChange;
- (_Bool)isBundleIdBlacklisted:(id)arg1;
- (_Bool)shouldPredictBundleId:(id)arg1 action:(id)arg2;
- (id)shouldPredictBundleIdHelper:(id)arg1 action:(id)arg2;

@end
