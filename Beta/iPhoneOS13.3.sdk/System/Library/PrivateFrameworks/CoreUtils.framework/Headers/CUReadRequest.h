/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class NSData, NSError, NSMutableData;

@interface CUReadRequest : NSObject

{
    char *_bufferPtr;
    NSError *_error;
    unsigned long long _length;
    unsigned char _messageUUID[16];
    _Bool _hasMessageUUID;
    unsigned int _statusFlags;
    void *_bufferBytes;
    NSMutableData *_bufferData;
    CDUnknownBlockType _completion;
    NSData *_data;
    unsigned long long _minLength;
    unsigned long long _maxLength;
}

@property (retain, nonatomic) NSData *data;
@property (nonatomic) void *bufferBytes;
@property (retain, nonatomic) NSMutableData *bufferData;
@property (copy, nonatomic) CDUnknownBlockType completion;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) unsigned long long length;
@property (nonatomic) unsigned long long minLength;
@property (nonatomic) unsigned long long maxLength;
@property (nonatomic, readonly) char *messageUUID;
@property (nonatomic) _Bool hasMessageUUID;
@property (nonatomic) unsigned int statusFlags;

@end
