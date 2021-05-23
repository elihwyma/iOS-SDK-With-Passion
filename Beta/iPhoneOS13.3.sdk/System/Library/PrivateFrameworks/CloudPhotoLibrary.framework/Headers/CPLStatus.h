/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class CPLAccountFlags, NSArray, NSData, NSDate, NSDictionary, NSMutableDictionary, NSURL;

@protocol CPLStatusDelegate, OS_dispatch_queue;

@interface CPLStatus : NSObject

{
    _Bool _forCPL;
    NSURL *_statusFileURL;
    NSMutableDictionary *_status;
    NSObject<OS_dispatch_queue> *_lock;
    id <CPLStatusDelegate> _delegate;
}

@property (copy, nonatomic) NSDate *lastCompletePrefetchDate;
@property (copy, nonatomic) NSDate *lastPruneDate;
@property (nonatomic) _Bool hasChangesToProcess;
@property (nonatomic) _Bool iCloudLibraryClientVersionTooOld;
@property (copy, nonatomic) NSDate *lastSuccessfulSyncDate;
@property (copy, nonatomic) NSDate *initialSyncDate;
@property (nonatomic) _Bool isExceedingQuota;
@property (copy, nonatomic) NSDate *exitDeleteTime;
@property (nonatomic) _Bool iCloudLibraryHasBeenWiped;
@property (nonatomic) _Bool iCloudLibraryExists;
@property (copy, nonatomic) NSData *accountFlagsData;
@property (nonatomic, readonly) NSDate *cloudAssetCountPerTypeLastCheckDate;
@property (nonatomic) _Bool lowDiskSpace;
@property (copy, nonatomic) NSArray *disabledFeatures;
@property (nonatomic, readonly) _Bool hasValidSystemBudget;
@property (nonatomic, readonly) _Bool hasCellularBudget;
@property (nonatomic, readonly) _Bool hasBatteryBudget;
@property (nonatomic, readonly) NSDictionary *cloudAssetCountPerType;
@property (nonatomic, readonly) CPLAccountFlags *accountFlags;
@property (nonatomic, readonly, getter=isConnectedToNetwork) _Bool connectedToNetwork;
@property (nonatomic, readonly) _Bool isConstrainedNetwork;
@property (weak, nonatomic) id <CPLStatusDelegate> delegate;

- (void)_save;
- (_Bool)writeInitialSyncMarker:(id *)arg1;
- (id)statusDescription;
- (id)initWithClientLibraryBaseURL:(id)arg1;
- (id)initWithClientLibraryBaseURLForCPLEngine:(id)arg1;
- (void)_loadIfNecessary;
- (_Bool)_writeInitialSyncMarkerForDate:(id)arg1 error:(id *)arg2;
- (_Bool)_deleteInitialSyncMarkerWithError:(id *)arg1;
- (void)checkInitialSyncMarker;
- (void)refetchFromDisk;
- (void)setCloudAssetCountPerType:(id)arg1 updateCheckDate:(_Bool)arg2;
- (void)_statusDidChange;
- (void)setHasCellularBudget:(_Bool)arg1 hasBatteryBudget:(_Bool)arg2 isConstrainedNetwork:(_Bool)arg3 isBudgetValid:(_Bool)arg4;
- (void)setConnectedToNetwork:(_Bool)arg1;

@end
