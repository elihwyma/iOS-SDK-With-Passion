/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface MSPMapsPaths : NSObject

{
    NSURL *_libraryURL;
    NSURL *_groupLibraryURL;
    CDUnknownBlockType _invalidationHandler;
    NSString *_mapsDirectory;
    NSString *_cacheDirectory;
    NSString *_groupDirectory;
    NSString *_nanoDirectory;
    NSString *_geoPinnedPlacesSettingsPath;
    NSString *_geoCollectionsSettingsPath;
    NSString *_bookmarksSettingsPath;
    NSString *_geoBookmarksSettingsPath;
    NSString *_directionsSettingsPath;
    NSString *_historySettingsPath;
    NSString *_geoHistorySettingsPath;
    NSString *_nanoHistorySettingsPath;
    NSString *_failedSearchesSettingsPath;
    NSString *_failedGeoSearchesSettingsPath;
    NSString *_failedDirectionsSettingsPath;
    NSString *_failedGeoDirectionsSettingsPath;
    NSString *_transitAppRankerPath;
    NSString *_directionsCachePath;
    NSString *_pinsSettingsPath;
    NSString *_reportAProblemDirectionsRecordingsPath;
    NSString *_reportAProblemSearchRecordingsPath;
    NSString *_reportAProblemNotificationsPath;
    NSString *_favoritesSyncedMarkerFile;
    NSString *_historySyncedMarkerFile;
}

@property (nonatomic, readonly) NSString *homeDirectory;
@property (nonatomic, readonly) NSString *mapsDirectory;
@property (nonatomic, readonly) NSString *cacheDirectory;
@property (nonatomic, readonly) NSString *groupDirectory;
@property (nonatomic, readonly) NSString *nanoDirectory;
@property (nonatomic, readonly) NSString *geoPinnedPlacesSettingsPath;
@property (nonatomic, readonly) NSString *geoCollectionsSettingsPath;
@property (nonatomic, readonly) NSString *bookmarksSettingsPath;
@property (nonatomic, readonly) NSString *geoBookmarksSettingsPath;
@property (nonatomic, readonly) NSString *directionsSettingsPath;
@property (nonatomic, readonly) NSString *historySettingsPath;
@property (nonatomic, readonly) NSString *geoHistorySettingsPath;
@property (nonatomic, readonly) NSString *nanoHistorySettingsPath;
@property (nonatomic, readonly) NSString *failedSearchesSettingsPath;
@property (nonatomic, readonly) NSString *failedGeoSearchesSettingsPath;
@property (nonatomic, readonly) NSString *failedGeoDirectionsSettingsPath;
@property (nonatomic, readonly) NSString *failedDirectionsSettingsPath;
@property (nonatomic, readonly) NSString *transitAppRankerPath;
@property (nonatomic, readonly) NSString *pinsSettingsPath;
@property (nonatomic, readonly) NSString *directionsCachePath;
@property (nonatomic, readonly) NSString *reportAProblemDirectionsRecordingsPath;
@property (nonatomic, readonly) NSString *reportAProblemSearchRecordingsPath;
@property (nonatomic, readonly) NSString *reportAProblemNotificationsPath;
@property (nonatomic, readonly) NSString *favoritesSyncedMarkerFile;
@property (nonatomic, readonly) _Bool shouldSyncMergeFavoritesAfterCheckingOrCreatingMarkerFile;
@property (nonatomic, readonly) NSString *historySyncedMarkerFile;
@property (nonatomic, readonly) _Bool shouldSyncMergeHistoryAfterCheckingOrCreatingMarkerFile;

+ (id)cacheDirectory;
+ (id)pathsAtLocation:(long long)arg1;
+ (id)geoCollectionsSettingsPath;
+ (id)mapsApplicationContainerPaths;
+ (id)groupDirectory;
+ (id)currentMapsApplicationContainerURL;
+ (id)currentMapsGroupContainerURL;
+ (id)mapsApplicationContainerPathsWithInvalidationHandler:(CDUnknownBlockType)arg1;
+ (id)mapsDirectory;
+ (id)nanoDirectory;
+ (id)geoPinnedPlacesSettingsPath;
+ (id)bookmarksSettingsPath;
+ (id)geoBookmarksSettingsPath;
+ (id)directionsSettingsPath;
+ (id)historySettingsPath;
+ (id)geoHistorySettingsPath;
+ (id)nanoHistorySettingsPath;
+ (id)failedSearchesSettingsPath;
+ (id)failedGeoSearchesSettingsPath;
+ (id)failedDirectionsSettingsPath;
+ (id)failedGeoDirectionsSettingsPath;
+ (id)transitAppRankerPath;
+ (id)directionsCachePath;
+ (id)pinsSettingsPath;
+ (id)reportAProblemDirectionsRecordingsPath;
+ (id)reportAProblemSearchRecordingsPath;
+ (id)reportAProblemNotificationsPath;
+ (id)favoritesSyncedMarkerFile;
+ (id)historySyncedMarkerFile;

- (void)_invalidate;
- (id)initWithLibraryDirectoryURL:(id)arg1 groupLibraryURL:(id)arg2 invalidationHandler:(CDUnknownBlockType)arg3;
- (_Bool)_shouldSyncMergeAfterCheckingOrCreatingMarkerFileAtPath:(id)arg1;
- (_Bool)_deleteSyncedFileAtPath:(id)arg1;
- (_Bool)deleteFavoritesSyncedMarkerFile;
- (_Bool)deleteHistorySyncedMarkerFile;

@end
