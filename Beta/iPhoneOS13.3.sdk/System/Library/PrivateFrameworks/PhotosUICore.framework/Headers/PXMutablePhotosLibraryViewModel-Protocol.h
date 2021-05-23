/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@class NSMutableSet, NSSet, PXCPLServiceUI, PXCuratedLibraryAssetCollectionSkimmingInfo, UIBarButtonItem;

@protocol PXFilterState;

@protocol PXMutablePhotosLibraryViewModel <Swift>

@property (nonatomic) _Bool isAppearing;
@property (nonatomic) long long zoomLevelTransitionPhase;
@property (nonatomic, readonly) NSMutableSet *visibleAssetCollections;
@property (nonatomic) _Bool viewBasedDecorationsEnabled;
@property (nonatomic) _Bool isSelecting;
@property (nonatomic) _Bool isPinching;
@property (nonatomic) double daysMarginScale;
@property (nonatomic) _Bool isInteractiveZooming;
@property (nonatomic) _Bool allPhotosAspectFit;
@property (nonatomic) _Bool allPhotosCaptionsVisible;
@property (nonatomic) _Bool allPhotosLayoutIsAnimating;
@property (retain, nonatomic) PXCuratedLibraryAssetCollectionSkimmingInfo *skimmingInfo;
@property (copy, nonatomic) NSSet *draggedAssetReferences;
@property (nonatomic) long long zoomLevel;
@property (copy, nonatomic) id <PXFilterState> allPhotosFilterState;
@property (retain, nonatomic) UIBarButtonItem *navigationDisplayModeButtonItem;
@property (nonatomic) _Bool wantsDarkStatusBar;
@property (retain, nonatomic) PXCPLServiceUI *cplServiceUI;

- (unsigned short)addPresenter: /* Error: Ran out of types for this method. */;
- (unsigned short)removePresenter: /* Error: Ran out of types for this method. */;
- (unsigned short)addView: /* Error: Ran out of types for this method. */;
- (unsigned short)removeView: /* Error: Ran out of types for this method. */;
- (unsigned short)setPinchState:withAnchorAssetReference: /* Error: Ran out of types for this method. */;
- (unsigned short)setInteractiveZoomColumnIndex:withAnchorAssetReference: /* Error: Ran out of types for this method. */;
- (unsigned short)zoomAllPhotosToColumnIndex:withAnchorAssetReference:animated: /* Error: Ran out of types for this method. */;
- (unsigned short)zoomInAllPhotosToLastRememberedWithAnchorAssetReference:animated: /* Error: Ran out of types for this method. */;
- (unsigned short)resetAllPhotosColumns;
- (unsigned short)toggleSelectionForIndexPath: /* Error: Ran out of types for this method. */;
- (unsigned short)toggleSelectionForAssetReference: /* Error: Ran out of types for this method. */;
- (unsigned short)toggleSelectionForAssetCollectionReference: /* Error: Ran out of types for this method. */;
- (unsigned short)startAnimationToToggleChromeVisibility;
- (unsigned short)endAnimationToToggleChromeVisibility;

@end
