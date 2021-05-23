/*
 Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

#import <SAObjects/SABaseCommand.h>

@class NSString;

@interface SABaseCommand (SiriCoreSessionObject)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;

- (id)siriCore_serializedAceDataError:(id *)arg1;
- (_Bool)siriCore_bufferingAllowedDuringActiveSession;
- (_Bool)siriCore_isRetryable;
- (_Bool)siriCore_isRestartable;
- (_Bool)siriCore_isProvisional;
- (void)siriCore_logDiagnostics;
- (id)siriCore_requestId;
- (void)siriCore_setSessionRequestId:(id)arg1;
- (_Bool)siriCore_supportedByLocalSession;

@end
