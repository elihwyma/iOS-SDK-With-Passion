/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSArray, NSString;

@interface SSDownloadManagerOptions : NSObject

{
    NSArray *_downloadKinds;
    _Bool _filterExternalOriginatedDownloads;
    NSString *_persistenceIdentifier;
    NSArray *_prefetchedDownloadExternalProperties;
    NSArray *_prefetchedDownloadProperties;
    _Bool _ignoreDivertedDownloads;
}

@property (copy, nonatomic) NSArray *prefetchedDownloadExternalProperties;
@property (nonatomic) _Bool ignoreDivertedDownloads;
@property (copy, nonatomic) NSArray *downloadKinds;
@property (copy, nonatomic) NSString *persistenceIdentifier;
@property (copy, nonatomic) NSArray *prefetchedDownloadProperties;
@property (nonatomic) _Bool shouldFilterExternalOriginatedDownloads;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
