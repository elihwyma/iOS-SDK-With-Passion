/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class GEOBusiness, NSMutableDictionary;

@interface MKMapItemMetadata : NSObject

{
    GEOBusiness *_business;
    NSMutableDictionary *_imageCache;
}

@property (retain, nonatomic) NSMutableDictionary *imageCache;
@property (nonatomic, readonly) GEOBusiness *business;

- (id)description;
- (id)imageForURL:(id)arg1;
- (id)initWithBusiness:(id)arg1;
- (void)addImage:(id)arg1 forURL:(id)arg2;

@end
