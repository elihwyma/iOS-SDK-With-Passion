/*
 Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

#import <NSObject.h>

@class BSXPCCoder, RBSXPCMessageContext;

@protocol BSXPCEncoding><BSXPCDecoding;

@interface RBSXPCMessageReply : NSObject

{
    BSXPCCoder *_payload;
    RBSXPCMessageContext *_context;
    _Bool _sent;
}

@property (nonatomic, readonly) id <BSXPCEncoding><BSXPCDecoding> payload;
@property (nonatomic, readonly) RBSXPCMessageContext *context;

- (void)send;
- (id)_initWithMessage:(id)arg1;
- (void)prepareForHandoff;
- (void)encode:(CDUnknownBlockType)arg1;

@end
