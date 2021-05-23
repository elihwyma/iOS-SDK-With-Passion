/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/Swift-Protocol.h>

@class NSArray;

@protocol PLSyncContext <Swift>

@property (nonatomic, readonly) _Bool serverSupportsVision;
@property (nonatomic, readonly) _Bool serverSupportsGraphHome;
@property (nonatomic, readonly) _Bool serverSupportsSuggestion;
@property (copy, nonatomic) NSArray *personUUIDsToDedupe;

- (unsigned short)makeFace;
- (unsigned short)deleteFaces: /* Error: Ran out of types for this method. */;
- (unsigned short)personForUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)personUUIDIsDeleted: /* Error: Ran out of types for this method. */;
- (unsigned short)assetAdjustmentStateForCloudIdentifier: /* Error: Ran out of types for this method. */;

@end
