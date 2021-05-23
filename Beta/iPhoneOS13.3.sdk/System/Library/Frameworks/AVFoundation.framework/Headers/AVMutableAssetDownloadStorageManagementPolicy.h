/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVAssetDownloadStorageManagementPolicy.h>

@class NSDate, NSString;

@interface AVMutableAssetDownloadStorageManagementPolicy : AVAssetDownloadStorageManagementPolicy

@property (copy, nonatomic) NSString *priority;
@property (copy, nonatomic) NSDate *expirationDate;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
