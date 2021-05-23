/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class PLPhotoLibraryPathManager;

@interface PLIndicatorFileCoordinator : NSObject

{
    PLPhotoLibraryPathManager *_pathManager;
    int _activityIndicatorFid;
    struct os_unfair_lock_s _activityIndicatorLock;
}

+ (void)setSystemLibraryAvailableIndicatorState:(_Bool)arg1;
+ (_Bool)systemLibraryAvailableIndicatorState;

- (id)initWithPathManager:(id)arg1;
- (void)_setActivityIndicatorWithPath:(id)arg1 flag:(_Bool)arg2 crashRecovery:(CDUnknownBlockType)arg3;
- (void)setTakingPhotoIsBusy:(_Bool)arg1;
- (void)setImageWriter:(id)arg1 isBusy:(_Bool)arg2 crashRecoverySupport:(id)arg3;
- (_Bool)needsRecoveryAfterCrashOptionallyRemoveAllIndicatorFiles:(_Bool)arg1;
- (_Bool)isEnableICloudPhotos;
- (_Bool)isDisableICloudPhotos;
- (_Bool)isICloudPhotosPaused;
- (void)deleteCPLDownloadFinishedMarkerFilePath;
- (void)writeDisableICloudPhotosMarker;
- (void)writeEnableICloudPhotosMarker;
- (void)updateICloudPhotosMarkerForEnable:(_Bool)arg1;
- (_Bool)clearPauseMarkerForReason:(short)arg1;
- (_Bool)_canSetPauseMarkerWithUnpauseTime:(id)arg1 onPauseData:(id)arg2;
- (void)_createPauseMarkerForReason:(short)arg1 withUnpauseTime:(id)arg2 withPath:(id)arg3;
- (void)createPauseMarkerWithUnpauseTime:(id)arg1 reason:(short)arg2;
- (id)_pauseDataOnPath:(id)arg1;
- (id)unpauseTime;
- (short)currentPauseReason;
- (_Bool)isUserPause;
- (_Bool)isForceSoftResetSync;
- (void)forceSoftResetSync;
- (id)_readPListWithFilename:(id)arg1;
- (void)_writeDict:(id)arg1 withFilename:(id)arg2;
- (_Bool)hasItemToDownload;
- (void)getDownloadPhotoCount:(unsigned long long *)arg1 downloadVideoCount:(unsigned long long *)arg2;
- (void)setDownloadCountsForImages:(unsigned long long)arg1 videos:(unsigned long long)arg2;
- (id)dupeAnalysisNeededFilePath;
- (void)setDupeAnalysisNeeded:(_Bool)arg1;
- (_Bool)isDupeAnalysisNeeded;
- (void)setStreamsLibraryUpdatingExpired:(_Bool)arg1;
- (_Bool)isStreamsLibraryUpdatingExpired;
- (id)_rebuildingPersonsIndicatorFilePath;
- (void)setIsRebuildingPersons:(_Bool)arg1;
- (_Bool)isRebuildingPersons;

@end
