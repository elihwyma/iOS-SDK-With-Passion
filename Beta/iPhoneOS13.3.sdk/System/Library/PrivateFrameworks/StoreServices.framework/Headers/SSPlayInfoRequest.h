/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSRequest.h>

@class NSString, SSPlayInfoRequestContext, SSPlayInfoResponse;

@protocol SSPlayInfoRequestDelegate;

@interface SSPlayInfoRequest : SSRequest

{
    SSPlayInfoRequestContext *_context;
    SSPlayInfoResponse *_response;
}

@property (nonatomic) id <SSPlayInfoRequestDelegate> delegate;
@property (readonly) SSPlayInfoRequestContext *playInfoContext;
@property (readonly) SSPlayInfoResponse *playInfoResponse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (_Bool)start;
- (id)initWithPlayInfoContext:(id)arg1;
- (void)startWithPlayInfoResponseBlock:(CDUnknownBlockType)arg1;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;

@end
