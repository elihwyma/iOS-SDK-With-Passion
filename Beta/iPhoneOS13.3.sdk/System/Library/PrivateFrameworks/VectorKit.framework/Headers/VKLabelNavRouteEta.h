/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class NSString, VKLabelNavRoadLabel, VKRouteEtaDescription, VKRouteInfo;

__attribute__((visibility("hidden")))
@interface VKLabelNavRouteEta : NSObject

{
    VKLabelNavRoadLabel *_etaLabel;
    unsigned long long _etaLabelArtworkKey;
    _Bool _isAwayFromRoute;
    _Bool _isOnRoute;
    struct PolylineCoordinate _routeOffset;
    _Bool _selected;
    VKRouteInfo *_routeInfo;
    VKRouteEtaDescription *_displayEtaDescription;
    _Bool _isPicked;
    _Bool _isRepositioning;
    unsigned char _orientation;
}

@property (nonatomic, readonly) Matrix_6e1d3589 worldPoint;
@property (nonatomic, readonly) VKLabelNavRoadLabel *label;
@property (nonatomic) _Bool selected;
@property (nonatomic, readonly) unsigned char etaComparisonToMain;
@property (retain, nonatomic) VKRouteInfo *routeInfo;
@property (nonatomic, readonly) VKRouteEtaDescription *displayEtaDescription;
@property (nonatomic) _Bool isRepositioning;
@property (nonatomic) unsigned char orientation;
@property (nonatomic, readonly) _Bool isOnRoute;
@property (nonatomic, readonly) _Bool isAwayFromRoute;
@property (nonatomic, readonly) struct PolylineCoordinate routeOffset;
@property (nonatomic, readonly) _Bool isRamp;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *shieldDisplayGroup;
@property (nonatomic, readonly) _Bool isStartOfRoadName;
@property (nonatomic, readonly) _Bool isInGuidance;
@property (nonatomic, readonly) long long intraRoadPriority;
@property (nonatomic, readonly) _Bool isGuidanceStepStart;
@property (nonatomic, readonly) _Bool isEtaFeature;
@property (nonatomic, readonly) _Bool isTrafficCameraFeature;
@property (nonatomic) _Bool isPicked;

+ (unsigned char)toStyleEtaComparison:(unsigned char)arg1;
+ (shared_ptr_c5d816ee)styleQueryForNavContext:(const struct NavContext *)arg1 selected:(_Bool)arg2 focused:(_Bool)arg3 etaComparison:(unsigned char)arg4 transportType:(unsigned char)arg5;
+ (id)artworkForEtaDescription:(id)arg1 navContext:(const struct NavContext *)arg2 styleQuery:(shared_ptr_c5d816ee)arg3 orientation:(unsigned char)arg4 artworkCache:(struct VKLabelNavArtworkCache *)arg5 selected:(_Bool)arg6;

- (void)dealloc;
- (id).cxx_construct;
- (void)layoutWithNavContext:(struct NavContext *)arg1;
- (void)repositionAtRouteCoord:(struct PolylineCoordinate)arg1;
- (_retain_ptr_86da96eb)updateRoadSignWithNavContext:(const struct NavContext *)arg1 artworkCache:(struct VKLabelNavArtworkCache *)arg2;
- (id)initWithRouteInfo:(id)arg1 routeCoord:(struct PolylineCoordinate)arg2;
- (void)createLabelWithNavContext:(const struct NavContext *)arg1 orientation:(unsigned char)arg2 etaDescription:(id)arg3 selected:(_Bool)arg4 artworkCache:(struct VKLabelNavArtworkCache *)arg5;
- (void)_clearLabel;
- (void)prepareStyleVarsWithContext:(struct NavContext *)arg1;
- (Box_8bd38d92)labelRectForOrientation:(unsigned char)arg1 styleQuery:(const shared_ptr_c5d816ee *)arg2 navContext:(const struct NavContext *)arg3 anchorPosition:(Matrix_8746f91e)arg4 artworkCache:(struct VKLabelNavArtworkCache *)arg5;

@end
