/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class MNActiveRouteInfo;

__attribute__((visibility("hidden")))
@interface _MNTrackedAlternateRoute : NSObject

{
    MNActiveRouteInfo *_alternateRoute;
    MNActiveRouteInfo *_mainRoute;
    CDStruct_3f2a7a20 _divergenceCoordinate;
}

@property (retain, nonatomic) MNActiveRouteInfo *alternateRoute;
@property (retain, nonatomic) MNActiveRouteInfo *mainRoute;
@property (nonatomic) CDStruct_3f2a7a20 divergenceCoordinate;

@end
