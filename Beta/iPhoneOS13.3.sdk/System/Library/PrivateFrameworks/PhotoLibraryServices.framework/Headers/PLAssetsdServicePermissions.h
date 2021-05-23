/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

#import <PhotoLibraryServices/Swift-Protocol.h>

@class NSArray;

@interface PLAssetsdServicePermissions : NSObject <Swift>

{
    _Bool _allowsAuthorizationWithPhotoKitEntitlement;
    long long _requiredAuthorization;
    NSArray *_requiredEntitlements;
}

@property (nonatomic) long long requiredAuthorization;
@property (nonatomic) _Bool allowsAuthorizationWithPhotoKitEntitlement;
@property (copy, nonatomic) NSArray *requiredEntitlements;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPermissions:(id)arg1;
- (id)verifyPermissionsWithContext:(id)arg1;
- (id)_verifyAuthorizationWithContext:(id)arg1;
- (_Bool)_isAuthorizedViaTCCWithContext:(id)arg1;
- (_Bool)_isAuthorizedForReadWriteWithContext:(id)arg1;
- (_Bool)_isAuthorizedForWriteOnlyWithContext:(id)arg1;
- (_Bool)_isAuthorizedViaPhotoKitEntitlementWithContext:(id)arg1;
- (id)_verifyEntitlementsWithContext:(id)arg1;
- (id)_errorForMissingEntitlements:(id)arg1 withContext:(id)arg2;

@end
