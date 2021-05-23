/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class CLLocation;

@interface PLLocationOfInterestLocation : NSObject

{
    CLLocation *_location;
    double _uncertainty;
}

@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) double uncertainty;

- (id)description;
- (id)initWithLocation:(id)arg1 uncertainty:(double)arg2;
- (double)distanceFromLocation:(id)arg1 withTypeRadius:(double)arg2;

@end
