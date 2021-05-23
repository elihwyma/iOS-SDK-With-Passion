/*
 Image: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

#import <NSObject.h>

@class NSMutableDictionary, NSNumber, TKSmartCardSlot;

@protocol OS_dispatch_queue;

@interface TKSmartCard : NSObject

{
    TKSmartCardSlot *_slot;
    NSObject<OS_dispatch_queue> *_beginSessionQueue;
    _Bool _sensitive;
    _Bool _sensitiveRequired;
    _Bool _synchronous;
    id _session;
    long long _sessionCounter;
    _Bool _someoneWantsSession;
    long long _sessionEndPolicy;
    NSMutableDictionary *_contexts;
    NSNumber *_reservationId;
    _Bool _useExtendedLength;
    _Bool _useCommandChaining;
    unsigned char _cla;
    _Bool _valid;
    unsigned long long _allowedProtocols;
    unsigned long long _currentProtocol;
}

@property unsigned long long currentProtocol;
@property _Bool valid;
@property (nonatomic, readonly) TKSmartCardSlot *slot;
@property unsigned long long allowedProtocols;
@property _Bool sensitive;
@property (retain) id context;

+ (id)_localizedString:(id)arg1;
+ (_Bool)decodeResponse:(id)arg1 sw:(unsigned short *)arg2 appendTo:(id)arg3 error:(id *)arg4;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)synchronous;
- (void)setSynchronous:(_Bool)arg1;
- (void)endSession;
- (id)initWithSlot:(id)arg1;
- (_Bool)revalidate;
- (void)sessionRequested;
- (void)setContext:(id)arg1 forKey:(id)arg2;
- (void)setSessionEndPolicy:(long long)arg1;
- (id)remoteSessionWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)releaseSessionWithReply:(CDUnknownBlockType)arg1;
- (void)setUseExtendedLength:(_Bool)arg1;
- (void)setUseCommandChaining:(_Bool)arg1;
- (void)querySessionWithReply:(CDUnknownBlockType)arg1;
- (_Bool)beginSessionWithError:(id *)arg1;
- (void)endSessionWithReply:(CDUnknownBlockType)arg1;
- (id)contextForKey:(id)arg1;
- (void)unreserve;
- (void)handleApduResponse:(id)arg1 body:(id)arg2 le:(unsigned long long)arg3 isCase4:(_Bool)arg4 error:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (void)transmitRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)encodeLength:(unsigned long long)arg1 into:(id)arg2 sized:(long long)arg3;
- (id)buildIns:(unsigned char)arg1 p1:(unsigned char)arg2 p2:(unsigned char)arg3 data:(id)arg4 range:(struct _NSRange)arg5 le:(id)arg6 protocol:(unsigned long long)arg7 chained:(_Bool)arg8 extended:(_Bool *)arg9 realLe:(unsigned long long *)arg10;
- (void)transmitChunkedIns:(unsigned char)arg1 p1:(unsigned char)arg2 p2:(unsigned char)arg3 data:(id)arg4 fromOffset:(unsigned long long)arg5 realLe:(unsigned long long)arg6 chained:(_Bool)arg7 isCase4:(_Bool)arg8 reply:(CDUnknownBlockType)arg9;
- (void)sendIns:(unsigned char)arg1 p1:(unsigned char)arg2 p2:(unsigned char)arg3 data:(id)arg4 le:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (id)sendIns:(unsigned char)arg1 p1:(unsigned char)arg2 p2:(unsigned char)arg3 data:(id)arg4 le:(id)arg5 sw:(unsigned short *)arg6 error:(id *)arg7;
- (void)beginSessionWithReply:(CDUnknownBlockType)arg1;
- (_Bool)inSessionWithError:(id *)arg1 executeBlock:(CDUnknownBlockType)arg2;
- (long long)sessionEndPolicy;
- (id)userInteractionForSecurePINVerificationWithPINFormat:(id)arg1 APDU:(id)arg2 PINByteOffset:(long long)arg3;
- (id)userInteractionForSecurePINChangeWithPINFormat:(id)arg1 APDU:(id)arg2 currentPINByteOffset:(long long)arg3 newPINByteOffset:(long long)arg4;
- (void)reserveExclusive:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;
- (unsigned char)cla;
- (void)setCla:(unsigned char)arg1;
- (_Bool)useExtendedLength;
- (_Bool)useCommandChaining;
- (_Bool)checkAPDUResponse:(id)arg1 error:(id *)arg2;
- (_Bool)selectApplication:(id)arg1 error:(id *)arg2;

@end
