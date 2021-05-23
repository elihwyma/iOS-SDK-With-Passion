/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSRequest.h>

@class NSString, NSURLRequest;

@protocol SSDownloadManifestRequestDelegate;

@interface SSDownloadManifestRequest : SSRequest

{
    long long _manifestFormat;
    _Bool _shouldHideUserPrompts;
    NSURLRequest *_urlRequest;
}

@property long long manifestFormat;
@property (nonatomic) id <SSDownloadManifestRequestDelegate> delegate;
@property (readonly) NSURLRequest *URLRequest;
@property _Bool shouldHideUserPrompts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (_Bool)start;
- (id)initWithURLRequest:(id)arg1;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)startWithManifestResponseBlock:(CDUnknownBlockType)arg1;

@end
