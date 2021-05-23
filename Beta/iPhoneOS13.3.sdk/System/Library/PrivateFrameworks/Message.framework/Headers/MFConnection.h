/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class MFConnectionSettings, NSArray, NSString;

@protocol ECNWConnectionWrapper, ECSASLSecurityLayer;

@interface MFConnection : NSObject

{
    id <ECSASLSecurityLayer> _securityLayer;
    MFConnectionSettings *_connectionSettings;
    id <ECNWConnectionWrapper> _socket;
    double _lastUsedTime;
    char *_buffer;
    long long _bufferRemainingBytes;
    unsigned long long _bufferStart;
    unsigned long long _bufferLength;
    unsigned long long _desiredBufferLength;
    struct z_stream_s *_deflater;
    struct z_stream_s *_inflater;
    char *_zbuffer;
    unsigned int _readBytesNotLogged;
    _Atomic _Bool _isFetching;
    _Bool _compressionEnabled;
    NSString *_accountLogString;
}

@property _Bool isFetching;
@property (nonatomic, readonly) double lastUsedTime;
@property (nonatomic, readonly) NSArray *capabilities;
@property (nonatomic, readonly) NSArray *authenticationMechanisms;
@property (nonatomic, readonly) NSString *securityProtocol;
@property (nonatomic, readonly) NSString *accountLogString;
@property (nonatomic, readonly) _Bool isValid;
@property (nonatomic, readonly) _Bool hasBytesAvailable;
@property (nonatomic, readonly) _Bool isCellularConnection;
@property (nonatomic, readonly) _Bool loginDisabled;
@property (nonatomic, readonly) _Bool usesOpportunisticSockets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (_Bool)shouldTryFallbacksAfterError:(id)arg1;
+ (void)readLoggingDefaults;
+ (void)logConnection:(id)arg1 type:(long long)arg2 data:(id)arg3;
+ (void)flushLog;
+ (id)logClasses;
+ (void)setLogClasses:(id)arg1;
+ (_Bool)logAllSocketActivity;
+ (void)setLogAllSocketActivity:(_Bool)arg1;
+ (id)logActivityOnPorts;
+ (void)setLogActivityOnPorts:(id)arg1;
+ (id)logActivityOnHosts;
+ (void)setLogActivityOnHosts:(id)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)writeData:(id)arg1;
- (void)disconnect;
- (_Bool)connectUsingFallbacksForAccount:(id)arg1;
- (_Bool)authenticateUsingAccount:(id)arg1;
- (id)copyDiagnosticInformation;
- (_Bool)connectUsingAccount:(id)arg1;
- (void)enableThroughputMonitoring:(_Bool)arg1;
- (_Bool)_evaluateTrust:(struct __SecTrust *)arg1 errorPtr:(id *)arg2;
- (void)_setupSocketWithSettings:(id)arg1;
- (_Bool)connectUsingSettings:(id)arg1;
- (_Bool)authenticateUsingAccount:(id)arg1 authenticator:(id)arg2;
- (_Bool)writeBytes:(const char *)arg1 length:(unsigned long long)arg2 dontLogBytesInRange:(struct _NSRange)arg3;
- (_Bool)writeData:(id)arg1 dontLogBytesInRange:(struct _NSRange)arg2;
- (void)endCompression;
- (_Bool)_certificateIsTrustedForAccount:(id)arg1;
- (void)_setCertificateIsTrusted:(_Bool)arg1 forAccount:(id)arg2;
- (void)setDesiredReadBufferLength:(unsigned long long)arg1;
- (void)logReadChars:(const char *)arg1 length:(unsigned long long)arg2;
- (_Bool)readLineIntoData:(id)arg1;
- (_Bool)readBytesIntoData:(id)arg1 desiredLength:(unsigned long long)arg2;
- (_Bool)startTLSForAccount:(id)arg1;
- (_Bool)startCompression;
- (id)connectionSettings;
- (void)setConnectionSettings:(id)arg1;

@end
