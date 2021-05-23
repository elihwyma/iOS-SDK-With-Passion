/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDOperation.h>

@class CKPublicKey, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface CKDFetchTranscodeServerPublicKeyOperation : CKDOperation

{
    CKPublicKey *_transcodeServerPublicKey;
    NSString *_transcodeServerHostname;
    NSURL *_transcodeServerPublicKeyURL;
}

@property (nonatomic, readonly) NSString *transcodeServerHostname;
@property (retain, nonatomic) NSURL *transcodeServerPublicKeyURL;
@property (retain) CKPublicKey *transcodeServerPublicKey;

+ (struct __SecPolicy *)createTranscodeServerTrustPolicy;

- (void)main;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (id)nameForState:(unsigned long long)arg1;
- (_Bool)makeStateTransition;
- (void)determineTranscodeServerPublicKeyURL;
- (void)fetchCachedTranscodePublicKey;
- (void)fetchRemoteTranscodePublicKey;

@end
