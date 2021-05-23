/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSString, NSURLRequest, WKWebView;

@interface _WKDownload : NSObject

{
    struct ObjectStorage<WebKit::DownloadProxy> _download;
}

@property (nonatomic, readonly) NSURLRequest *request;
@property (weak, nonatomic, readonly) WKWebView *originatingWebView;
@property (copy, nonatomic, readonly) NSArray *redirectChain;
@property (nonatomic, readonly) _Bool wasUserInitiated;
@property (nonatomic, readonly) NSData *resumeData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) struct Object *_apiObject;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)cancel;
- (void)publishProgressAtURL:(id)arg1;

@end
