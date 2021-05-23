/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIImageView.h>

@class MKMapSnapshotter;

__attribute__((visibility("hidden")))
@interface MKMapSnapshotView : UIImageView

{
    MKMapSnapshotter *_snapshotter;
    MKMapSnapshotter *_gridSnapshotter;
}

- (void)cancel;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)takeSnapshotWithOptions:(id)arg1 gridOptions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
