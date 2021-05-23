/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, UIFocusGuide, UIImage, UIView, _UIDebugIssueReport, _UIDebugLogReport, _UIFocusItemInfo, _UIFocusMapSearchInfo, _UIFocusMovementInfo;

@protocol UIFocusEnvironment, UIFocusItem, UIFocusItemScrollableContainer, _UIFocusUpdateRequesting;

@interface UIFocusUpdateContext : NSObject

{
    struct {
        unsigned int isValid:1;
        unsigned int hasValidated:1;
        unsigned int shouldUpdateDestinationItem:1;
        unsigned int sourceItemMayRemainFocused:1;
        unsigned int didResolveCommonAncestorEnvironment:1;
    } _flags;
    _UIFocusItemInfo *_destinationItemInfo;
    id <UIFocusEnvironment> _commonAncestorEnvironment;
    UIImage *_regionMapSnapshotsVisualRepresentation;
    id <_UIFocusUpdateRequesting> _request;
    _UIFocusItemInfo *_sourceItemInfo;
    _UIFocusMovementInfo *_focusMovement;
    _UIFocusMapSearchInfo *_focusMapSearchInfo;
    id <UIFocusEnvironment> _initialDestinationEnvironment;
    id <UIFocusItemScrollableContainer> _commonScrollableContainer;
    double _destinationViewDistanceOffscreen;
    NSArray *_regionMapSnapshots;
    _UIDebugLogReport *_preferredFocusReport;
    _UIDebugIssueReport *_validationReport;
    UIFocusGuide *_focusedGuide;
}

@property (nonatomic, readonly, getter=_request) id <_UIFocusUpdateRequesting> request;
@property (copy, nonatomic, readonly, getter=_sourceItemInfo) _UIFocusItemInfo *sourceItemInfo;
@property (copy, nonatomic, readonly, getter=_destinationItemInfo) _UIFocusItemInfo *destinationItemInfo;
@property (nonatomic, readonly, getter=_focusMovement) _UIFocusMovementInfo *focusMovement;
@property (retain, nonatomic, getter=_focusMapSearchInfo, setter=_setFocusMapSearchInfo:) _UIFocusMapSearchInfo *focusMapSearchInfo;
@property (weak, nonatomic, readonly, getter=_initialDestinationEnvironment) id <UIFocusEnvironment> initialDestinationEnvironment;
@property (weak, nonatomic, readonly, getter=_commonAncestorEnvironment) id <UIFocusEnvironment> commonAncestorEnvironment;
@property (retain, nonatomic, getter=_commonScrollableContainer, setter=_setCommonScrollableContainer:) id <UIFocusItemScrollableContainer> commonScrollableContainer;
@property (nonatomic, getter=_destinationViewDistanceOffscreen, setter=_setDestinationViewDistanceOffscreen:) double destinationViewDistanceOffscreen;
@property (retain, nonatomic, getter=_regionMapSnapshots, setter=_setRegionMapSnapshots:) NSArray *regionMapSnapshots;
@property (nonatomic, readonly, getter=_regionMapSnapshotsVisualRepresentation) UIImage *regionMapSnapshotsVisualRepresentation;
@property (retain, nonatomic, getter=_preferredFocusReport, setter=_setPreferredFocusReport:) _UIDebugLogReport *preferredFocusReport;
@property (retain, nonatomic, getter=_validationReport, setter=_setValidationReport:) _UIDebugIssueReport *validationReport;
@property (weak, nonatomic, readonly, getter=_focusedGuide) UIFocusGuide *focusedGuide;
@property (nonatomic, readonly, getter=_focusVelocity) struct CGVector focusVelocity;
@property (weak, nonatomic, readonly) id <UIFocusItem> previouslyFocusedItem;
@property (weak, nonatomic, readonly) id <UIFocusItem> nextFocusedItem;
@property (weak, nonatomic, readonly) UIView *previouslyFocusedView;
@property (weak, nonatomic, readonly) UIView *nextFocusedView;
@property (nonatomic, readonly) unsigned long long focusHeading;

+ (id)_defaultValidationReportFormatter;

- (id)init;
- (id)description;
- (id)debugQuickLookObject;
- (_Bool)_validate;
- (id)_initWithFocusUpdateRequest:(id)arg1;
- (_Bool)_isValidInFocusSystem:(id)arg1;
- (void)_setFocusedGuide:(id)arg1;
- (id)_initWithFocusMovementRequest:(id)arg1 nextFocusedItem:(id)arg2;
- (void)_willUpdateFocusFromFocusedItem:(id)arg1;
- (void)_didUpdateFocus;
- (void)_restoreRestrictedFocusMovementWithMovement:(id)arg1;
- (id)_initWithContext:(id)arg1;
- (void)_updateDestinationItemIfNeeded;
- (void)_setSourceItemInfo:(id)arg1;
- (id)_focusMapSnapshotDebugInfoArray;
- (id)_publicRegionMapSnapshots;
- (void)_setInitialDestinationEnvironment:(id)arg1;

@end
