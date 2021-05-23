/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <CoreLocation/CLLocation.h>

@interface CLLocation (PLLocationHash)

- (id)pl_newSurroundingLocationsHashes;
- (int)pl_locationHash;

@end
