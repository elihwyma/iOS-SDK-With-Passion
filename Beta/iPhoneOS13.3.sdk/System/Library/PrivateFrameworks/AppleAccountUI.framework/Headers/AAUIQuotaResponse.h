/*
 Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

#import <AppleAccount/AAResponse.h>

@class NSArray, NSDictionary, NSNumber, NSString, NSURL;

@interface AAUIQuotaResponse : AAResponse

{
    NSDictionary *_quotaInfo;
    NSArray *_usage;
    NSDictionary *_endPoints;
    NSDictionary *_storageInfo;
    NSDictionary *_storageMeterLabel;
}

@property (nonatomic, readonly) NSNumber *availableStorageInBytes;
@property (nonatomic, readonly) NSNumber *usedStorageInBytes;
@property (nonatomic, readonly) NSNumber *totalStorageInBytes;
@property (nonatomic, readonly) NSArray *usage;
@property (nonatomic, readonly) NSArray *iCloudMediaUsage;
@property (nonatomic, readonly) _Bool hasMaxTier;
@property (nonatomic, readonly) NSString *displayLabel;
@property (nonatomic, readonly) NSURL *manageStorageURL;

- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end
