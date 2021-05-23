/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSHashTable, NSString, VKRouteInfo;

@interface VKRouteContext : NSObject

{
    VKRouteInfo *_routeInfo;
    unsigned char _useType;
    long long _inspectedLegIndex;
    long long _inspectedStepIndex;
    struct PolylineCoordinate _routeOffset;
    long long _currentLegIndex;
    long long _currentStepIndex;
    _Bool _snappingToTransitLines;
    CDStruct_2c43369c _puckLocation;
    float _puckRadius;
    unsigned long long _puckSnappedStopID;
    NSString *_locale;
    NSString *_accessPointEntryName;
    NSString *_accessPointExitName;
    _Bool _hasContextChangedForLabels;
    NSHashTable *_labelObservers;
    _Bool _hasContextChangedForRouteLine;
    NSHashTable *_routeLineObservers;
    _Bool _hasContextChangedForAlternateRouteLines;
    NSHashTable *_alternateRouteLineObservers;
    NSArray *_alternateRoutes;
    struct multimap<unsigned int, std::__1::vector<RouteSection, std::__1::allocator<RouteSection>>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, std::__1::vector<RouteSection, std::__1::allocator<RouteSection>>>>> _shareSections;
}

@property (nonatomic, readonly) VKRouteInfo *routeInfo;
@property (nonatomic, readonly) unsigned char useType;
@property (nonatomic) struct PolylineCoordinate routeOffset;
@property (nonatomic) long long currentLegIndex;
@property (nonatomic) long long currentStepIndex;
@property (nonatomic) _Bool snappingToTransitLines;
@property (nonatomic) long long inspectedLegIndex;
@property (nonatomic) long long inspectedStepIndex;
@property (nonatomic) CDStruct_c3b9c2ee puckLocation;
@property (nonatomic) float puckRadius;
@property (nonatomic) unsigned long long puckSnappedStopID;
@property (retain, nonatomic) NSString *locale;
@property (retain, nonatomic) NSString *accessPointEntryName;
@property (retain, nonatomic) NSString *accessPointExitName;
@property (retain, nonatomic) NSArray *alternateRoutes;
@property (nonatomic, readonly) unsigned long long totalRouteCount;

- (void)dealloc;
- (id).cxx_construct;
- (id)initWithComposedRoute:(id)arg1 useType:(unsigned char)arg2;
- (void)addShareSections:(const CDStruct_2c837fe9 *)arg1 shareCount:(unsigned int)arg2;
- (void)resetNotificationsForObserverType:(unsigned char)arg1;
- (void)forEachSectionWithShareCount:(unsigned int)arg1 dothis:(CDUnknownBlockType)arg2;
- (void)removeObserver:(id)arg1 withType:(unsigned char)arg2;
- (void)addObserver:(id)arg1 withType:(unsigned char)arg2;
- (id)initWithRouteInfo:(id)arg1 useType:(unsigned char)arg2;
- (id)_hashTableForObserverType:(unsigned char)arg1;
- (void)_setHasContextChangedForObserverType:(unsigned char)arg1 withValue:(_Bool)arg2;

@end
