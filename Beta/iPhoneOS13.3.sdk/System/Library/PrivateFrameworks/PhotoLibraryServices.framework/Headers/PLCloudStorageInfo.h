/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@interface PLCloudStorageInfo : NSObject

{
    _Bool _hasMaxQuotaTier;
    long long _totalBytes;
    long long _availableBytes;
    long long _usedBytes;
    long long _cameraRollBackupBytes;
}

@property (nonatomic) long long totalBytes;
@property (nonatomic) long long availableBytes;
@property (nonatomic) long long usedBytes;
@property (nonatomic) long long cameraRollBackupBytes;
@property (nonatomic) _Bool hasMaxQuotaTier;

+ (id)storageInfoWithTotal:(long long)arg1 available:(long long)arg2 used:(long long)arg3 cameraRollBackupBytes:(long long)arg4 hasMaxQuotaTier:(_Bool)arg5;

- (id)description;
- (id)initWithTotalQuotaBytes:(long long)arg1 totalAvailableBytes:(long long)arg2 totalUsedBytes:(long long)arg3 cameraRollBackupBytes:(long long)arg4 hasMaxQuotaTier:(_Bool)arg5;

@end
