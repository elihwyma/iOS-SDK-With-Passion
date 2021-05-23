/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSSet;

@protocol GEOTransitVehicleUpdaterDelegate;

@interface GEOTransitVehicleUpdater : NSObject

{
    id <GEOTransitVehicleUpdaterDelegate> _delegate;
    _Bool _active;
    NSSet *_tripIDs;
}

@property (weak, nonatomic) id <GEOTransitVehicleUpdaterDelegate> delegate;
@property (copy, nonatomic) NSSet *tripIDs;
@property (nonatomic, getter=isActive) _Bool active;

- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end
