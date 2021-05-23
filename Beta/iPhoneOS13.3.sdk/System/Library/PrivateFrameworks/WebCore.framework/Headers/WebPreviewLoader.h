/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface WebPreviewLoader : NSObject

{
    struct WeakPtr<WebCore::ResourceLoader> _resourceLoader;
    struct ResourceResponse _response;
    struct RefPtr<WebCore::PreviewLoaderClient, WTF::DumbPtrTraits<WebCore::PreviewLoaderClient>> _client;
    struct unique_ptr<WebCore::PreviewConverter, std::__1::default_delete<WebCore::PreviewConverter>> _converter;
    struct RetainPtr<NSMutableArray> _bufferedDataArray;
    _Bool _hasLoadedPreview;
    _Bool _hasProcessedResponse;
    struct RefPtr<WebCore::SharedBuffer, WTF::DumbPtrTraits<WebCore::SharedBuffer>> _bufferedData;
    long long _lengthReceived;
    _Bool _needsToCallDidFinishLoading;
    _Bool _shouldDecidePolicyBeforeLoading;
}

@property (nonatomic, readonly) _Bool shouldDecidePolicyBeforeLoading;

- (id).cxx_construct;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)failed;
- (void)connection:(id)arg1 didReceiveData:(id)arg2 lengthReceived:(long long)arg3;
- (void)appendDataArray:(id)arg1;
- (void)_loadPreviewIfNeeded;
- (id)initWithResourceLoader:(struct ResourceLoader *)arg1 resourceResponse:(const struct ResourceResponse *)arg2;
- (void)finishedAppending;

@end
