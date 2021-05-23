/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class CLLocationManager, NSString;

@interface PXLocationStream : NSObject

{
    unsigned long long _state;
    double _accuracy;
    CDUnknownBlockType _handler;
    CLLocationManager *_locationManager;
}

@property (nonatomic, getter=isClosed) _Bool closed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)_cleanup;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)_open;
- (id)initWithAccuracy:(double)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_requestAuthorization;
- (void)_requestLocation;
- (void)_emitLocation:(id)arg1;
- (void)_closeStreamWithError;

@end
