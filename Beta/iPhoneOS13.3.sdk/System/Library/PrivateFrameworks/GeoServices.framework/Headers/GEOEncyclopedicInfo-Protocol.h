/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@class GEOMapItemAttribution, NSArray, NSString;

@protocol GEOEncyclopedicInfo <Swift>

@property (nonatomic, readonly) _Bool hasTextBlock;
@property (nonatomic, readonly) NSString *textBlockTitle;
@property (nonatomic, readonly) NSString *textBlockText;
@property (nonatomic, readonly) _Bool hasPairOfFactoids;
@property (nonatomic, readonly) NSArray *factoids;
@property (nonatomic, readonly) _Bool hasStandAloneFactoids;
@property (nonatomic, readonly) GEOMapItemAttribution *encyclopedicAttribution;

@end
