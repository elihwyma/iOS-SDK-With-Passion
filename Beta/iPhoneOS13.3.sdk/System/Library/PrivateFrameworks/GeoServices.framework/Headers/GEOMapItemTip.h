/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOPDTip, NSString;

@interface GEOMapItemTip : NSObject

{
    GEOPDTip *_geoTip;
}

@property (retain, nonatomic) GEOPDTip *geoTip;
@property (nonatomic, readonly) _Bool hasTipTime;
@property (nonatomic, readonly) double tipTime;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *localizedSnippet;
@property (nonatomic, readonly) NSString *bestImageURL;
@property (nonatomic, readonly) _Bool hasTipId;
@property (nonatomic, readonly) NSString *tipId;

- (id)initWithGEOPDTip:(id)arg1;

@end
