/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <GeoServices/GEOFeatureStyleAttributes.h>

@interface GEOFeatureStyleAttributes (MapKitExtras)

+ (id)styleAttributesForSearchResultWithAttributes:(id)arg1;
+ (id)annotationViewProvidedCustomFeatureStyleAttributes;
+ (id)styleAttributesForCalloutWithAttributes:(id)arg1;
+ (id)styleAttributesForTrafficCameraType:(long long)arg1 isAboveThreshold:(_Bool)arg2;
+ (id)styleAttributesForTrafficIncidentType:(long long)arg1;
+ (id)styleAttributesForDraggingWithAttributes:(id)arg1;
+ (id)markerStyleAttributes;
+ (id)genericServiceStyleAttributes;
+ (id)trainStationStyleAttributes;
+ (id)genericMarkerStyleAttributes;
+ (id)styleAttributesForTransitType:(long long)arg1;

@end
