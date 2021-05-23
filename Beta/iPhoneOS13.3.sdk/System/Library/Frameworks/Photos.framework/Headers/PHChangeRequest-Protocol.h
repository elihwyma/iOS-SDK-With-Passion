/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/Swift-Protocol.h>

@class NSManagedObjectID, NSString;

@protocol PHChangeRequest <Swift>

@property (nonatomic, readonly) NSString *managedEntityName;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic, readonly, getter=isClientEntitled) _Bool clientEntitled;
@property (nonatomic, readonly) NSString *clientName;

- (unsigned short)initWithUUID:objectID: /* Error: Ran out of types for this method. */;
- (unsigned short)encodeToXPCDict: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithXPCDict:request:clientAuthorization: /* Error: Ran out of types for this method. */;
- (unsigned short)prepareForServicePreflightCheck: /* Error: Ran out of types for this method. */;
- (unsigned short)prepareForPhotoLibraryCheck:error: /* Error: Ran out of types for this method. */;

@end
