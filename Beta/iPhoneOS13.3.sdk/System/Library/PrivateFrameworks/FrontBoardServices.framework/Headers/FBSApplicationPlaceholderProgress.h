/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

#import <FrontBoardServices/Swift-Protocol.h>

@class FBSApplicationPlaceholder, NSProgress, NSString;

@protocol OS_dispatch_queue;

@interface FBSApplicationPlaceholderProgress : NSObject <Swift>

{
    NSObject<OS_dispatch_queue> *_queue;
    NSProgress *_progress;
    int _invalidated;
    long long _cancellationAllowed;
    long long _state;
    double _percentComplete;
    unsigned long long _installPhase;
    unsigned long long _installState;
    FBSApplicationPlaceholder *_placeholder;
}

@property (weak, nonatomic, readonly) FBSApplicationPlaceholder *placeholder;
@property (nonatomic, readonly) unsigned long long installState;
@property (nonatomic, readonly) unsigned long long installPhase;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) double percentComplete;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithPlaceholder:(id)arg1 queue:(id)arg2;
- (_Bool)queue_isValid;
- (unsigned long long)queue_supportedActions;
- (_Bool)queue_canPerformAction:(unsigned long long)arg1;
- (_Bool)queue_updateProxy:(id)arg1;
- (void)_stopObservingProgress:(id)arg1 withContext:(void *)arg2;
- (void)_startObservingProgress:(id)arg1 withContext:(void *)arg2;
- (_Bool)_queue_updateFromProgress;
- (_Bool)queue_isCancellationAllowed;

@end
