/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class GEOMapItemStorage, GEOPDPlace, _INPBValueMetadata;

@protocol _INPBLocationValue <Swift>

@property (retain, nonatomic) GEOMapItemStorage *mapItemStorage;
@property (nonatomic, readonly) _Bool hasMapItemStorage;
@property (retain, nonatomic) GEOPDPlace *place;
@property (nonatomic, readonly) _Bool hasPlace;
@property (retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property (nonatomic, readonly) _Bool hasValueMetadata;

@end
