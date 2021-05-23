/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class PLAssetsdServicePermissions, PLLazyObject;

@interface PLAssetsdInnerService : NSObject

{
    PLAssetsdServicePermissions *_permissions;
    long long _requiredState;
    PLLazyObject *_lazyService;
}

- (id)initWithPermissions:(id)arg1 requiredLibraryServicesState:(long long)arg2 lazyService:(id)arg3;
- (void)getInnerServiceWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_awaitForRequiredLibraryStateWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)instantiateInnerService;

@end
