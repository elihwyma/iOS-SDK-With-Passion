/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSData, NSInputStream, NSMutableArray, NSMutableData, NSOutputStream, NSString;

@interface JXHTTPMultipartBody : NSObject

{
    unsigned long long _streamBufferLength;
    NSMutableArray *_partsArray;
    NSString *_boundaryString;
    NSData *_finalBoundaryData;
    NSString *_httpContentType;
    NSInputStream *_httpInputStream;
    NSOutputStream *_httpOutputStream;
    NSMutableData *_bodyDataBuffer;
    long long _httpContentLength;
    long long _bytesWritten;
}

@property (retain, nonatomic) NSMutableArray *partsArray;
@property (retain, nonatomic) NSString *boundaryString;
@property (retain, nonatomic) NSData *finalBoundaryData;
@property (retain, nonatomic) NSString *httpContentType;
@property (retain, nonatomic) NSInputStream *httpInputStream;
@property (retain, nonatomic) NSOutputStream *httpOutputStream;
@property (retain, nonatomic) NSMutableData *bodyDataBuffer;
@property (nonatomic) long long httpContentLength;
@property (nonatomic) long long bytesWritten;
@property (nonatomic) unsigned long long streamBufferLength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)withDictionary:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (id)initWithDictionary:(id)arg1;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (void)httpOperationWillStart:(id)arg1;
- (void)httpOperationWillNeedNewBodyStream:(id)arg1;
- (void)httpOperationDidFinishLoading:(id)arg1;
- (void)httpOperationDidFail:(id)arg1;
- (unsigned long long)loadMutableData:(id)arg1 withDataInRange:(struct _NSRange)arg2;
- (void)recreateStreamsForOperation:(id)arg1;
- (void)scheduleOutputStreamOnThread:(id)arg1;
- (void)setPartWithType:(int)arg1 forKey:(id)arg2 contentType:(id)arg3 fileName:(id)arg4 data:(id)arg5;
- (void)addPartWithType:(int)arg1 forKey:(id)arg2 contentType:(id)arg3 fileName:(id)arg4 data:(id)arg5;
- (void)addString:(id)arg1 forKey:(id)arg2;
- (void)addData:(id)arg1 forKey:(id)arg2 contentType:(id)arg3 fileName:(id)arg4;
- (void)setData:(id)arg1 forKey:(id)arg2 contentType:(id)arg3 fileName:(id)arg4;
- (void)addFile:(id)arg1 forKey:(id)arg2 contentType:(id)arg3 fileName:(id)arg4;
- (void)setFile:(id)arg1 forKey:(id)arg2 contentType:(id)arg3 fileName:(id)arg4;

@end
