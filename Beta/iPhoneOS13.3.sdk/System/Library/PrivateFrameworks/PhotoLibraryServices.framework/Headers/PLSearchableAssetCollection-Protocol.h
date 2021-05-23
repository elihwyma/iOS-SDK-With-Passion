/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/Swift-Protocol.h>

@class NSDate, NSString;

@protocol PLSearchableAssetCollection <Swift>

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSString *keyAssetUUID;
@property (nonatomic, readonly) NSDate *keyAssetCreationDate;
@property (nonatomic, readonly) NSDate *searchableStartDate;
@property (nonatomic, readonly) NSDate *searchableEndDate;
@property (nonatomic, readonly) unsigned long long numberOfAssets;

- (unsigned short)uuid;
- (unsigned short)assetUUIDsForPreviewWithCount: /* Error: Ran out of types for this method. */;
- (unsigned short)searchIndexContents;
- (unsigned short)searchIndexCategory;

@end
