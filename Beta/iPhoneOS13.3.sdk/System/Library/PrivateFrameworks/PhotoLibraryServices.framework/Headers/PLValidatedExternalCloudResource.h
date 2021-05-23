/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLValidatedExternalResource.h>

@class NSDate, NSString;

@interface PLValidatedExternalCloudResource : PLValidatedExternalResource

{
    short _remoteAvailability;
    short _cloudLocalState;
    short _prefetchCount;
    unsigned long long _cplType;
    unsigned long long _sourceCplType;
    NSDate *_masterDateCreated;
    NSDate *_lastOnDemandDownloadDate;
    NSDate *_lastPrefetchDate;
    NSDate *_prunedAt;
    NSString *_fingerprint;
}

@property (nonatomic) short cloudLocalState;
@property (retain, nonatomic) NSDate *masterDateCreated;
@property (retain, nonatomic) NSDate *lastOnDemandDownloadDate;
@property (retain, nonatomic) NSDate *lastPrefetchDate;
@property (nonatomic) short prefetchCount;
@property (retain, nonatomic) NSDate *prunedAt;
@property (nonatomic) unsigned long long cplType;
@property (nonatomic) unsigned long long sourceCplType;
@property (retain, nonatomic) NSString *fingerprint;
@property (nonatomic) short remoteAvailability;

- (id)initWithCloudResource:(id)arg1;
- (unsigned long long)cplTypeWithAssetID:(id)arg1;
- (_Bool)isEqualToValidatedExternalResource:(id)arg1;
- (id)initWithInternalResource:(id)arg1;

@end
