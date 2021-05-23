/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol WBSSiteMetadataProviderDelegate;

@interface WBSSVGImageRenderingProvider : NSObject

{
    id <WBSSiteMetadataProviderDelegate> _providerDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <WBSSiteMetadataProviderDelegate> providerDelegate;
@property (nonatomic, readonly) _Bool providesFavicons;

- (_Bool)canHandleRequest:(id)arg1;
- (id)responseForRequest:(id)arg1 willProvideUpdates:(_Bool *)arg2;
- (void)prepareResponseForRequest:(id)arg1 allowDelayedResponse:(_Bool)arg2;
- (_Bool)_requestIsValid:(id)arg1;
- (void)webViewMetadataFetchOperation:(id)arg1 getWebViewOfSize:(struct CGSize)arg2 withConfiguration:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)webViewMetadataFetchOperation:(id)arg1 didFinishUsingWebView:(id)arg2;

@end
