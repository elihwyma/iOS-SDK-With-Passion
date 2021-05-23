/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOPDContainedPlace, NSArray;

@protocol GEOMapItem;

@interface GEOMapItemContainedPlace : NSObject

{
    GEOPDContainedPlace *_containedPlace;
    id <GEOMapItem> _parent;
    NSArray *_children;
    NSArray *_siblings;
}

@property (nonatomic, readonly) unsigned long long featureId;
@property (nonatomic, readonly) unsigned long long parentFeatureId;
@property (nonatomic, readonly) id <GEOMapItem> parent;
@property (nonatomic, readonly) NSArray *children;
@property (nonatomic, readonly) NSArray *siblings;

- (id)init;
- (id)description;
- (id)initWithContainedPlace:(id)arg1;

@end
