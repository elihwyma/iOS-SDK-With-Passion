/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSRequest.h>

@class SSSoftwareUpdatesContext;

@protocol SSSoftwareUpdatesRequestDelegate;

@interface SSSoftwareUpdatesRequest : SSRequest

{
    SSSoftwareUpdatesContext *_context;
}

@property (nonatomic) id <SSSoftwareUpdatesRequestDelegate> delegate;
@property (readonly) SSSoftwareUpdatesContext *updateQueueContext;

- (void)dealloc;
- (_Bool)start;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)startWithUpdatesResponseBlock:(CDUnknownBlockType)arg1;
- (id)initWithUpdateQueueContext:(id)arg1;

@end
