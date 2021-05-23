/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class MKMapView, NSString;

__attribute__((visibility("hidden")))
@interface _MKMapViewSuspendedEffectsToken : NSObject

{
    _Bool _invalidated;
    MKMapView *_owner;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (id)initWithOwner:(id)arg1;

@end
