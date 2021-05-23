/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, NSTimer, PUAssetReference, PUBrowsingViewModel;

__attribute__((visibility("hidden")))
@interface PUAssetDisplayDescriptorNavigationRequest : NSObject

{
    NSTimer *_timeOutTimer;
    _Bool _hasSeenContentChange;
    _Bool __isPerformingChanges;
    _Bool __isUpdating;
    _Bool __needsUpdateFoundTargetAssetReference;
    _Bool __needsUpdateArrived;
    _Bool __needsUpdateDone;
    _Bool __seeked;
    _Bool __arrived;
    _Bool __timedOut;
    PUBrowsingViewModel *_viewModel;
    PUAssetReference *_targetAssetReference;
    NSDate *_targetModificationDate;
    double _timeOut;
    CDUnknownBlockType _completionHandler;
    PUAssetReference *__foundTargetAssetReference;
    CDStruct_1b6d18a9 _targetSeekTime;
}

@property (nonatomic, setter=_setPerformingChanges:) _Bool _isPerformingChanges;
@property (nonatomic, setter=_setUpdating:) _Bool _isUpdating;
@property (nonatomic, setter=_setNeedsUpdateFoundTargetAssetReference:) _Bool _needsUpdateFoundTargetAssetReference;
@property (nonatomic, setter=_setNeedsUpdateArrived:) _Bool _needsUpdateArrived;
@property (nonatomic, setter=_setNeedsUpdateDone:) _Bool _needsUpdateDone;
@property (retain, nonatomic, setter=_setFoundTargetAssetReference:) PUAssetReference *_foundTargetAssetReference;
@property (nonatomic, setter=_setSeeked:) _Bool _seeked;
@property (nonatomic, setter=_setArrived:) _Bool _arrived;
@property (nonatomic, setter=_setTimedOut:) _Bool _timedOut;
@property (retain, nonatomic) PUBrowsingViewModel *viewModel;
@property (retain, nonatomic) PUAssetReference *targetAssetReference;
@property (retain, nonatomic) NSDate *targetModificationDate;
@property (nonatomic) CDStruct_1b6d18a9 targetSeekTime;
@property (nonatomic) double timeOut;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (_Bool)_needsUpdate;
- (void)_invalidateDone;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)_setNeedsUpdate;
- (void)_updateIfNeeded;
- (void)_updateSeeking;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)_assertInsideChangeBlock;
- (void)_updateCurrentAssetReference;
- (void)_assertInsideUpdate;
- (void)_invalidateFoundTargetAssetReference;
- (void)_updateFoundTargetAssetReferenceIfNeeded;
- (void)_invalidateArrived;
- (void)_updateArrivedIfNeeded;
- (void)_updateDoneIfNeeded;
- (void)_finishRequest;
- (void)_cleanUpWhenDone;
- (id)_navigationRequestError;
- (id)_infoMessage;

@end
