/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class GEOMapItemAttribution, MKMapItem, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface GEOEncyclopedicInfoUserLocation : NSObject

{
    MKMapItem *_mapItem;
}

@property (retain, nonatomic) MKMapItem *mapItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool hasTextBlock;
@property (nonatomic, readonly) NSString *textBlockTitle;
@property (nonatomic, readonly) NSString *textBlockText;
@property (nonatomic, readonly) _Bool hasPairOfFactoids;
@property (nonatomic, readonly) NSArray *factoids;
@property (nonatomic, readonly) _Bool hasStandAloneFactoids;
@property (nonatomic, readonly) GEOMapItemAttribution *encyclopedicAttribution;

- (id)initWithMapItem:(id)arg1;

@end
