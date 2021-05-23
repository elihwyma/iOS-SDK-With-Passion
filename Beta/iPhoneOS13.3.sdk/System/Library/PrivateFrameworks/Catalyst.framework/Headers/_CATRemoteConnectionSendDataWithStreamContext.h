/*
 Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

#import <Foundation/NSObject.h>

@class NSData, NSInputStream, NSMutableData, NSString;

__attribute__((visibility("hidden")))
@interface _CATRemoteConnectionSendDataWithStreamContext : NSObject

{
    NSMutableData *mBuffer;
    NSData *mHeaderData;
    unsigned long long mBytesRead;
    NSInputStream *_stream;
    unsigned long long _dataLength;
    unsigned long long _bufferSize;
    id _userInfo;
    unsigned long long _bytesWritten;
}

@property (copy, nonatomic, readonly) NSInputStream *stream;
@property (nonatomic, readonly) unsigned long long dataLength;
@property (nonatomic, readonly) unsigned long long bufferSize;
@property (nonatomic, readonly) id userInfo;
@property (nonatomic, readonly) _Bool hasBytesRemaining;
@property (nonatomic) unsigned long long bytesWritten;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long clientBytesWritten;

- (void)dealloc;
- (id)initWithStream:(id)arg1 length:(unsigned long long)arg2 bufferSize:(unsigned long long)arg3 userInfo:(id)arg4;
- (id)bufferedDataWithError:(id *)arg1;

@end
