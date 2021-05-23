/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/Swift-Protocol.h>

@class NSString;

@protocol PLClientAuthorization <Swift>

@property (nonatomic, readonly) NSString *trustedCallerBundleID;
@property (nonatomic, readonly) NSString *trustedCallerDisplayName;
@property (nonatomic, readonly) int clientProcessIdentifier;
@property (nonatomic, readonly) _Bool photoKitEntitled;
@property (nonatomic, readonly) CDStruct_4c969caf clientAuditToken;
@property (nonatomic, readonly) _Bool directDatabaseWriteAuthorized;

- (unsigned short)photoKitEntitledFor: /* Error: Ran out of types for this method. */;

@end
