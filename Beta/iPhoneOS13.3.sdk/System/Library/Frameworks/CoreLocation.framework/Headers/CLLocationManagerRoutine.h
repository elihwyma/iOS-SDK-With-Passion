/*
 Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import <Foundation/NSObject.h>

@class _CLLocationManagerRoutineProxy;

@protocol CLLocationManagerDelegate;

@interface CLLocationManagerRoutine : NSObject

{
    _CLLocationManagerRoutineProxy *_locationManagerRoutineProxy;
}

@property (retain, nonatomic) _CLLocationManagerRoutineProxy *locationManagerRoutineProxy;
@property (nonatomic) id <CLLocationManagerDelegate> delegate;

- (id)init;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (void)startUpdatingLocation;
- (void)stopUpdatingLocation;

@end
