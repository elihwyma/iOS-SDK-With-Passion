/*
 Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

#import <Foundation/NSObject.h>

@class NSData, XPCRequest;

@protocol NSCoding;

@interface XPCNSRequest : NSObject

{
    id <NSCoding> _message;
    NSData *_data;
    XPCRequest *_request;
}

@property (retain, nonatomic, readonly) XPCRequest *request;
@property (retain, nonatomic, readonly) id <NSCoding> message;
@property (retain, nonatomic, readonly) NSData *data;

- (void)sendReply:(id)arg1;
- (id)initWithXPCRequest:(id)arg1;

@end
