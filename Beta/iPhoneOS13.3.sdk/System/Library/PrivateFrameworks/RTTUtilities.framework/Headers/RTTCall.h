/*
 Image: /System/Library/PrivateFrameworks/RTTUtilities.framework/RTTUtilities
 */

#import <Foundation/NSObject.h>

@class AVCVirtualTTYDevice, AXDispatchTimer, NSDictionary, NSMutableString, NSString, RTTConversation, TUCall;

@protocol OS_dispatch_queue, RTTCallDelegate;

@interface RTTCall : NSObject

{
    long long _ttyMode;
    NSObject<OS_dispatch_queue> *_callQueue;
    NSMutableString *_garbageCollection;
    AXDispatchTimer *_garbageCharacterStripperTimer;
    id <RTTCallDelegate> _delegate;
    RTTConversation *_conversation;
    TUCall *_call;
    AVCVirtualTTYDevice *_ttyDevice;
    NSDictionary *_substitutions;
}

@property (retain, nonatomic) AVCVirtualTTYDevice *ttyDevice;
@property (retain, nonatomic) RTTConversation *conversation;
@property (retain, nonatomic) TUCall *call;
@property (retain, nonatomic) NSDictionary *substitutions;
@property (weak, nonatomic) id <RTTCallDelegate> delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *callQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)stop;
- (void)start;
- (id)initWithCall:(id)arg1;
- (void)registerNotifications;
- (_Bool)isLocallyHosted;
- (void)toggleSystemOutputMute:(_Bool)arg1;
- (void)sendString:(id)arg1;
- (void)mediaServerDied;
- (void)recreateTTYDevice:(id)arg1;
- (void)audioSessionWasInterrupted:(id)arg1;
- (void)device:(id)arg1 didReceiveText:(struct NSString *)arg2;
- (_Bool)_handleInitialGarbageTextFromTTY:(struct NSString *)arg1 device:(id)arg2;
- (struct NSString *)_processText:(struct NSString *)arg1 withDevice:(id)arg2;
- (void)callDidReceiveText:(id)arg1 forUtterance:(id)arg2;
- (void)device:(id)arg1 didStart:(_Bool)arg2 error:(id)arg3;
- (void)deviceDidStop:(id)arg1;
- (void)device:(id)arg1 didReceiveCharacter:(unsigned short)arg2;

@end
