/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/Swift-Protocol.h>

@class NSError, NSString;

@protocol PLAssetsdServiceContext <Swift>

@property (nonatomic, readonly) _Bool isClientAuthorizedForTCCServicePhotos;
@property (nonatomic, readonly) _Bool isClientAuthorizedForTCCServicePhotosAdd;
@property (copy, nonatomic, readonly) NSString *clientDebugDescription;
@property (copy, nonatomic) NSError *replyWarning;

- (unsigned short)hasEntitlement: /* Error: Ran out of types for this method. */;
- (unsigned short)awaitLibraryState:completionHandler: /* Error: Ran out of types for this method. */;

@end
