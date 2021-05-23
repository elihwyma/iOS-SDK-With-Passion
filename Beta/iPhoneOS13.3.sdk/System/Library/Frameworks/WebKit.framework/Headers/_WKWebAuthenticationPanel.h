/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol _WKWebAuthenticationPanelDelegate;

@interface _WKWebAuthenticationPanel : NSObject

{
    struct ObjectStorage<API::WebAuthenticationPanel> _panel;
    struct WeakPtr<WebKit::WebAuthenticationPanelClient> _client;
}

@property (weak, nonatomic) id <_WKWebAuthenticationPanelDelegate> delegate;
@property (copy, nonatomic, readonly) NSString *relyingPartyID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) struct Object *_apiObject;

- (void)dealloc;
- (void)cancel;
- (id).cxx_construct;

@end
