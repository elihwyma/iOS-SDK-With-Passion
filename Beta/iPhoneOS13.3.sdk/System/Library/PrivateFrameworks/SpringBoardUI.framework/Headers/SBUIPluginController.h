/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <Foundation/NSObject.h>

#import <SpringBoardUI/Swift-Protocol.h>

@class NSString;

@protocol SBUIPluginControllerHost;

@interface SBUIPluginController : NSObject <Swift>

{
    id <SBUIPluginControllerHost> _host;
    _Bool _isVisible;
}

@property (nonatomic, getter=isVisible) _Bool visible;
@property (weak, nonatomic) id <SBUIPluginControllerHost> host;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)registeredWithHost;
- (_Bool)supportedAndEnabled;
- (_Bool)wantsActivationEvent:(int)arg1 eventSource:(int)arg2 interval:(double *)arg3;
- (void)prepareForActivationEvent:(int)arg1 eventSource:(int)arg2 afterInterval:(double)arg3;
- (void)cancelPendingActivationEvent:(int)arg1;
- (_Bool)handleActivationEvent:(int)arg1 eventSource:(int)arg2 context:(void *)arg3;
- (_Bool)handledPasscodeUnlockWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)handledButtonDownEventFromSource:(int)arg1;
- (_Bool)handledButtonUpEventFromSource:(int)arg1;
- (_Bool)handledButtonTapFromSource:(int)arg1;
- (id)viewControllerForActivationContext:(id)arg1;

@end
