/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString, NSURLConnection;

__attribute__((visibility("hidden")))
@interface WKCustomProtocolLoader : NSObject

{
    struct WeakPtr<WebKit::LegacyCustomProtocolManagerProxy> _customProtocolManagerProxy;
    unsigned long long _customProtocolID;
    unsigned long long _storagePolicy;
    NSURLConnection *_urlConnection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)cancel;
- (id).cxx_construct;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)initWithLegacyCustomProtocolManagerProxy:(struct LegacyCustomProtocolManagerProxy *)arg1 customProtocolID:(unsigned long long)arg2 request:(id)arg3;

@end
