/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface WKObservablePageState : NSObject

{
    RefPtr_a805eeb8 _page;
    struct unique_ptr<WebKit::PageLoadStateObserver, std::__1::default_delete<WebKit::PageLoadStateObserver>> _observer;
}

@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly, getter=isLoading) _Bool loading;
@property (nonatomic, readonly) double estimatedProgress;
@property (nonatomic, readonly) _Bool hasOnlySecureContent;
@property (nonatomic, readonly) _Bool _webProcessIsResponsive;
@property (nonatomic, readonly) NSURL *unreachableURL;
@property (nonatomic, readonly) struct __SecTrust *serverTrust;

- (void)dealloc;
- (id).cxx_construct;
- (id)initWithPage:(RefPtr_a805eeb8 *)arg1;

@end
