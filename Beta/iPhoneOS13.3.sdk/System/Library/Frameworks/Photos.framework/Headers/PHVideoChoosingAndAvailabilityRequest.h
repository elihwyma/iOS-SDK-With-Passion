/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHAvailabilityRequest.h>

@class PHResourceAvailabilityDataStoreManager, PHVideoRequestBehaviorSpec;

@protocol PHVideoChoosingAndAvailabilityRequestDelegate;

@interface PHVideoChoosingAndAvailabilityRequest : PHAvailabilityRequest

{
    PHResourceAvailabilityDataStoreManager *_dataStoreManager;
    struct os_unfair_lock_s _lock;
    _Bool _wantsProgress;
    id <PHVideoChoosingAndAvailabilityRequestDelegate> _delegate;
    PHVideoRequestBehaviorSpec *_behaviorSpec;
    struct CGSize _size;
}

@property (nonatomic) id <PHVideoChoosingAndAvailabilityRequestDelegate> delegate;
@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) PHVideoRequestBehaviorSpec *behaviorSpec;
@property (nonatomic) _Bool wantsProgress;

- (void)cancel;
- (void)runDaemonSide;
- (id)initWithPlistDictionary:(id)arg1 photoLibrary:(id)arg2;
- (id)plistDictionary;
- (id)initWithTaskIdentifier:(id)arg1 assetObjectID:(id)arg2 size:(struct CGSize)arg3 behaviorSpec:(id)arg4;
- (void)abortClientSide;
- (void)_cplDownloadStatusNotification:(id)arg1;
- (void)_resourceURLReceivedNotification:(id)arg1;
- (void)_loadAdjustmentInfoFromPath:(id)arg1 intoAdditionalInfo:(id)arg2;

@end
