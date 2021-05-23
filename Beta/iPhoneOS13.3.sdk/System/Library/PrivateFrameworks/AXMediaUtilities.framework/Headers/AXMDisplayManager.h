/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@class AXMDisplay, FBSDisplayMonitor, NSString;

@protocol OS_dispatch_queue;

@interface AXMDisplayManager : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    AXMDisplay *_queue_CoreAnimationMainDisplay;
    AXMDisplay *_queue_FrontBoardMainDisplay;
    _Bool _initialized;
    FBSDisplayMonitor *_displayMonitor;
    double _mobileGestaltOrientation;
}

@property (retain, nonatomic) FBSDisplayMonitor *displayMonitor;
@property (nonatomic) double mobileGestaltOrientation;
@property (nonatomic, readonly) AXMDisplay *frontBoardMainDisplay;
@property (nonatomic, readonly) AXMDisplay *coreAnimationMainDisplay;
@property (nonatomic, readonly) _Bool isInitialized;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)displayMonitor:(id)arg1 didConnectIdentity:(id)arg2 withConfiguration:(id)arg3;
- (void)displayMonitor:(id)arg1 didUpdateIdentity:(id)arg2 withConfiguration:(id)arg3;
- (void)displayMonitor:(id)arg1 willDisconnectIdentity:(id)arg2;
- (id)initWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updateDisplay:(id)arg1 withConfiguration:(id)arg2;
- (void)_updateDisplay:(id)arg1 withCADisplay:(id)arg2;
- (id)_displayPropertiesFromMobileGestalt;
- (long long)_discreteOrientationForOrientation:(double)arg1;
- (void)_updateDisplayPropertiesWithConfiguration:(id)arg1;
- (id)initAndWaitForMainDisplayConfiguration;

@end
