/*
 Image: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

#import <NSObject.h>

@class NSString, NSXPCConnection, TKSmartCardATR, TKSmartCardSlotProxy;

@protocol OS_dispatch_queue;

@interface TKSmartCardSlot : NSObject

{
    NSXPCConnection *_connection;
    long long _powerState;
    long long _shareState;
    _Bool _securePINVerificationSupported;
    _Bool _securePINChangeSupported;
    long long _state;
    TKSmartCardATR *_ATR;
    NSString *_name;
    long long _maxInputLength;
    long long _maxOutputLength;
    TKSmartCardSlotProxy *_proxy;
    long long _previousState;
}

@property long long state;
@property (retain) TKSmartCardATR *ATR;
@property (nonatomic, readonly) TKSmartCardSlotProxy *proxy;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property long long previousState;
@property long long shareState;
@property long long powerState;
@property _Bool securePINVerificationSupported;
@property _Bool securePINChangeSupported;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long maxInputLength;
@property (nonatomic, readonly) long long maxOutputLength;

- (void)dealloc;
- (id)description;
- (void)invalidate;
- (id)screen;
- (void)connectToEndpoint:(id)arg1 synchronous:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;
- (id)initWithEndpoint:(id)arg1 error:(id *)arg2;
- (void)getAttrib:(unsigned int)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setAttrib:(unsigned int)arg1 data:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (id)synchronous:(_Bool)arg1 remoteSlotWithErrorHandler:(CDUnknownBlockType)arg2;
- (id)makeSmartCard;
- (void)control:(id)arg1 data:(id)arg2 expectedLength:(unsigned int)arg3 reply:(CDUnknownBlockType)arg4;
- (id)userInteractionForConfirmation;
- (id)userInteractionForStringEntry;

@end
