/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Photos/PHAssetCollection.h>

@class NSDate, NSDateComponents;

@interface PHAssetCollection (Clouseau)

@property (nonatomic, readonly) NSDate *cls_universalStartDate;
@property (nonatomic, readonly) NSDate *cls_universalEndDate;
@property (nonatomic, readonly) NSDate *cls_localStartDate;
@property (nonatomic, readonly) NSDate *cls_localEndDate;
@property (nonatomic, readonly) NSDateComponents *cls_localStartDateComponents;
@property (nonatomic, readonly) NSDateComponents *cls_localEndDateComponents;

- (id)_legacyLocalStartDateComponents;
- (id)_legacyLocalEndDateComponents;
- (id)_legacyUniversalStartDate;
- (id)_legacyUniversalEndDate;
- (id)_legacyLocalStartDate;
- (id)_legacyLocalEndDate;
- (id)_fetchFirstAssetSortedByCreationDateAscending:(_Bool)arg1;

@end
