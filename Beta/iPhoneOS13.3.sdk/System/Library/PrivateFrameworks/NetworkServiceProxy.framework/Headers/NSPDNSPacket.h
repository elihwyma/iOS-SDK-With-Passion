/*
 Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSDate, NSString;

@interface NSPDNSPacket : NSObject

{
    _Bool _isAuthoritativeAnswer;
    _Bool _isTruncated;
    _Bool _isRecursionDesired;
    _Bool _isRecursionAvailable;
    long long _identifier;
    NSDate *_timestamp;
    long long _messageType;
    long long _opCode;
    long long _responseCode;
    NSArray *_queries;
    NSArray *_answers;
    NSArray *_authorities;
    NSArray *_additionalRecords;
    NSData *_data;
}

@property (readonly) NSData *data;
@property (readonly) long long identifier;
@property (readonly) NSDate *timestamp;
@property (readonly) long long messageType;
@property (readonly) long long opCode;
@property (readonly) _Bool isAuthoritativeAnswer;
@property (readonly) _Bool isTruncated;
@property (readonly) _Bool isRecursionDesired;
@property (readonly) _Bool isRecursionAvailable;
@property (readonly) long long responseCode;
@property (readonly) NSString *responseCodeString;
@property (readonly) NSArray *queries;
@property (readonly) NSArray *answers;
@property (readonly) NSArray *authorities;
@property (readonly) NSArray *additionalRecords;

- (id)initFromData:(id)arg1;

@end
