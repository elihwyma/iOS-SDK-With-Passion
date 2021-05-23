/*
 Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

#import <Foundation/NSObject.h>

@class NSMutableOrderedSet, NSOrderedSet, NSString, PXPlacesMapViewPort;

@interface PXPlacesMapLayoutResultImpl : NSObject

{
    PXPlacesMapViewPort *_viewPort;
    NSMutableOrderedSet *_items;
}

@property (retain, nonatomic) NSMutableOrderedSet *items;
@property (retain, nonatomic) PXPlacesMapViewPort *viewPort;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSOrderedSet *layoutItems;

- (id)init;
- (void)removeItem:(id)arg1;
- (void)addItem:(id)arg1;
- (void)addItems:(id)arg1;

@end
