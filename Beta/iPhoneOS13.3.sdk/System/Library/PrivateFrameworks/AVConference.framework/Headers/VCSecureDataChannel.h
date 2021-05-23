/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class VCTransport;

@protocol VCSecureDataChannelDelegate;

__attribute__((visibility("hidden")))
@interface VCSecureDataChannel : NSObject

{
    unsigned int _localCallID;
    unsigned int _remoteCallID;
    struct _tls_record_s *tlsRecord;
    id _delegate;
    VCTransport *_transport;
    unsigned long long _maxUDPPayloadSize;
}

@property (nonatomic) id <VCSecureDataChannelDelegate> delegate;
@property (nonatomic, readonly) long long maxEncryptedDataSize;
@property (nonatomic, readonly) long long maxUnencryptedDataSize;
@property (nonatomic) unsigned long long maxUDPPayloadSize;

- (void)dealloc;
- (int)sendData:(id)arg1 messageType:(unsigned int)arg2 encrypted:(_Bool)arg3;
- (id)initWithLocalCallID:(unsigned int)arg1 remoteCallID:(unsigned int)arg2 isCaller:(_Bool)arg3 sharedSecret:(id)arg4 error:(id *)arg5;
- (int)setupWithSharedSecret:(id)arg1 isCaller:(_Bool)arg2 error:(id *)arg3;
- (int)convertEncryptedData:(id)arg1 toData:(id *)arg2 encrypted:(_Bool)arg3;
- (int)convertData:(id)arg1 toEncryptedData:(id *)arg2 encrypted:(_Bool)arg3;

@end
