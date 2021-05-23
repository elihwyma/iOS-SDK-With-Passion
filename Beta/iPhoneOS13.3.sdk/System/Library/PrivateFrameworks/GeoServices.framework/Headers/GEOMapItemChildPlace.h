/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOMapItemIdentifier, GEOPDChildPlace, NSString;

@interface GEOMapItemChildPlace : NSObject

{
    GEOPDChildPlace *_childPlace;
    GEOMapItemIdentifier *_identifier;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) GEOMapItemIdentifier *identifier;

- (_Bool)isEqual:(id)arg1;
- (id)initWithChildPlace:(id)arg1;

@end
