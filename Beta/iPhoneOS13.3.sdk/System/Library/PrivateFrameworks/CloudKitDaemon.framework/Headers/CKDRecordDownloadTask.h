/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class CKDProgressTracker, CKRecord, NSError, NSMutableArray;

@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface CKDRecordDownloadTask : NSObject

{
    CKRecord *_record;
    NSError *_error;
    NSMutableArray *_assetsToDownload;
    NSMutableArray *_assetsToDownloadInMemory;
    NSMutableArray *_packageIndexSets;
    NSMutableArray *_assetURLInfosToFillOut;
    NSObject<OS_dispatch_group> *_group;
    CKDProgressTracker *_progressTracker;
}

@property (retain, nonatomic) CKRecord *record;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSMutableArray *assetsToDownload;
@property (retain, nonatomic) NSMutableArray *assetsToDownloadInMemory;
@property (retain, nonatomic) NSMutableArray *packageIndexSets;
@property (retain, nonatomic) NSMutableArray *assetURLInfosToFillOut;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *group;
@property (retain, nonatomic) CKDProgressTracker *progressTracker;

- (id)initWithRecord:(id)arg1 trackProgress:(_Bool)arg2 assetsToDownload:(id)arg3 assetsToDownloadInMemory:(id)arg4 packageIndexSets:(id)arg5 assetURLInfosToFillOut:(id)arg6;
- (void)didDownloadAsset:(id)arg1 error:(id)arg2;
- (void)didFillOutURLInfo:(id)arg1 error:(id)arg2;
- (void)didCompleteTaskWithError:(id)arg1;

@end
