/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@protocol NSNetServiceBrowserDelegate;

@interface NSNetServiceBrowser : NSObject

{
    id _netServiceBrowser;
    id _delegate;
    void *_reserved;
    _Bool _includesPeerToPeer;
}

@property id <NSNetServiceBrowserDelegate> delegate;
@property _Bool includesPeerToPeer;

- (id)init;
- (void)dealloc;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)stop;
- (_Bool)_includesAWDL;
- (void)_setIncludesAWDL:(_Bool)arg1;
- (void)searchForBrowsableDomains;
- (void)searchForRegistrationDomains;
- (void)searchForServicesOfType:(id)arg1 inDomain:(id)arg2;
- (struct __CFNetServiceBrowser *)_internalNetServiceBrowser;
- (void)_dispatchCallBack:(void *)arg1 flags:(unsigned long long)arg2 error:(CDStruct_59046461)arg3;
- (void)searchForAllDomains;

@end
