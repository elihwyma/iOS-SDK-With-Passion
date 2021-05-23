/*
 Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
 */

#import <Foundation/NSObject.h>

@class NSCondition, NSError, NSInputStream, NSMutableDictionary, NSOutputStream, NSString;

@protocol OS_dispatch_queue;

@interface MFStream : NSObject

{
    NSInputStream *_rStream;
    NSOutputStream *_wStream;
    NSMutableDictionary *_properties;
    CDUnknownBlockType _callback;
    NSObject<OS_dispatch_queue> *_location;
    unsigned long long _capacity;
    unsigned long long _length;
    char *_buffer;
    NSError *_error;
    _Bool _streamCanRead;
    _Bool _streamCanWrite;
    _Bool _dispatchedBytesAvailable;
    unsigned long long _bytesRead;
    unsigned long long _bytesWritten;
    NSCondition *_condition;
}

@property (nonatomic, readonly) NSError *streamError;
@property (nonatomic, readonly) _Bool isOpen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)networkThread;
+ (void)setNetworkThread:(id)arg1;
+ (id)_networkDispatchQueue;

- (void)dealloc;
- (void)close;
- (id)propertyForKey:(id)arg1;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (id)_copyPropertyForKey:(id)arg1;
- (void)_createPairWithSocketToHostName:(id)arg1 port:(long long)arg2;
- (void)_readBytesFromStream;
- (void)_closeAndReleaseStream:(id)arg1 logMessage:(id)arg2;
- (id)initCallBack:(CDUnknownBlockType)arg1 onDispatchQueue:(id)arg2;
- (void)openToHostName:(id)arg1 port:(long long)arg2;

@end
