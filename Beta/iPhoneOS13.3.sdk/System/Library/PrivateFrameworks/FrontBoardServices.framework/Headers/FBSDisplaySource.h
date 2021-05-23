/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

#import <FrontBoardServices/Swift-Protocol.h>

@class BSAtomicSignal, CADisplay, FBSDisplayConfiguration, FBSDisplayMonitor, NSString;

@protocol OS_dispatch_queue;

@interface FBSDisplaySource : NSObject <Swift>

{
    CADisplay *_display;
    _Bool _isMain;
    unsigned int _displayID;
    unsigned int _instanceID;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    _Bool _observing;
    _Bool _initialized;
    BSAtomicSignal *_invalidated;
    struct os_unfair_lock_s _lock;
    FBSDisplayMonitor *_lock_monitor;
    FBSDisplayConfiguration *_lock_configuration;
    _Bool _lock_allowsUnknown;
    int _lock_attachment;
    unsigned int _lock_debounceToken;
    FBSDisplayConfiguration *_lock_reportedConfiguration;
    struct os_unfair_lock_s _externallyVisibleLock;
    int _evlock_attachment;
    FBSDisplayConfiguration *_evlock_configuration;
    FBSDisplayConfiguration *_evlock_reportedConfiguration;
}

@property (nonatomic, readonly) unsigned int displayID;
@property (nonatomic) _Bool allowsUnknown;
@property (copy, nonatomic, readonly) FBSDisplayConfiguration *connectedConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithMainDisplay:(id)arg1 monitor:(id)arg2;
- (id)initWithNonMainDisplay:(id)arg1 monitor:(id)arg2;
- (id)_initWithDisplay:(id)arg1 monitor:(id)arg2 isMain:(_Bool)arg3;
- (void)_lock_update;
- (void)_lock_setConfiguration:(id)arg1;
- (void)_lock_noteConnected;
- (void)_lock_noteUpdated;
- (void)_lock_noteDisconnecting;
- (void)_lock_setAttachment:(int)arg1;
- (id)_lock_setReportedConfiguration:(id)arg1;

@end
