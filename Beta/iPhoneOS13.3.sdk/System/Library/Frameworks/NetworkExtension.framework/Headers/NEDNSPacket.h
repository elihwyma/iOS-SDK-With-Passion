/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSDate, NSString;

@interface NEDNSPacket : NSObject

{
    _Bool _isAuthoritativeAnswer;
    _Bool _isTruncated;
    _Bool _isRecursionDesired;
    _Bool _isRecursionAvailable;
    unsigned short _flags;
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
    unsigned long long _endOfQueriesOffset;
}

@property (readonly) NSData *data;
@property (readonly) unsigned short flags;
@property (readonly) unsigned long long endOfQueriesOffset;
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

- (id)createResponse;
- (id)initFromData:(id)arg1;

@end
