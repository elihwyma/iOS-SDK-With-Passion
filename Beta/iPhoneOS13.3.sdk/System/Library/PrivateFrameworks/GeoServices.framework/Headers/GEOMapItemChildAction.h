/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOMapItemChildActionSearch;

@interface GEOMapItemChildAction : NSObject

{
    long long _childActionType;
    GEOMapItemChildActionSearch *_childActionSearch;
}

@property (nonatomic) long long childActionType;
@property (retain, nonatomic) GEOMapItemChildActionSearch *childActionSearch;

- (id)initWithChildAction:(id)arg1;

@end
