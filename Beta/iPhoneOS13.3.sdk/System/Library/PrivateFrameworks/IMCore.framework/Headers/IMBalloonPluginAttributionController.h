/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface IMBalloonPluginAttributionController : NSObject

{
    _Bool _hasPerformedFirstAppExtensionLoad;
    NSMutableDictionary *_expiredBundleIDToTimestampMap;
    NSMutableDictionary *_bundleIDsDisplayingAttribution;
}

@property (retain, nonatomic) NSMutableDictionary *expiredBundleIDToTimestampMap;
@property (retain, nonatomic) NSMutableDictionary *bundleIDsDisplayingAttribution;
@property (nonatomic) _Bool hasPerformedFirstAppExtensionLoad;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)_currentTimestamp;
- (void)_handleInstalledPluginsChanged;
- (double)_expiryTimeout;
- (void)_purgeLeastRecentlySeenAppBundleIDsIfNecessary;
- (void)_saveToFile;
- (void)startExpiryTimer;
- (void)didShowAttributionForBundleIDs:(id)arg1;
- (_Bool)shouldShowAttributionForBundleID:(id)arg1;

@end
