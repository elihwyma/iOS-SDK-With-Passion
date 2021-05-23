/*
 Image: /System/Library/PrivateFrameworks/SPFinder.framework/SPFinder
 */

#import <Foundation/NSObject.h>

@class SPAdvertisementCache;

@interface SPFinderInterface : NSObject

{
    SPAdvertisementCache *_advertisementCache;
}

@property (retain, nonatomic) SPAdvertisementCache *advertisementCache;

- (id)stateManager;
- (id)beaconPayloadCache;
- (id)finderStateManager;

@end
