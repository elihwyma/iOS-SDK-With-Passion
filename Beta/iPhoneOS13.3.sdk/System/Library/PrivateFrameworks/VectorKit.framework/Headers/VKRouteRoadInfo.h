/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VKRouteRoadInfo : NSObject

{
    NSString *_name;
    NSString *_shieldGroup;
    struct PolylineCoordinate _routeOffset;
}

@property (retain, nonatomic, readonly) NSString *name;
@property (retain, nonatomic, readonly) NSString *shieldGroup;
@property (nonatomic, readonly) struct PolylineCoordinate routeOffset;

- (void)dealloc;
- (id).cxx_construct;
- (id)initWithName:(id)arg1 shieldGroup:(id)arg2 offset:(struct PolylineCoordinate)arg3;

@end
