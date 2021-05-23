/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKPlaceActivityProvider.h>

@class LPLinkMetadata, NSString;

@interface MKPlaceLinkPresentationActivityProvider : MKPlaceActivityProvider

{
    LPLinkMetadata *_cachedMetadata;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)activityViewControllerLinkPresentationMetadata:(id)arg1;

@end
