/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class MKMapSnapshotter, UIImage;

@interface MKPlaceholderGridCache : NSObject

{
    struct os_unfair_lock_s _lock;
    struct os_unfair_lock_s _snapshotterLock;
    MKMapSnapshotter *_lightSnapshotter;
    MKMapSnapshotter *_darkSnapshotter;
    UIImage *_lightGrid;
    UIImage *_darkGrid;
}

@property (nonatomic, readonly) UIImage *lightGrid;
@property (nonatomic, readonly) UIImage *darkGrid;

+ (id)unretainedInstance;

- (id)init;
- (void)_cancelSnapshots;
- (void)_saveLightGrid:(id)arg1;
- (void)_saveDarkGrid:(id)arg1;
- (void)loadPlaceholderGridImages;

@end
