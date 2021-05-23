/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class GEOLocation;

__attribute__((visibility("hidden")))
@interface MNTraceRouteSimulatorEvent : NSObject

{
    double _timestamp;
    GEOLocation *_location;
    CDUnknownBlockType _completion;
}

@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) GEOLocation *location;
@property (nonatomic, readonly) CDUnknownBlockType completion;

- (id)description;
- (id)initWithLocation:(id)arg1;
- (id)initWithTime:(double)arg1 completion:(CDUnknownBlockType)arg2;

@end
