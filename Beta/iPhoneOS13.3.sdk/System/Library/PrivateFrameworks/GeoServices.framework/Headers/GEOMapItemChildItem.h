/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOMapItemChildAction, GEOMapItemChildPlace;

@interface GEOMapItemChildItem : NSObject

{
    long long _childItemType;
    GEOMapItemChildPlace *_childItemPlace;
    GEOMapItemChildAction *_childItemAction;
}

@property (nonatomic) long long childItemType;
@property (retain, nonatomic) GEOMapItemChildPlace *childItemPlace;
@property (retain, nonatomic) GEOMapItemChildAction *childItemAction;

- (id)initWithChildItem:(id)arg1;
- (id)initWithChildPlace:(id)arg1;

@end
