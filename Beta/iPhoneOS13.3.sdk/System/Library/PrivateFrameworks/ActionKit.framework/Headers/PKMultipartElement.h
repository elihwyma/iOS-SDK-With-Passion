/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSData, NSInputStream;

@interface PKMultipartElement : NSObject

{
    NSData *_headers;
    NSInputStream *_body;
    unsigned long long _headersLength;
    unsigned long long _bodyLength;
    unsigned long long _length;
    unsigned long long _delivered;
}

@property (retain, nonatomic) NSData *headers;
@property (retain, nonatomic) NSInputStream *body;
@property (nonatomic) unsigned long long headersLength;
@property (nonatomic) unsigned long long bodyLength;
@property (nonatomic) unsigned long long length;
@property (nonatomic) unsigned long long delivered;

- (unsigned long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (void)appendNewLine:(id)arg1;
- (void)updateLength;
- (id)initWithName:(id)arg1 boundary:(id)arg2 string:(id)arg3;
- (id)initWithName:(id)arg1 boundary:(id)arg2 data:(id)arg3 contentType:(id)arg4;
- (id)initWithName:(id)arg1 boundary:(id)arg2 data:(id)arg3 contentType:(id)arg4 filename:(id)arg5;
- (id)initWithName:(id)arg1 filename:(id)arg2 boundary:(id)arg3 path:(id)arg4;
- (id)initWithName:(id)arg1 filename:(id)arg2 boundary:(id)arg3 path:(id)arg4 contentType:(id)arg5;
- (id)initWithName:(id)arg1 filename:(id)arg2 boundary:(id)arg3 stream:(id)arg4 streamLength:(unsigned long long)arg5;
- (id)initWithHeaders:(id)arg1 string:(id)arg2 boundary:(id)arg3;
- (id)initWithHeaders:(id)arg1 path:(id)arg2 boundary:(id)arg3;
- (id)makeHeadersDataFromHeadersDict:(id)arg1 boundary:(id)arg2;

@end
