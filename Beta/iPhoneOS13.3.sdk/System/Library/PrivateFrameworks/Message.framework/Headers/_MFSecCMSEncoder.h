/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <MIME/MFBufferedDataConsumer.h>

@class NSMutableData;

@interface _MFSecCMSEncoder : MFBufferedDataConsumer

{
    int _SecCMSError;
    struct SecCmsEncoderStr *_encoder;
    struct SecCmsMessageStr *_message;
    NSMutableData *_singleShot;
}

@property (nonatomic, readonly) int lastSecCMSError;

- (void)dealloc;
- (id)data;
- (long long)appendData:(id)arg1;
- (void)done;
- (id)initForSigningWithSender:(id)arg1 compositionSpecification:(id)arg2 error:(id *)arg3;
- (id)initForEncryptionWithCompositionSpecification:(id)arg1 error:(id *)arg2;
- (void)_appendBytes:(const void *)arg1 length:(unsigned long long)arg2;

@end
