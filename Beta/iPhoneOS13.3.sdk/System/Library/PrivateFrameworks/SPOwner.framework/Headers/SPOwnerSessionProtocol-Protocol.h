/*
 Image: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
 */

#import <SPOwner/Swift-Protocol.h>

@class NSSet;

@protocol SPOwnerSessionProtocol <Swift>

@property (copy, nonatomic) NSSet *locationSources;
@property (copy, nonatomic) CDUnknownBlockType beaconsChangedBlock;
@property (copy, nonatomic) CDUnknownBlockType beaconAddedBlock;
@property (copy, nonatomic) CDUnknownBlockType beaconRemovedBlock;
@property (copy, nonatomic) CDUnknownBlockType latestLocationsUpdatedBlock;
@property (copy, nonatomic, readonly) NSSet *allBeacons;

- (unsigned short)allBeaconsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)unacceptedBeaconsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)removeBeacon:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)executeCommand:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)startRefreshing;
- (unsigned short)locationsForBeacons:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)startRefreshingBeacons: /* Error: Ran out of types for this method. */;
- (unsigned short)stopRefreshing;
- (unsigned short)executeCommand: /* Error: Ran out of types for this method. */;
- (unsigned short)shareBeacon:handles:completion: /* Error: Ran out of types for this method. */;

@end
