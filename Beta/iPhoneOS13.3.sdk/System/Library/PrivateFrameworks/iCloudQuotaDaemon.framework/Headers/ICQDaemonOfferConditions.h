/*
 Image: /System/Library/PrivateFrameworks/iCloudQuotaDaemon.framework/iCloudQuotaDaemon
 */

#import <Foundation/NSObject.h>

@class NSNumber;

@interface ICQDaemonOfferConditions : NSObject

{
    _Bool _deviceStorageAlmostFull;
    _Bool _photosCloudEnabled;
    _Bool _photosOptimizeEnabled;
    NSNumber *_photosLibrarySize;
}

@property (nonatomic, getter=isDeviceStorageAlmostFull) _Bool deviceStorageAlmostFull;
@property (nonatomic, getter=isPhotosCloudEnabled) _Bool photosCloudEnabled;
@property (nonatomic, getter=isPhotosOptimizeEnabled) _Bool photosOptimizeEnabled;
@property (copy, nonatomic) NSNumber *photosLibrarySize;

+ (id)currentConditions;
+ (_Bool)isDeviceStorageAlmostFull;
+ (_Bool)isPhotosCloudEnabled;
+ (_Bool)isPhotosOptimizeEnabled;
+ (id)photosLibrarySize;
+ (_Bool)isSimulatedDeviceStorageAlmostFull;
+ (void)getPhotosLibrarySizeWithCompletion:(CDUnknownBlockType)arg1;
+ (void)getPhotosLibraryUploadSizeWithCompletion:(CDUnknownBlockType)arg1;
+ (void)setSimulatedDeviceStorageAlmostFull:(_Bool)arg1;
+ (_Bool)hasPhotosCloudEverBeenEnabled;
+ (id)photosLibraryUploadSize;
+ (id)photosVideosCount;
+ (_Bool)isDeviceStorageNearLowButNotLow;
+ (_Bool)isCachedCloudQuotaAlmostFullOrFull;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCurrentConditions;

@end
