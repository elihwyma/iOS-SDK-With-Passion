/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class NSDictionary;

@interface PLCloudSharedUpdateAlbumMetadataJob : PLCloudSharingJob

{
    NSDictionary *_metadata;
}

@property (retain, nonatomic) NSDictionary *metadata;

+ (void)updateAlbumMetadata:(id)arg1;

- (void)run;
- (id)description;
- (void)encodeToXPCObject:(id)arg1;
- (id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2;
- (void)runDaemonSide;
- (long long)daemonOperation;
- (id)_argumentsDictionaryAsData:(id)arg1;
- (id)_argumentsDictionaryFromXPCEvent:(id)arg1;

@end
