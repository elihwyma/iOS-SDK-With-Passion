/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class PXIndexPathSet;

@protocol PXDisplayCollection;

@interface PXCuratedLibraryAssetCollectionSkimmingInfo : NSObject

{
    _Bool _hintsVisible;
    _Bool _slideshowStarted;
    _Bool _touchInteractionStarted;
    id <PXDisplayCollection> _parentAssetCollection;
    long long _childCollectionsZoomLevel;
    PXIndexPathSet *_childCollectionsIndexes;
    struct PXSimpleIndexPath _currentChildCollectionIndexPath;
}

@property (nonatomic) _Bool hintsVisible;
@property (nonatomic) _Bool slideshowStarted;
@property (nonatomic) _Bool touchInteractionStarted;
@property (retain, nonatomic) id <PXDisplayCollection> parentAssetCollection;
@property (nonatomic) long long childCollectionsZoomLevel;
@property (retain, nonatomic) PXIndexPathSet *childCollectionsIndexes;
@property (nonatomic) struct PXSimpleIndexPath currentChildCollectionIndexPath;

@end
