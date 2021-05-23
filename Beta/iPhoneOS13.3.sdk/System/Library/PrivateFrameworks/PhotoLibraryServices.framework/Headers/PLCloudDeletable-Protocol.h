/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/Swift-Protocol.h>

@class NSString;

@protocol PLCloudDeletable <Swift>

@property (nonatomic) short cloudDeleteState;
@property (readonly) long long cloudDeletionType;
@property (copy, readonly) NSString *cloudUUIDForDeletion;

+ (unsigned short)cloudDeletionTypeForTombstone: /* Error: Ran out of types for this method. */;
+ (unsigned short)cloudUUIDKeyForDeletion;

@end
