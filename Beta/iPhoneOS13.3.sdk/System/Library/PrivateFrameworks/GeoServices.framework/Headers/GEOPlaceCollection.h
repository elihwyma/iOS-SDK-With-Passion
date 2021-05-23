/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOMapItemAttribution, GEOPDAttribution, GEOPDPlaceCollection, NSData, NSString;

@interface GEOPlaceCollection : NSObject

{
    GEOPDPlaceCollection *_collection;
    GEOPDAttribution *_dataAttribution;
    GEOMapItemAttribution *_attribution;
}

@property (nonatomic, readonly) NSData *storageData;
@property (nonatomic, readonly) unsigned long long muid;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *actionURLString;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) unsigned long long placeCount;

+ (id)placeCollectionForData:(id)arg1;

- (void)loadAttribution;
- (id)initWithCollection:(id)arg1 attribution:(id)arg2;
- (id)imageURLforSize:(struct CGSize)arg1;

@end
