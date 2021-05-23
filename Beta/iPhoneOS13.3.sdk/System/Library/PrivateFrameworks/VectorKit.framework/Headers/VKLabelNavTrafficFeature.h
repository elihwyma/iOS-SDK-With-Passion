/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class NSString, VKLabelNavRoadLabel, VKTrafficFeature;

__attribute__((visibility("hidden")))
@interface VKLabelNavTrafficFeature : NSObject

{
    VKLabelNavRoadLabel *_roadLabel;
    _Bool _isAwayFromRoute;
    _Bool _isOnRoute;
    struct PolylineCoordinate _routeOffset;
    Mercator2_57ec32b6 _displayMercatorPoint;
    Mercator2_57ec32b6 _previousMercatorPoint;
    Mercator2_57ec32b6 _nextMercatorPoint;
    VKTrafficFeature *_trafficFeature;
    unsigned char _labelNavMode;
    struct shared_ptr<md::LabelStyle> _labelStyle;
    _Bool _isPicked;
    _Bool _shouldRestyleFeature;
    unsigned char _tailDirection;
    unsigned char _iconState;
}

@property (nonatomic) Mercator2_57ec32b6 displayMercatorPoint;
@property (nonatomic, readonly) Mercator2_57ec32b6 featureMercatorPoint;
@property (nonatomic, readonly) Mercator2_57ec32b6 nextMercatorPoint;
@property (nonatomic, readonly) Mercator2_57ec32b6 previousMercatorPoint;
@property (nonatomic, readonly) VKLabelNavRoadLabel *label;
@property (nonatomic, readonly) unsigned char labelNavMode;
@property (nonatomic, readonly) VKTrafficFeature *trafficFeature;
@property (nonatomic, readonly) long long navState;
@property (nonatomic, readonly) unsigned char currentIconState;
@property (nonatomic, readonly) unsigned char expectedIconState;
@property (nonatomic) _Bool shouldRestyleFeature;
@property (nonatomic) unsigned char tailDirection;
@property (nonatomic, readonly) unsigned char tailOrientation;
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

+ (id)newFeatureForExternalFeature:(id)arg1 previousMercatorPoint:(const Mercator2_57ec32b6 *)arg2 nextMercatorPoint:(const Mercator2_57ec32b6 *)arg3;

- (void)dealloc;
- (id).cxx_construct;
- (_Bool)isSignal;
- (_Bool)isCamera;
- (_Bool)hasLabelWithArtwork;
- (void)swapExternalFeature:(id)arg1;
- (void)layoutWithNavContext:(struct NavContext *)arg1;
- (void)recreateRoadSignWithNavContext:(struct NavContext *)arg1;
- (_Bool)isPOI;
- (void)_clearLabel;
- (shared_ptr_ed5e0db7)createIcon:(struct NavContext *)arg1;
- (id)initWithTrafficFeature:(id)arg1 previousMercatorPoint:(const Mercator2_57ec32b6 *)arg2 nextMercatorPoint:(const Mercator2_57ec32b6 *)arg3;
- (_Bool)isCallout;

@end
