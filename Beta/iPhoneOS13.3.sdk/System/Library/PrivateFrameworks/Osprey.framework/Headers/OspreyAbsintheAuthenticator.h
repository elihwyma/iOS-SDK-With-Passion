/*
 Image: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
 */

#import <Foundation/NSObject.h>

@class NSData, NSDate, NSString, NSURL, OspreyGRPCChannel, OspreyKeychain;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface OspreyAbsintheAuthenticator : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    struct NACContextOpaque_ *_nacContext;
    NSData *_certificateData;
    OspreyGRPCChannel *_channel;
    NSString *_uuid;
    long long _state;
    NSData *_sessionInfo;
    NSDate *_sessionExpireOn;
    NSURL *_server;
    OspreyKeychain *_keychainStorage;
}

@property (nonatomic) long long state;
@property (retain, nonatomic) NSData *sessionInfo;
@property (retain, nonatomic) NSDate *sessionExpireOn;
@property (retain, nonatomic) NSURL *server;
@property (weak, nonatomic) OspreyKeychain *keychainStorage;

+ (void)initialize;

- (void)dealloc;
- (void)didMoveToState:(long long)arg1;
- (id)initWithURL:(id)arg1 channel:(id)arg2 keychainStorage:(id)arg3;
- (id)_prefixIdentifierWithOsprey:(id)arg1;
- (void)willMoveToState:(long long)arg1;
- (void)setCachedCertificateData:(id)arg1 endpoint:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (_Bool)_readyToSignClientData;
- (id)_signData:(id)arg1;
- (void)_ensureAuthenticatedWithCompletion:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (_Bool)_isSessionInfoExpired;
- (void)fetchAbsintheServerCertificate:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)getCachedCertificateDataWithEndpoint:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)createClientSessionWithData:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)_initializeAbsintheClientWithCertificateData:(id)arg1 success:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (void)deleteCachedCertificateDataWithEndpoint:(id)arg1;
- (id)initWithURL:(id)arg1 channel:(id)arg2;
- (void)signData:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (_Bool)isSessionInfoExpired;

@end
