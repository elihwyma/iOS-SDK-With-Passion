/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class MKMapCamera, MKMapSnapshotOptions, MKMapSnapshotter, NSArray, UITraitCollection;

@interface MKGroupedPlacesSnapshotter : NSObject

{
    NSArray *_mapItems;
    struct CGSize _mapSize;
    MKMapSnapshotOptions *_snapshotOptions;
    _Bool _useSnapshotService;
    MKMapSnapshotter *_snapshotter;
    UITraitCollection *_traitCollection;
}

@property (nonatomic, readonly) MKMapCamera *camera;
@property (nonatomic, readonly, getter=isLoading) _Bool loading;
@property (retain, nonatomic) UITraitCollection *traitCollection;

- (void)cancel;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startWithQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithMapItems:(id)arg1 mapSize:(struct CGSize)arg2 useSnapshotService:(_Bool)arg3;
- (void)_initSnapshotterWithMapItems;

@end
