/*
 Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

#import <RemoteUI/RUIHTTPRequest.h>

@class NSString, NSURL, RUIParser, RUIStyle, _RUILoaderSessionDelegateAdapter;

@protocol RUIParserDelegate;

@interface RUILoader : RUIHTTPRequest

{
    RUIParser *_parser;
    NSURL *_url;
    _RUILoaderSessionDelegateAdapter *_sessionDelegateAdapter;
    _Bool _allowNonSecureHTTP;
    id <RUIParserDelegate> _parserDelegate;
    RUIStyle *_style;
    long long _userInterfaceStyle;
}

@property (nonatomic) _Bool allowNonSecureHTTP;
@property (weak, nonatomic) id <RUIParserDelegate> parserDelegate;
@property (retain, nonatomic) RUIStyle *style;
@property (nonatomic) long long userInterfaceStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)failWithError:(id)arg1;
- (void)cancel;
- (void)parseData:(id)arg1;
- (id)URL;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)loadRequest:(id)arg1;
- (_Bool)receivedValidResponse:(id)arg1;
- (id)sessionConfiguration;
- (id)urlSessionDelegate;
- (void)didParseData;
- (void)shouldLoadRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleShouldLoadRequestResult:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_finishLoad;
- (_Bool)anyWebViewLoading;
- (void)webViewFinishedLoading;
- (void)allWebViewsFinishedLoading;
- (void)loadXMLUIWithURL:(id)arg1;
- (void)loadXMLUIWithRequest:(id)arg1;
- (void)loadXMLUIWithData:(id)arg1 baseURL:(id)arg2;

@end
