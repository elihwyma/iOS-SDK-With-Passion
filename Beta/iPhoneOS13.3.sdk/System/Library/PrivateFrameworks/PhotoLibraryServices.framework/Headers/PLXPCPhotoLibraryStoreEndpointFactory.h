/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL, PLAssetsdClient;

@interface PLXPCPhotoLibraryStoreEndpointFactory : NSObject

{
    NSURL *_libraryURL;
    PLAssetsdClient *_assetsdClient;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)newEndpoint;
- (id)initWithAssetsdClient:(id)arg1;

@end
