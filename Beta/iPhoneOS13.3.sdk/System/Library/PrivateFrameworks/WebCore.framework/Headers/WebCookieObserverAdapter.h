/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface WebCookieObserverAdapter : NSObject

{
    struct CookieStorageObserver *observer;
}

- (id)initWithObserver:(struct CookieStorageObserver *)arg1;
- (void)cookiesChangedNotificationHandler:(id)arg1;

@end
