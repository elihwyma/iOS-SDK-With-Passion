/*
 Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import <Foundation/NSObject.h>

@class _CLLocationSmootherProxy;

@protocol CLLocationManagerDelegateInternal;

@interface CLLocationSmoother : NSObject

{
    _CLLocationSmootherProxy *_locationManagerSmootherProxy;
}

@property (retain, nonatomic, readonly) _CLLocationSmootherProxy *locationManagerSmootherProxy;
@property (nonatomic) id <CLLocationManagerDelegateInternal> delegate;

- (void)dealloc;
- (void)smoothLocations:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)smoothLocations:(id)arg1;

@end
