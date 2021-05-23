/*
 Image: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
 */

#import <UIKit/UIView.h>

@class NSMutableArray, NSMutableDictionary, NSObject, NSUUID, SFFloatSpringProperty, SFMagicHead, SFMagicHeadPlaceholderView, SFMagicHeadSettings, UIColor, UIControl, UIImageView, UIViewPropertyAnimator, UIVisualEffectView;

@protocol OS_dispatch_source, SFMagicHeadWheelViewDelegate;

__attribute__((visibility("hidden")))
@interface SFMagicHeadWheelView : UIView

{
    _Bool _enabled;
    _Bool _noUWBCapableDevices;
    _Bool _magicHead;
    _Bool _invalidated;
    _Bool _rotatedAfterSelectionWasMade;
    SFMagicHeadSettings *_settings;
    NSObject<SFMagicHeadWheelViewDelegate> *_delegate;
    NSUUID *_nodeIdentifier;
    SFMagicHead *_selectedHead;
    long long _guidanceState;
    long long _rotationState;
    double _radius;
    UIView *_contentView;
    UIImageView *_canChangeSelectionView;
    UIVisualEffectView *_dotsContainer;
    unsigned long long _numberOfDots;
    double _dotsRadius;
    UIColor *_dotsColor;
    UIControl *_selectedHeadControl;
    NSMutableDictionary *_identifierToSelectionMarkerView;
    SFMagicHeadPlaceholderView *_placeHolderView;
    NSObject<OS_dispatch_source> *_suppressGuidanceHapticsTimer;
    long long _proposedRotationState;
    long long _consecutiveRotationChangeRequests;
    SFFloatSpringProperty *_rotationSpringProperty;
    SFFloatSpringProperty *_pitchSpringProperty;
    SFFloatSpringProperty *_rollSpringProperty;
    double _previousAngle;
    NSMutableArray *_dots;
    UIViewPropertyAnimator *_selectionAnimator;
}

@property _Bool invalidated;
@property long long guidanceState;
@property long long rotationState;
@property _Bool rotatedAfterSelectionWasMade;
@property double radius;
@property (retain) UIView *contentView;
@property (retain) UIImageView *canChangeSelectionView;
@property (retain) UIVisualEffectView *dotsContainer;
@property unsigned long long numberOfDots;
@property double dotsRadius;
@property (retain) UIColor *dotsColor;
@property (retain) UIControl *selectedHeadControl;
@property (retain) NSMutableDictionary *identifierToSelectionMarkerView;
@property (retain) SFMagicHeadPlaceholderView *placeHolderView;
@property (retain) NSObject<OS_dispatch_source> *suppressGuidanceHapticsTimer;
@property long long proposedRotationState;
@property long long consecutiveRotationChangeRequests;
@property (retain) SFFloatSpringProperty *rotationSpringProperty;
@property (retain) SFFloatSpringProperty *pitchSpringProperty;
@property (retain) SFFloatSpringProperty *rollSpringProperty;
@property double previousAngle;
@property (retain) NSMutableArray *dots;
@property (retain) UIViewPropertyAnimator *selectionAnimator;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic) _Bool noUWBCapableDevices;
@property (retain, nonatomic) SFMagicHeadSettings *settings;
@property (weak) NSObject<SFMagicHeadWheelViewDelegate> *delegate;
@property (nonatomic, readonly) NSUUID *nodeIdentifier;
@property (retain, nonatomic) SFMagicHead *selectedHead;
@property (nonatomic, readonly, getter=isMagicHead) _Bool magicHead;

+ (Class)layerClass;
+ (double)rotationWithShortestDistanceFromDegrees:(double)arg1 toDegrees:(double)arg2;
+ (double)clampedRotationDegrees:(double)arg1;

- (void)dealloc;
- (void)invalidate;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (_Bool)updateSelectedSlotNode:(id)arg1;
- (void)loadSettings;
- (_Bool)guidanceStatesEnabled;
- (void)selectedHeadTapped;
- (void)selectedHeadHighlighted;
- (void)selectedHeadHightlightCancel;
- (_Bool)transitionToGuidanceState:(long long)arg1;
- (void)transitionToRotationState:(long long)arg1 bypassSampling:(_Bool)arg2;
- (void)updateVisibilityOfComponents;
- (void)stopSuppressGuidanceHapticsTimer;
- (void)updatePlaceHolderView;
- (void)createSprings;
- (long long)triggerCountForCandidateRotationState:(long long)arg1;
- (_Bool)canChangeSelectionWithDescription:(id *)arg1;
- (_Bool)canChangeSelectionWhenInRotationState:(long long)arg1 guidanceState:(long long)arg2 description:(id *)arg3 ignoreDisabling:(_Bool)arg4;
- (_Bool)canChangeSelectionWithDescription:(id *)arg1 ignoreDisabling:(_Bool)arg2;
- (_Bool)inGuidanceStatesWhenInState:(long long)arg1;
- (void)updateSelectionControlState;
- (void)hideDots:(_Bool)arg1 withAnimationDuration:(double)arg2;
- (void)scaleDots:(_Bool)arg1;
- (void)hapticsForHideDots:(_Bool)arg1;
- (void)hideSelection:(_Bool)arg1;
- (void)updateCanChangeSelectionUI;
- (struct CGRect)squareBounds;
- (struct CGPoint)centerOfContentBounds;
- (_Bool)inGuidanceStates;
- (void)updateVelocityWithCurrentAngle:(double)arg1;
- (_Bool)updateSelectedHead:(id)arg1;
- (_Bool)configureSelectedHeadWithNode:(id)arg1 slotNode:(id)arg2 isSameAsSelected:(_Bool)arg3;
- (void)pulseSelectedHead;
- (void)triggerReSelectedHaptic;
- (void)setMarkerViewForIdentifier:(id)arg1 atPositionDegree:(double)arg2;
- (void)triggerSelectedHaptic;
- (void)selectAnimationForHead:(id)arg1 withDismissHead:(id)arg2;
- (void)cozyUpAnimationForHead:(id)arg1;
- (void)startSuppressGuidanceHapticsTimer;
- (void)triggerContractDotsHaptic;
- (void)triggerExpandDotsHaptic;
- (void)magicHead:(id)arg1 requestingSubtitleTextChangeForState:(long long)arg2;
- (void)magicHeadDidStartTransferForHead:(id)arg1;
- (void)magicHeadDidTerminateTransferForHead:(id)arg1;
- (void)magicHeadDidFinishTransferForHead:(id)arg1;
- (id)initWithNumberOfDots:(unsigned long long)arg1 dotsRadius:(double)arg2 isMagicHead:(_Bool)arg3;
- (void)deviceRotatedToDegrees:(double)arg1 withPitch:(double)arg2 andRoll:(double)arg3;
- (void)lostSelectedNode;
- (_Bool)updateSelectedNode:(id)arg1;

@end
