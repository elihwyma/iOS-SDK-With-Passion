/*
 Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

#import <Foundation/NSObject.h>

#import <PlacesKit/Swift-Protocol.h>

@class NSOrderedSet, NSString;

@protocol PXPlacesMapRenderer, PXPlacesMapSelectionHandler;

@interface PXPlacesMapPointAnnotation : NSObject <Swift>

{
    id <PXPlacesMapRenderer> renderer;
    id <PXPlacesMapSelectionHandler> selectionHandler;
    NSOrderedSet *geotaggables;
    long long index;
    struct CLLocationCoordinate2D coordinate;
}

@property (nonatomic) struct CLLocationCoordinate2D coordinate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *subtitle;
@property (weak) id <PXPlacesMapRenderer> renderer;
@property (weak) id <PXPlacesMapSelectionHandler> selectionHandler;
@property (retain) NSOrderedSet *geotaggables;
@property (nonatomic) long long index;

@end
