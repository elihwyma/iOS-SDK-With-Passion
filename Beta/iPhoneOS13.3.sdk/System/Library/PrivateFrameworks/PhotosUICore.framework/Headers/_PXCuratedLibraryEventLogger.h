/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, NSTimer, PXCuratedLibraryLayout, PXCuratedLibraryViewModel, PXUpdater;

@interface _PXCuratedLibraryEventLogger : PXObservable <Swift>

{
    struct NSObject *_sender;
    _Bool _loggedFirstTimeExperience;
    NSTimer *_slowScrollRegimeTimer;
    double _lastUserInteractionTime;
    float _analysisProgress;
    float _firstTimeExperienceAnalysisProgress;
    PXCuratedLibraryViewModel *_viewModel;
    PXCuratedLibraryLayout *_layout;
    PXUpdater *_updater;
    unsigned long long _userEventSource;
    long long _libraryItemsCount;
    long long _firstTimeExperienceLibraryItemsCount;
    id _lastViewedDominantModelObject;
}

@property (nonatomic, readonly) PXCuratedLibraryViewModel *viewModel;
@property (nonatomic, readonly) PXCuratedLibraryLayout *layout;
@property (nonatomic, readonly) PXUpdater *updater;
@property (nonatomic) unsigned long long userEventSource;
@property (nonatomic) long long libraryItemsCount;
@property (nonatomic) float analysisProgress;
@property (nonatomic) float firstTimeExperienceAnalysisProgress;
@property (nonatomic) long long firstTimeExperienceLibraryItemsCount;
@property (retain, nonatomic) id lastViewedDominantModelObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)_setNeedsUpdate;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)didPerformChanges;
- (id)initWithViewModel:(id)arg1 layout:(id)arg2;
- (void)logViewControllerWillAppear:(struct NSObject *)arg1;
- (void)logViewControllerDidDisappear:(struct NSObject *)arg1;
- (void)logLibraryItemsCount:(long long)arg1;
- (void)logAnalysisProgress:(float)arg1;
- (id)userEventTracker;
- (void)_invalidateUserEventSource;
- (void)_updateUserEventSource;
- (void)_invalidateFirstTimeExperienceReadinessLogging;
- (void)_updateFirstTimeExperienceReadinessLogging;
- (_Bool)_isSettled;
- (void)_invalidateDominantModelObject;
- (void)_updateDominantModelObject;
- (void)_configureTimerForSlowScrollRegimeUpdatesIfNeeded;
- (void)_scheduleImpressionLogging;
- (void)_eventSenderWillAppear:(struct NSObject *)arg1;
- (void)_eventSenderDidDisappear:(struct NSObject *)arg1;
- (void)_eventSenderDidChange;
- (void)_logImpressionWithLastViewedDominantModelObject:(id)arg1 lastUserInteractionTime:(double)arg2;

@end
