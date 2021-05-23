/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSDate, PLPhotoLibraryPathManager;

@interface PLAssetsdCrashRecoverySupport : NSObject

{
    PLPhotoLibraryPathManager *_pathManager;
    struct os_unfair_lock_s _recoveryIndicatorCheckLock;
    NSDate *_recoveryJobCreationDate;
}

- (id)initWithPathManager:(id)arg1;
- (void)recoverFromCrashIfNeededWithImageWriter:(id)arg1;
- (_Bool)isSafeToRecoverAfterCrash;
- (void)_enqeueRecoveryJob:(id)arg1 date:(id)arg2 toImageWriter:(id)arg3;

@end
