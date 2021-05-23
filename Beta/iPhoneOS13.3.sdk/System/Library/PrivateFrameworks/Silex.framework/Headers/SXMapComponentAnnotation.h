/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <MapKit/MKPointAnnotation.h>

@class SXMapItem;

@interface SXMapComponentAnnotation : MKPointAnnotation

{
    SXMapItem *_mapItem;
}

@property (nonatomic, readonly) SXMapItem *mapItem;

- (id)initWithMapItem:(id)arg1;

@end
