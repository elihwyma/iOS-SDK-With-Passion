/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSError, NSString, PFUbiquityLocation;

@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface PFUbiquitySafeSaveFile : NSObject

{
    PFUbiquityLocation *_permanentLocation;
    PFUbiquityLocation *_safeSaveLocation;
    PFUbiquityLocation *_currentLocation;
    NSString *_localPeerID;
    _Bool _continueCheckingDownload;
    _Bool _downloadSuccess;
    NSError *_downloadError;
    _Bool _continueCheckingUpload;
    _Bool _safeSaveSuccess;
    _Bool _moveAfterSave;
    NSError *_safeSaveError;
    NSObject<OS_dispatch_semaphore> *_safeSaveSemaphore;
    _Bool _isRegistered;
}

@property (nonatomic, readonly) PFUbiquityLocation *permanentLocation;
@property (nonatomic, readonly) PFUbiquityLocation *safeSaveLocation;
@property (retain, nonatomic) PFUbiquityLocation *currentLocation;
@property (nonatomic, readonly) NSString *localPeerID;
@property (nonatomic, readonly) NSError *safeSaveError;
@property (nonatomic, readonly) _Bool isRegistered;
@property (nonatomic, readonly) _Bool continueCheckingUpload;
@property (nonatomic, readonly) _Bool safeSaveSuccess;
@property (nonatomic, readonly) _Bool moveAfterSave;
@property (nonatomic, readonly) _Bool existsAtSafeSaveLocation;
@property (nonatomic, readonly) _Bool existsAtPermanentLocation;
@property (nonatomic, readonly) _Bool existsInCloud;
@property (nonatomic, readonly) _Bool downloadSuccess;
@property (nonatomic, readonly) _Bool continueCheckingDownload;
@property (nonatomic, readonly) NSError *downloadError;

- (id)init;
- (void)dealloc;
- (id)description;
- (_Bool)writeFile:(id *)arg1;
- (_Bool)removeFile:(id *)arg1;
- (void)checkFileDownload;
- (void)checkSafeSaveFileUpload;
- (id)initWithPermanentLocation:(id)arg1 safeSaveLocation:(id)arg2 andLocalPeerID:(id)arg3;
- (_Bool)loadFile:(id *)arg1;
- (_Bool)downloadLatestVersion:(_Bool)arg1 error:(id *)arg2;
- (_Bool)moveToPermanentLocation:(id *)arg1;
- (_Bool)loadFileFromLocation:(id)arg1 error:(id *)arg2;
- (_Bool)writeFileToLocation:(id)arg1 error:(id *)arg2;
- (_Bool)safeSaveFile:(_Bool)arg1 moveToPermanentLocation:(_Bool)arg2 error:(id *)arg3;
- (_Bool)waitForFileToUpload:(id *)arg1;
- (_Bool)isFileUploaded:(id *)arg1;
- (_Bool)removeFileFromLocation:(id)arg1 error:(id *)arg2;
- (_Bool)isFileDownloaded:(id *)arg1;
- (_Bool)waitForFileToDownload:(id *)arg1;
- (void)checkSafeSaveFileUploadAsync;
- (void)setSafeSaveSuccess:(_Bool)arg1;
- (void)safeSaveFinishedUpload;
- (void)setSafeSaveError:(id)arg1;
- (void)setDownloadSuccess:(_Bool)arg1;
- (void)downloadFinished;
- (void)setDownloadError:(id)arg1;

@end
