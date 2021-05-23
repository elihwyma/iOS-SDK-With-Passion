/*
 Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol PXPlacesGeotaggedItemDataSource, PXPlacesMapPipelineComponentProvider;

@interface PXPlacesMapLayout : NSObject

{
    id <PXPlacesGeotaggedItemDataSource> _dataSource;
    id <PXPlacesMapPipelineComponentProvider> pipelineComponentProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <PXPlacesMapPipelineComponentProvider> pipelineComponentProvider;
@property (readonly) id <PXPlacesGeotaggedItemDataSource> dataSource;

- (void)reset;
- (id)initWithDataSource:(id)arg1;
- (id)layoutForViewPort:(id)arg1 andDataSourceChange:(id)arg2;
- (id)layoutItemForGeotaggable:(id)arg1;

@end
