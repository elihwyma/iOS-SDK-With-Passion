/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKRouteActivityProvider.h>

@class GEOComposedRoute, LPLinkMetadata, NSString;

@interface MKRouteLinkPresentationActivityProvider : MKRouteActivityProvider

{
    GEOComposedRoute *_composedRoute;
    LPLinkMetadata *_cachedMetadata;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)activityViewControllerLinkPresentationMetadata:(id)arg1;
- (id)initWithSource:(id)arg1 destination:(id)arg2 composedRoute:(id)arg3;
- (id)mapMetadataSpecialization;

@end
