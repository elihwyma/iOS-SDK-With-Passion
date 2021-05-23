/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSString, SFUCryptoKey;

@protocol OS_dispatch_queue, TSUStreamReadChannel;

@interface TSPCryptoTranscodeReadChannel : NSObject

{
    id <TSUStreamReadChannel> _readChannel;
    SFUCryptoKey *_encryptionKey;
    NSObject<OS_dispatch_queue> *_readQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)close;
- (void)readWithQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithReadChannel:(id)arg1 decryptionKey:(id)arg2 encryptionKey:(id)arg3;

@end
