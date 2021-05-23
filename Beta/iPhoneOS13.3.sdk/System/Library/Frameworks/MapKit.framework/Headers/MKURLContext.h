/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class GEOCompanionRouteContext;

@interface MKURLContext : NSObject

{
    _Bool _originatedFromWatch;
    GEOCompanionRouteContext *_companionRouteContext;
}

@property (nonatomic, readonly) _Bool originatedFromWatch;
@property (copy, nonatomic, readonly) GEOCompanionRouteContext *companionRouteContext;

- (id)initWithOriginatedFromWatch:(_Bool)arg1 companionRouteContext:(id)arg2;

@end
