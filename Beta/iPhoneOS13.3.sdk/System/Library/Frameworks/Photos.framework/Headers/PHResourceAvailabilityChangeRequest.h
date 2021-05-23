/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHResourceAvailabilityRequest.h>

@class PHResourceAvailabilityDataStoreManager;

@protocol PHResourceAvailabilityChangeRequestDelegate;

@interface PHResourceAvailabilityChangeRequest : PHResourceAvailabilityRequest

{
    struct os_unfair_lock_s _lock;
    PHResourceAvailabilityDataStoreManager *_dataStoreManager;
    _Bool _wantsProgress;
    _Bool _transient;
    _Bool _networkAccessAllowed;
    id <PHResourceAvailabilityChangeRequestDelegate> _delegate;
}

@property (weak, nonatomic) id <PHResourceAvailabilityChangeRequestDelegate> delegate;
@property (nonatomic) _Bool wantsProgress;
@property (nonatomic, getter=isTransient) _Bool transient;
@property (nonatomic, getter=isNetworkAccessAllowed) _Bool networkAccessAllowed;

- (void)cancel;
- (void)runDaemonSide;
- (id)initWithPlistDictionary:(id)arg1 photoLibrary:(id)arg2;
- (id)plistDictionary;
- (void)abortClientSide;
- (void)_cplDownloadStatusNotification:(id)arg1;
- (id)initWithTaskIdentifier:(id)arg1 assetObjectID:(id)arg2 resourceIdentity:(id)arg3;
- (_Bool)_prepareForChangeRequestWithLibrary:(id)arg1 asset:(id *)arg2 resource:(id *)arg3 error:(id *)arg4;
- (id)_availabilityRequestOptions;
- (void)_handleLocalAvailabilityChangeForResource:(id)arg1 mutableInfo:(id)arg2 fileURL:(id *)arg3 uti:(id *)arg4 orientation:(unsigned int *)arg5 data:(id *)arg6;
- (void)_cplDownloadFinishedNotification:(id)arg1;
- (void)_assetsdClientXPCConnectionInterruptedNotification:(id)arg1;

@end
