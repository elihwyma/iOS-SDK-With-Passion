/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSSet;

@protocol GEOTransitRouteUpdaterDelegate;

@interface GEOTransitRouteUpdater : NSObject

{
    id <GEOTransitRouteUpdaterDelegate> _delegate;
    _Bool _active;
    NSSet *_requests;
}

@property (weak, nonatomic) id <GEOTransitRouteUpdaterDelegate> delegate;
@property (copy, nonatomic) NSSet *requests;
@property (nonatomic, getter=isActive) _Bool active;

- (void)dealloc;
- (id)initWithDelegate:(id)arg1 andInitialTTL:(double)arg2;

@end
