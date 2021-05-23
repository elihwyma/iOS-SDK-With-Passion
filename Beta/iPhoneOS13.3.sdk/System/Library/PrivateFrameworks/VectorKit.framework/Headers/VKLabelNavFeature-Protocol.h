/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSString;

@protocol VKLabelNavFeature

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

- (unsigned short)layoutWithNavContext: /* Error: Ran out of types for this method. */;

@end
