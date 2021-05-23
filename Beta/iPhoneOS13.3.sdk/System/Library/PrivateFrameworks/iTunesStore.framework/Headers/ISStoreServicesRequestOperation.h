/*
 Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class SSRequest;

@interface ISStoreServicesRequestOperation

{
    SSRequest *_request;
}

@property (readonly) SSRequest *request;

- (void)dealloc;
- (void)run;
- (void)cancel;
- (id)initWithRequest:(id)arg1;

@end
