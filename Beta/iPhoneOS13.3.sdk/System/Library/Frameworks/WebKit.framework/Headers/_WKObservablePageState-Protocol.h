/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@class NSString, NSURL;

@protocol _WKObservablePageState

@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly, getter=isLoading) _Bool loading;
@property (nonatomic, readonly) double estimatedProgress;
@property (nonatomic, readonly) _Bool hasOnlySecureContent;
@property (nonatomic, readonly) _Bool _webProcessIsResponsive;
@property (nonatomic, readonly) NSURL *unreachableURL;
@property (nonatomic, readonly) struct __SecTrust *serverTrust;

@end
