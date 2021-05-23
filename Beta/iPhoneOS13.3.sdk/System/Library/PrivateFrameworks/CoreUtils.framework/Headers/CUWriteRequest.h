/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class NSArray, NSError;

@interface CUWriteRequest : NSObject

{
    NSError *_error;
    struct iovec _iov[16];
    struct iovec *_iop;
    int _ion;
    unsigned long long _offset;
    unsigned char _messageUUID[16];
    _Bool _endOfData;
    _Bool _hasMessageUUID;
    struct iovec *_bytesIOArray;
    unsigned long long _bytesIOCount;
    unsigned long long _bytesIOMaxCount;
    CDUnknownBlockType _completion;
    NSArray *_dataArray;
}

@property (nonatomic, readonly) struct iovec *bytesIOArray;
@property (nonatomic) unsigned long long bytesIOCount;
@property (nonatomic, readonly) unsigned long long bytesIOMaxCount;
@property (copy, nonatomic) CDUnknownBlockType completion;
@property (retain, nonatomic) NSArray *dataArray;
@property (nonatomic) _Bool endOfData;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) char *messageUUID;
@property (nonatomic) _Bool hasMessageUUID;

- (id)init;

@end
