/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, VKLabelNavRoadGraph, VKPolylineOverlay;

__attribute__((visibility("hidden")))
@interface LabelNavRouteLabeler : NSObject

{
    _Bool _needsLayout;
    _Bool _drawRoadSigns;
    VKPolylineOverlay *_route;
    NSString *_currentLocationText;
    _Bool _isOnRoute;
    struct PolylineCoordinate _routeUserOffset;
    unsigned long long _stepIndex;
    _Bool _checkOnRouteLabelsAlignment;
    _Bool _disableTileParseForOneLayout;
    unordered_set_975bb0ed _tiles;
    unordered_set_975bb0ed _pendingTiles;
    NSMutableArray *_junctions;
    VKLabelNavRoadGraph *_roadGraph;
    vector_e3e87145 _activeSigns;
    NSMutableArray *_fadingLabels;
    NSMutableDictionary *_visibleLabelsByName;
    NSMutableArray *_visibleLabels;
    unsigned long long _countVisibleOnRouteRoadSigns;
    unsigned long long _countVisibleOffRouteRoadSigns;
    unsigned long long _countVisibleRoadSigns;
    unsigned long long _maxVisibleOnRouteRoadSigns;
    unsigned long long _maxVisibleOffRouteRoadSigns;
    unsigned long long _maxVisibleRoadSigns;
    unsigned long long _maxOnRoadGraphRoadSigns;
    unsigned long long _minVisibleOffRoadGraphRoadSigns;
    unsigned long long _minVisibleProceedToRouteRoadSigns;
    _Bool _preferRightSideLabelPlacement;
    float _minSignOffsetDistance;
    NSMutableSet *_roadNamesInGuidance;
    NSMutableArray *_guidanceStepInfos;
    NSMutableArray *_routeRoadInfos;
    NSString *_currentRoadName;
    long long _currentRoadNameIndex;
    NSString *_currentShieldGroup;
    _Bool _checkIfRouteSubrangeChanged;
    _Bool _useRouteSubrange;
    _Bool _regenerateRoadSigns;
    _Bool _isStylesheetAnimating;
    struct PolylineCoordinate _routeSubrangeStart;
    struct PolylineCoordinate _routeSubrangeEnd;
    struct VKLabelNavArtworkCache *_artworkCache;
    struct shared_ptr<md::NavCurrentRoadSign> _currentRoadSign;
    _Bool _debugDisableRoadSignLimit;
    unsigned long long _debugCachedMaxVisibleOffRouteRoadSigns;
    unsigned long long _debugCachedMaxVisibleOnRouteRoadSigns;
    _Bool _debugEnableShieldsOnRouteLine;
    shared_ptr_a3c46825 _styleManager;
    _Bool _shouldLabelOppositeCarriageways;
    vector_7c356ace _externalCollisionLabelsForLayout;
    _Bool _hasPendingTilesInSnappingRegion;
    _Bool _needsDebugConsoleClear;
}

@property (nonatomic) _Bool drawRoadSigns;
@property (retain, nonatomic) VKPolylineOverlay *route;
@property (retain, nonatomic) NSString *currentLocationText;
@property (retain, nonatomic) NSString *currentRoadName;
@property (retain, nonatomic) NSString *currentShieldGroup;
@property (nonatomic) struct PolylineCoordinate routeUserOffset;
@property (nonatomic, readonly) const vector_e3e87145 *activeSigns;
@property (nonatomic, readonly) _Bool needsLayout;
@property (nonatomic, readonly) struct NavCurrentRoadSign *currentRoadSign;
@property (nonatomic, readonly) float currentRoadSignPixelHeight;
@property (nonatomic) _Bool debugDisableRoadSignLimit;
@property (nonatomic) _Bool debugEnableShieldsOnRouteLine;
@property (nonatomic) struct VKLabelNavArtworkCache *artworkCache;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void)setStyleManager:(shared_ptr_a3c46825)arg1;
- (void)styleManagerDidChange:(_Bool)arg1;
- (void)styleManagerDidStartAnimating;
- (void)styleManagerDidFinishAnimating;
- (unsigned char)computeRoutePositionForPOIAtPixel:(const Matrix_8746f91e *)arg1 currentPosition:(unsigned char)arg2 context:(struct NavContext *)arg3;
- (void)setMaxVisibleRoadsigns:(unsigned int)arg1;
- (void)grabTilesFromScene:(const struct SceneContext *)arg1;
- (void)layoutWithNavContext:(struct NavContext *)arg1 externalCollisionLabels:(const vector_7c356ace *)arg2;
- (void)clearSceneIsMemoryWarning:(_Bool)arg1;
- (_Bool)needsDebugDraw;
- (void)debugDraw:(id)arg1 overlayConsole:(struct DebugConsole *)arg2 navContext:(struct NavContext *)arg3;
- (void)_refreshGuidanceRoadNames;
- (void)_updateRoadsInGuidance;
- (void)_updateCurrentRoadInfo;
- (void)_tryAddLabel:(id)arg1 navContext:(struct NavContext *)arg2 labelCollisionEnabled:(_Bool)arg3;
- (void)_createOrUpdateLabelForRoad:(id)arg1 isShield:(_Bool)arg2 navContext:(struct NavContext *)arg3;
- (unsigned char)orientationForRoadSign:(id)arg1 roadLabel:(id)arg2 navContext:(struct NavContext *)arg3;
- (_Bool)_collideLabel:(id)arg1 activeLabel:(id)arg2 labelsToRemove:(id)arg3;
- (void)_generateCurrentRoadSignWithContext:(struct NavContext *)arg1;
- (_Bool)_updateActiveRouteRange;
- (void)_reloadRouteJunctions;
- (_Bool)_addJunctionsForTile:(const shared_ptr_702c344d *)arg1;
- (void)_addLabelsAtJunctions:(id)arg1 withContext:(struct NavContext *)arg2 maxLabelsToAdd:(unsigned long long)arg3;
- (void)_addLabelsForJunctions:(id)arg1 withContext:(struct NavContext *)arg2 maxLabelsToAdd:(unsigned long long)arg3 useAllJunctions:(_Bool)arg4 placeShieldsFrontToBack:(_Bool)arg5;
- (void)_tryAddRoadSignForJunction:(id)arg1 navContext:(struct NavContext *)arg2 labelCollisionEnabled:(_Bool)arg3;
- (void)_tryAddRoadSignForRoad:(id)arg1 isShield:(_Bool)arg2 navContext:(struct NavContext *)arg3 labelCollisionEnabled:(_Bool)arg4;
- (void)_updateRoadStarts;
- (void)_updatePreferredLabelPlacements;
- (void)_initalizeCurrentRoadInfo;
- (void)_updateUniqueOffRouteRoads;
- (_Bool)_findRouteOverlappingJunctionFrom:(long long)arg1 routeJunctions:(vector_397bdcab *)arg2 lookBackward:(_Bool)arg3 firstOverlap:(long long *)arg4 secondOverlap:(long long *)arg5;
- (_Bool)isNavMode;

@end
