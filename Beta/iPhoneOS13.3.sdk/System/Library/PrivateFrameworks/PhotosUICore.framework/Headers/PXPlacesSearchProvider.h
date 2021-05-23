/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class PXPlacesSnapshotFactory;

@protocol OS_dispatch_queue;

@interface PXPlacesSearchProvider : NSObject

{
    PXPlacesSnapshotFactory *_factory;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (retain, nonatomic) PXPlacesSnapshotFactory *factory;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;

- (id)init;
- (void)requestMapSnapshotForQuery:(id)arg1 ofSize:(struct CGSize)arg2 traitCollectionForSnapshot:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end
