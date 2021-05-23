/*
 Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

#import <PlacesKit/Swift-Protocol.h>

@protocol PXPlacesMapPipelineComponentProvider;

@protocol PXPlacesMapPipelineComponent <Swift>

@property (weak, nonatomic) id <PXPlacesMapPipelineComponentProvider> pipelineComponentProvider;

- (unsigned short)reset;

@end
