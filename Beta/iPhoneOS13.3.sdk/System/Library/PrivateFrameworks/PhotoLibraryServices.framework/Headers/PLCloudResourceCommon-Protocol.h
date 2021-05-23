/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/Swift-Protocol.h>

@class CPLScopedIdentifier, NSDate, NSManagedObjectID, NSString;

@protocol PLCloudResourceCommon <Swift>

@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (retain, nonatomic, readonly) NSString *assetUuid;
@property (nonatomic, readonly) unsigned long long cplType;
@property (nonatomic, readonly) unsigned long long sourceCplType;
@property (nonatomic) _Bool isAvailable;
@property (nonatomic, readonly) _Bool isLocallyAvailable;
@property (nonatomic, readonly) unsigned long long fileSize;
@property (retain, nonatomic, readonly) NSString *filePath;
@property (retain, nonatomic, readonly) NSString *fingerprint;
@property (retain, nonatomic, readonly) CPLScopedIdentifier *scopedIdentifier;
@property (nonatomic, readonly) long long height;
@property (nonatomic, readonly) long long width;
@property (retain, nonatomic, readonly) NSString *utiString;
@property (nonatomic, readonly) unsigned int resourceRecipeID;
@property (nonatomic) short cloudLocalState;
@property (nonatomic) short prefetchCount;
@property (retain, nonatomic) NSDate *lastPrefetchDate;
@property (retain, nonatomic) NSDate *lastOnDemandDownloadDate;
@property (retain, nonatomic) NSDate *prunedAt;

- (unsigned short)cplResourceIncludeFile: /* Error: Ran out of types for this method. */;

@end
