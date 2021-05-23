/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class MNActiveRouteInfo, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface MNAlternateRoutesUpdater : NSObject

{
    MNActiveRouteInfo *_mainRoute;
    NSArray *_alternateRoutes;
    NSMutableArray *_trackedAlternateRoutes;
}

@property (nonatomic, readonly) NSArray *alternateRoutes;

- (_Bool)updateForLocation:(id)arg1;
- (_Bool)setAlternateRoutes:(id)arg1 forMainRoute:(id)arg2;
- (_Bool)updateForReroute:(id)arg1 rerouteReason:(unsigned long long)arg2;
- (id)alternateRouteForLocation:(id)arg1;
- (id)_findTrackedAlternateRouteMatching:(id)arg1;

@end
