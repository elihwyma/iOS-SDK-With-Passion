/*
 Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface _MFSecCMSDecoder : NSObject

{
    int _SecCMSError;
    struct SecCmsMessageStr *_message;
    struct SecCmsDigestContextStr *_digest;
    NSArray *_signers;
    struct SecCmsSignedDataStr *_signedData;
    struct SecCmsEnvelopedDataStr *_envelopedData;
    _Bool _isEncrypted;
}

@property (nonatomic, readonly) int lastSecCMSError;
@property (nonatomic, readonly) NSArray *signers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)data;
- (long long)appendData:(id)arg1;
- (void)done;
- (id)signedData;
- (id)initWithPartData:(id)arg1 error:(id *)arg2;
- (id)verifyAgainstSenders:(id)arg1 signingError:(id *)arg2;
- (_Bool)isContentEncrypted;
- (_Bool)isContentSigned;

@end
