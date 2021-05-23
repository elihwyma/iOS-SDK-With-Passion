/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL, NSURLRequest, WKFrameInfo, WKNavigation, _WKUserInitiatedAction;

@interface WKNavigationAction : NSObject

{
    struct ObjectStorage<API::NavigationAction> _navigationAction;
}

@property (nonatomic, readonly) NSURL *_originalURL;
@property (nonatomic, readonly, getter=_isUserInitiated) _Bool _userInitiated;
@property (nonatomic, readonly) _Bool _canHandleRequest;
@property (nonatomic, readonly) _Bool _shouldOpenExternalSchemes;
@property (nonatomic, readonly) _Bool _shouldOpenAppLinks;
@property (nonatomic, readonly) _Bool _shouldPerformDownload;
@property (nonatomic, readonly) _Bool _shouldOpenExternalURLs;
@property (nonatomic, readonly) _WKUserInitiatedAction *_userInitiatedAction;
@property (nonatomic, readonly) long long _syntheticClickType;
@property (nonatomic, readonly) struct CGPoint _clickLocationInRootViewCoordinates;
@property (nonatomic, readonly) long long modifierFlags;
@property (nonatomic, readonly) _Bool _isRedirect;
@property (nonatomic, readonly) WKNavigation *_mainFrameNavigation;
@property (copy, nonatomic, readonly) WKFrameInfo *sourceFrame;
@property (copy, nonatomic, readonly) WKFrameInfo *targetFrame;
@property (nonatomic, readonly) long long navigationType;
@property (copy, nonatomic, readonly) NSURLRequest *request;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) struct Object *_apiObject;

- (void)dealloc;

@end
