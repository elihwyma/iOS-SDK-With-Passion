/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <FrontBoardServices/FBSBundleInfo.h>

@class FBSApplicationLibrary, FBSApplicationPlaceholderProgress, LSApplicationProxy, NSMutableSet, NSObject;

@protocol FBSApplicationPlaceholderProgress, OS_dispatch_queue;

@interface FBSApplicationPlaceholder : FBSBundleInfo

{
    LSApplicationProxy *_proxy;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    FBSApplicationPlaceholderProgress *_queue_progress;
    NSMutableSet *_queue_observers;
    FBSApplicationLibrary *_appLibrary;
}

@property (retain, nonatomic, getter=_proxy, setter=_setProxy:) LSApplicationProxy *proxy;
@property (weak, nonatomic) FBSApplicationLibrary *appLibrary;
@property (nonatomic, readonly) id <FBSApplicationPlaceholderProgress> progress;
@property (nonatomic, readonly, getter=isPrioritizable) _Bool prioritizable;
@property (nonatomic, readonly, getter=isPausable) _Bool pausable;
@property (nonatomic, readonly, getter=isResumable) _Bool resumable;
@property (nonatomic, readonly, getter=isCancellable) _Bool cancellable;

+ (id)_callOutQueue;
+ (id)_sharedQueue;

- (void)dealloc;
- (_Bool)cancel;
- (_Bool)pause;
- (_Bool)resume;
- (_Bool)prioritize;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (_Bool)isRestricted;
- (unsigned long long)installType;
- (unsigned long long)installState;
- (unsigned long long)installPhase;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (double)percentComplete;
- (id)_initWithApplicationProxy:(id)arg1;
- (id)_initWithBundleIdentifier:(id)arg1 url:(id)arg2;
- (void)_setProxy:(id)arg1 force:(_Bool)arg2;
- (_Bool)_canPerformAction:(unsigned long long)arg1;
- (_Bool)_performAction:(unsigned long long)arg1 withResult:(CDUnknownBlockType)arg2;
- (void)_dispatchToObserversWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)_queue_isCloudDemoted;
- (unsigned long long)_queue_supportedActions;
- (_Bool)_queue_canPerformAction:(unsigned long long)arg1;
- (void)_pauseWithResult:(CDUnknownBlockType)arg1;
- (void)_resumeWithResult:(CDUnknownBlockType)arg1;
- (void)_cancelWithResult:(CDUnknownBlockType)arg1;
- (void)_prioritizeWithResult:(CDUnknownBlockType)arg1;
- (void)_queue_setProxy:(id)arg1 force:(_Bool)arg2;
- (void)_reloadFromProxy:(id)arg1;
- (void)_queue_noteChangedSignificantly:(id)arg1;
- (void)_sendToObserversPlaceholderProgressDidUpdate;
- (void)_sendToObserversPlaceholderDidChangeSignificantly;
- (id)_initWithBundleProxy:(id)arg1 url:(id)arg2;
- (_Bool)prioritizeWithResult:(CDUnknownBlockType)arg1;
- (_Bool)pauseWithResult:(CDUnknownBlockType)arg1;
- (_Bool)resumeWithResult:(CDUnknownBlockType)arg1;
- (_Bool)cancelWithResult:(CDUnknownBlockType)arg1;
- (void)_reloadProgress;
- (void)_noteChangedSignificantly;

@end
