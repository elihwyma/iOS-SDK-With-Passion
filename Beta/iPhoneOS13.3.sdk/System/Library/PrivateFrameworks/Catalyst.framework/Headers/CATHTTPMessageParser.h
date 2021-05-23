/*
 Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@protocol CATHTTPMessageParserDelegate;

__attribute__((visibility("hidden")))
@interface CATHTTPMessageParser : NSObject

{
    struct __CFHTTPMessage *mCurrentMessage;
    NSDictionary *mCurrentHeaderFields;
    unsigned long long mCurrentBytesReceived;
    id <CATHTTPMessageParserDelegate> _delegate;
}

@property (weak, nonatomic) id <CATHTTPMessageParserDelegate> delegate;

+ (id)encodeRequestData:(id)arg1;
+ (id)responseHeaderForContentWithLength:(unsigned long long)arg1;

- (_Bool)appendBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (void)dealloc;
- (void)delegateDidReceiveRequestWithURL:(id)arg1;
- (void)delegateDidReceiveRequestData:(id)arg1;
- (void)delegateDidReceiveResponseData:(id)arg1 moreComing:(_Bool)arg2;

@end
