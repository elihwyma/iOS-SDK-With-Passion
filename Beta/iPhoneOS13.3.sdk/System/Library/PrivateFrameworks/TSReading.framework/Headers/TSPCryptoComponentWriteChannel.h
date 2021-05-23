/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol TSPComponentWriteChannel;

@interface TSPCryptoComponentWriteChannel : NSObject

{
    id <TSPComponentWriteChannel> _writeChannel;
    struct _CCCryptor *_cryptor;
    char *_buffer;
    struct {
        unsigned int ctx[96];
    } _ccHmacContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)close;
- (void)writeData:(id)arg1;
- (void)_writeData:(id)arg1 updateHmac:(_Bool)arg2;
- (id)initWithWriteChannel:(id)arg1 encryptionKey:(id)arg2;

@end
