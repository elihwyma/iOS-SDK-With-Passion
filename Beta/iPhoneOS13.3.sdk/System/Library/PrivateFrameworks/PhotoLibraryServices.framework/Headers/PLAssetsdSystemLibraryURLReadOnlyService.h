/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSString, PLAssetsdConnectionAuthorization;

@interface PLAssetsdSystemLibraryURLReadOnlyService : NSObject

{
    PLAssetsdConnectionAuthorization *_connectionAuthorization;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithConnectionAuthorization:(id)arg1;
- (void)systemPhotoLibraryURL:(CDUnknownBlockType)arg1;

@end
