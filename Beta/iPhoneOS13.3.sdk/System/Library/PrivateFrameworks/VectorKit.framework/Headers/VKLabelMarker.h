/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <VectorKit/VKFeatureMarker.h>

@class NSArray;

@interface VKLabelMarker : VKFeatureMarker

{
    shared_ptr_2d33c5e4 _labelMarker;
}

@property (nonatomic) _Bool isDragged;
@property (nonatomic, readonly) NSArray *shields;
@property (nonatomic, readonly) NSArray *transitSystems;
@property (nonatomic, readonly) NSArray *dataIconImageKeys;
@property (nonatomic, readonly) NSArray *iconImageKeys;
@property (nonatomic, readonly) NSArray *imageKeys;
@property (nonatomic, readonly) NSArray *relatedTexts;
@property (nonatomic, readonly) NSArray *relatedSubTexts;

+ (id)markerWithLabelMarker:(const shared_ptr_2d33c5e4 *)arg1;

- (id)locale;
- (CDStruct_c3b9c2ee)coordinate;
- (id).cxx_construct;
- (id)text;
- (_Bool)isSelectable;
- (_Bool)isSelected;
- (_Bool)isVisible;
- (Box_3d7e3c2c)_bounds;
- (unsigned long long)elementCount;
- (int)featureType;
- (id)mapRegion;
- (_Bool)isTransit;
- (id)trafficCamera;
- (id)featureHandles;
- (_Bool)hasBusinessID;
- (unsigned long long)businessID;
- (unsigned long long)animationID;
- (unsigned long long)venueID;
- (id)routeInfo;
- (int)sortKey;
- (int)selectionType;
- (unsigned char)pickedLabelBalloonBehavior;
- (id)featureAnnotation;
- (short)venueFloorOrdinal;
- (_Bool)isFlyoverTour;
- (_Bool)isTransitLine;
- (unsigned long long)countFeatureIDs;
- (void)setLabelPressed:(_Bool)arg1;
- (unsigned long long)venueBuildingID;
- (unsigned long long)venueLevelID;
- (unsigned long long)venueComponentID;
- (_Bool)isRouteEta;
- (struct CGRect)calloutAnchorRect;
- (_Bool)isTrafficIncident;
- (id)incident;
- (_Bool)isCluster;
- (unsigned long long)clusterFeatureCount;
- (_Bool)isOnRoute;
- (const shared_ptr_2d33c5e4 *)labelMarkerImpl;
- (id)initWithLabelMarkerPtr:(const shared_ptr_2d33c5e4 *)arg1;
- (struct CGPoint)calloutAnchorPointWithCanvasSize:(struct CGSize)arg1 canvasScale:(double)arg2 snapToPixels:(_Bool)arg3;
- (id)subtext;
- (_Bool)isAlongSelectedTransitLine;
- (_Bool)isTextVisible;
- (_Bool)isOneWayArrow;
- (_Bool)isTrafficCamera;
- (_Bool)isVenueButton;
- (_Bool)isTransitAccessPoint;
- (const unsigned long long *)featureIDs;
- (short)venueLookInsideFloorOrdinal;
- (_Bool)hasVenueLookInsideFloorOrdinal;
- (unsigned char)venueComponentType;
- (_Bool)positionOfInterest:(CDStruct_c3b9c2ee *)arg1 zoom:(float *)arg2;
- (id)featureTile;
- (void)setIsPickedIconDrawnExternally:(_Bool)arg1;
- (struct CGPoint)screenPointToScrollRelativeToWithCanvasSize:(struct CGSize)arg1 canvasScale:(double)arg2;
- (struct CGRect)screenCollisionBounds;
- (_Bool)isLabelHitAtScreenPoint:(struct CGPoint)arg1 selectableLabelsOnly:(_Bool)arg2;
- (id)debugAnchorPointString;
- (_Bool)isLeafCluster;
- (id)clusterContentBounds;
- (id)clusterFeatureAnnotations;
- (_Bool)isClusterChild;
- (id)parentClusterLabelMarker;

@end
