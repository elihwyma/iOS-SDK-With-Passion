/*
 Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface SiriCoreSpeechPacket : NSObject

{
    NSString *_aceId;
    NSString *_refId;
    NSArray *_packets;
    long long _packetNumber;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSArray *packets;
@property (nonatomic) long long packetNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)siriCore_serializedAceDataError:(id *)arg1;
- (void)siriCore_invokeThunk;
- (_Bool)siriCore_bufferingAllowedDuringActiveSession;
- (_Bool)siriCore_isRetryable;
- (_Bool)siriCore_isRestartable;
- (_Bool)siriCore_isProvisional;
- (void)siriCore_logDiagnostics;
- (id)siriCore_requestId;
- (void)siriCore_setSessionRequestId:(id)arg1;
- (_Bool)siriCore_supportedByLocalSession;

@end
