/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAssetDownloadStorageManagementPolicyInternal, NSDate, NSString;

@interface AVAssetDownloadStorageManagementPolicy : NSObject

{
    AVAssetDownloadStorageManagementPolicyInternal *_storageManagementPolicy;
}

@property (copy, nonatomic, readonly) NSString *priority;
@property (copy, nonatomic, readonly) NSDate *expirationDate;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setPriority:(id)arg1;
- (id)_policyDictionary;
- (void)_setPolicyDictionary:(id)arg1;

@end
