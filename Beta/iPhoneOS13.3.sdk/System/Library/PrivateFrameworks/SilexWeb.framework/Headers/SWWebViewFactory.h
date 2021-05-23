/*
 Image: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
 */

#import <Foundation/NSObject.h>

@class NSPointerArray, NSString, WKProcessPool, WKWebsiteDataStore;

@interface SWWebViewFactory : NSObject

{
    NSPointerArray *_webViews;
    WKProcessPool *_processPool;
    WKWebsiteDataStore *_dataStore;
}

@property (nonatomic, readonly) WKProcessPool *processPool;
@property (nonatomic, readonly) WKWebsiteDataStore *dataStore;
@property (retain, nonatomic) NSPointerArray *webViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)createWebViewWithUserContentController:(id)arg1;
- (id)initWithProcessPool:(id)arg1 websiteDataStore:(id)arg2;
- (void)assignRelatedWebViewToConfiguration:(id)arg1;

@end
