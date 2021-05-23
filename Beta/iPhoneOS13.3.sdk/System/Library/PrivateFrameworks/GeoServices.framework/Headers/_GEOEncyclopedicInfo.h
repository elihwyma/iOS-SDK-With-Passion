/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOMapItemAttribution, GEOPDPlace, NSArray, NSMapTable, NSString;

__attribute__((visibility("hidden")))
@interface _GEOEncyclopedicInfo : NSObject

{
    GEOPDPlace *_placeData;
    NSMapTable *_attributionMap;
}

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

- (id)initWithPlaceData:(id)arg1 attributionMap:(id)arg2;

@end
