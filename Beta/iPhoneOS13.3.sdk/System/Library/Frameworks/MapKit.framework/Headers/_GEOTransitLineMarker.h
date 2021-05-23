/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol GEOTransitLine;

__attribute__((visibility("hidden")))
@interface _GEOTransitLineMarker : NSObject

{
    id <GEOTransitLine> _line;
    struct CLLocationCoordinate2D _locationHint;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)artwork;
- (id)labelText;
- (id)mapItemIdentifier;
- (id)initWithGEOTransitLine:(id)arg1 locationHint:(struct CLLocationCoordinate2D)arg2;

@end
