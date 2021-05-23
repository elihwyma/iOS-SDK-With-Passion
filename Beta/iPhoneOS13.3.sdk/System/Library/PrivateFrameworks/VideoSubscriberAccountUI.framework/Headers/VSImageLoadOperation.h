/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSItemProvider, NSURLSessionTask, VSAuditToken, VSOptional;

@interface VSImageLoadOperation : VSAsyncOperation

{
    NSItemProvider *_itemProvider;
    VSAuditToken *_auditToken;
    VSOptional *_result;
    NSURLSessionTask *_task;
    struct CGSize _preferredImageSize;
}

@property (retain, nonatomic) VSOptional *result;
@property (retain, nonatomic) NSURLSessionTask *task;
@property (nonatomic, readonly) NSItemProvider *itemProvider;
@property (nonatomic, readonly) struct CGSize preferredImageSize;
@property (copy, nonatomic) VSAuditToken *auditToken;

- (id)init;
- (void)cancel;
- (void)executionDidBegin;
- (id)initWithItemProvider:(id)arg1 preferredImageSize:(struct CGSize)arg2;
- (void)_finishWithImageData:(id)arg1 orError:(id)arg2;
- (void)_beginFetchingDataFromURL:(id)arg1;

@end
