/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSArray, NSString, NSTimer, PXAssetCollectionReference, PXCuratedLibraryAssetCollectionSkimmingModel, UISelectionFeedbackGenerator;

@protocol PXCuratedLibrarySkimmingControllerDelegate;

@interface PXCuratedLibrarySkimmingController : NSObject <Swift>

{
    UISelectionFeedbackGenerator *_skimmingFeedbackGenerator;
    double _slideshowTriggerDelay;
    double _slideshowIntervalDelay;
    _Bool _skimmingSlideshowEnabled;
    PXCuratedLibraryAssetCollectionSkimmingModel *_skimmingModel;
    id <PXCuratedLibrarySkimmingControllerDelegate> _delegate;
    long long _state;
    PXAssetCollectionReference *_preSkimmedAssetCollectionReference;
    double _lastPanningTranslation;
    long long _currentSkimmingIndex;
    NSArray *_skimmingIndexes;
    unsigned long long _skimmingDataSourceIdentifier;
    NSTimer *_slideshowTimer;
}

@property (retain, nonatomic) PXAssetCollectionReference *preSkimmedAssetCollectionReference;
@property (nonatomic) long long state;
@property (nonatomic) double lastPanningTranslation;
@property (nonatomic) long long currentSkimmingIndex;
@property (retain, nonatomic) NSArray *skimmingIndexes;
@property (nonatomic) unsigned long long skimmingDataSourceIdentifier;
@property (retain, nonatomic) NSTimer *slideshowTimer;
@property (nonatomic, readonly) PXCuratedLibraryAssetCollectionSkimmingModel *skimmingModel;
@property (weak, nonatomic) id <PXCuratedLibrarySkimmingControllerDelegate> delegate;
@property (nonatomic) _Bool skimmingSlideshowEnabled;
@property (nonatomic, readonly) _Bool canStartSkimming;
@property (nonatomic, readonly) _Bool isTouching;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)new;

- (id)init;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateSlideshow;
- (id)initWithSkimmingModel:(id)arg1;
- (void)_showSkimmingHints;
- (void)_hideSkimmingHints;
- (void)_startOrResumeSlideshowTouchesEnded:(_Bool)arg1;
- (void)_slideshowTimerTick:(id)arg1;
- (void)_stopSlideshow;
- (void)startTouchingForAssetCollectionReference:(id)arg1;
- (_Bool)endTouchingGestureEnded:(_Bool)arg1;
- (void)startPanningForAssetCollectionReference:(id)arg1;
- (void)updatePanningWithTranslation:(struct CGPoint)arg1;
- (void)endPanning;
- (void)contentViewWillScroll;
- (void)contentViewDidScroll;
- (void)_ensureFeedbackGenerator;
- (void)_generateFeedbackForSkimmingGesture;
- (void)_cleanupFeedbackGenerator;
- (void)_enterSlideshowStateForAssetCollectionReference:(id)arg1;
- (void)_enterTouchingStateForAssetCollectionReference:(id)arg1;
- (void)_cancelEnteringTouchingState;
- (void)_adoptIndexesFromSkimmingModel;
- (void)_enterIdleStatePersistSkimmingState:(_Bool)arg1;

@end
