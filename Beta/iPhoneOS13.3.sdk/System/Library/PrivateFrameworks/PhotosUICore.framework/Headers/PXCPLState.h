/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSDate;

@interface PXCPLState : NSObject <Swift>

{
    _Bool _isEnabled;
    _Bool _isSyncing;
    _Bool _isUserPaused;
    _Bool _isInLowDataMode;
    _Bool _isInLowPowerMode;
    _Bool _isExceedingBatteryQuota;
    _Bool _isExceedingCellularQuota;
    _Bool _isExceedingLocalStorageQuota;
    _Bool _isExceedingQuota;
    _Bool _isClientVersionTooOld;
    _Bool _isOffline;
    _Bool _isInSoftResetSync;
    _Bool _isInHardResetSync;
    float _itemsToUploadProgress;
    NSDate *_syncDate;
    NSDate *_exitDate;
    unsigned long long _numberOfItemsToUpload;
    unsigned long long _numberOfItemsToAdd;
    unsigned long long _numberOfOriginalsToDownload;
    unsigned long long _numberOfItemsFailingToUpload;
    unsigned long long _numberOfPhotoAssets;
    unsigned long long _numberOfVideoAssets;
    unsigned long long _numberOfOtherAssets;
    unsigned long long _numberOfReferencedItems;
}

@property (nonatomic) _Bool isEnabled;
@property (nonatomic) _Bool isSyncing;
@property (copy, nonatomic) NSDate *syncDate;
@property (copy, nonatomic) NSDate *exitDate;
@property (nonatomic) unsigned long long numberOfItemsToUpload;
@property (nonatomic) float itemsToUploadProgress;
@property (nonatomic) unsigned long long numberOfItemsToAdd;
@property (nonatomic) unsigned long long numberOfOriginalsToDownload;
@property (nonatomic) unsigned long long numberOfItemsFailingToUpload;
@property (nonatomic) unsigned long long numberOfPhotoAssets;
@property (nonatomic) unsigned long long numberOfVideoAssets;
@property (nonatomic) unsigned long long numberOfOtherAssets;
@property (nonatomic) unsigned long long numberOfReferencedItems;
@property (nonatomic) _Bool isUserPaused;
@property (nonatomic) _Bool isInLowDataMode;
@property (nonatomic) _Bool isInLowPowerMode;
@property (nonatomic) _Bool isExceedingBatteryQuota;
@property (nonatomic) _Bool isExceedingCellularQuota;
@property (nonatomic) _Bool isExceedingLocalStorageQuota;
@property (nonatomic) _Bool isExceedingQuota;
@property (nonatomic) _Bool isClientVersionTooOld;
@property (nonatomic) _Bool isOffline;
@property (nonatomic) _Bool isInSoftResetSync;
@property (nonatomic) _Bool isInHardResetSync;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToCPLState:(id)arg1;

@end
