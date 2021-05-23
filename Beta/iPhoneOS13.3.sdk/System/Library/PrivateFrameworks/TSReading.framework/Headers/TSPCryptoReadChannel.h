/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSString, SFUCryptoKey;

@protocol OS_dispatch_data, OS_dispatch_queue, TSUStreamReadChannel;

@interface TSPCryptoReadChannel : NSObject

{
    id <TSUStreamReadChannel> _readChannel;
    NSObject<OS_dispatch_queue> *_readChannelQueue;
    SFUCryptoKey *_decryptionKey;
    NSObject<OS_dispatch_data> *_holdData;
    char *_iv;
    unsigned long long _ivRead;
    struct _CCCryptor *_cryptor;
    char *_buffer;
    unsigned long long _initialBytesIgnored;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)close;
- (void)readWithQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithReadChannel:(id)arg1 decryptionKey:(id)arg2;

@end
