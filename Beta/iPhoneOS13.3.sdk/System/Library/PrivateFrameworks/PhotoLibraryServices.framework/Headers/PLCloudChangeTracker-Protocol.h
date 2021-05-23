/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/Swift-Protocol.h>

@class NSString;

@protocol PLCloudChangeTrackerDelegate;

@protocol PLCloudChangeTracker <Swift>

@property (copy, readonly) NSString *name;
@property (weak, nonatomic) id <PLCloudChangeTrackerDelegate> delegate;
@property (copy, readonly) NSString *lastKnownTokenDescription;
@property (readonly) _Bool hasChangeTrackerToken;
@property (copy, readonly) NSString *lastKnownDeletionTokenDescription;

- (unsigned short)disconnect;
- (unsigned short)connect;
- (unsigned short)isConnected;
- (unsigned short)saveLastKnownChangeTrackerTokenToDisk;
- (unsigned short)clearToken;
- (unsigned short)forceTokenToCurrent;
- (unsigned short)fetchAllEvents;
- (unsigned short)fetchDeletionEvents;
- (unsigned short)updateLastKnownTokenToResult: /* Error: Ran out of types for this method. */;
- (unsigned short)updateLastKnownDeletionTokenToResult: /* Error: Ran out of types for this method. */;

@end
