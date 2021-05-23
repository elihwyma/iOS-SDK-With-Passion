/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class MKMapItem, NSURL, NSURLRequest;

@interface MKMapItemMetadataRequest : NSObject

{
    MKMapItem *_mapItem;
}

@property (nonatomic, readonly) NSURLRequest *urlRequest;
@property (retain, nonatomic) MKMapItem *mapItem;
@property (nonatomic, readonly) NSURL *url;

- (void)handleError:(id)arg1;
- (void)handleData:(id)arg1;

@end
