/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOPDPriceDescription, NSString;

@interface GEOPriceDescription : NSObject

{
    GEOPDPriceDescription *_geoPriceDescription;
}

@property (retain, nonatomic) GEOPDPriceDescription *geoPriceDescription;
@property (nonatomic, readonly) _Bool hasPriceDescription;
@property (nonatomic, readonly) NSString *priceDescription;

- (id)initWithGEOPDPriceDescription:(id)arg1;

@end
