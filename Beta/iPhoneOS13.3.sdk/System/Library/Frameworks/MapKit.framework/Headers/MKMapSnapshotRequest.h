/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class MKMapSnapshotCreator, NSString, UIImage, VKMapSnapshotCreator;

__attribute__((visibility("hidden")))
@interface MKMapSnapshotRequest : NSObject

{
    id _requester;
    id _context;
    struct CLLocationCoordinate2D _coordinate;
    unsigned long long _zoomLevel;
    struct CGSize _size;
    UIImage *_image;
    NSString *_attributionString;
    MKMapSnapshotCreator *_delegate;
    VKMapSnapshotCreator *_snapshotCreator;
}

@property (retain, nonatomic) id context;
@property (retain, nonatomic) id requester;
@property (retain, nonatomic) NSString *attributionString;
@property (nonatomic) struct CLLocationCoordinate2D coordinate;
@property (nonatomic) unsigned long long zoomLevel;
@property (nonatomic) struct CGSize size;
@property (weak, nonatomic) MKMapSnapshotCreator *delegate;
@property (nonatomic, readonly) UIImage *image;

- (id)description;
- (void)cancel;
- (void)start;

@end
