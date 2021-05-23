/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol WKScriptMessageHandler;

__attribute__((visibility("hidden")))
@interface MKWebViewMessageHandlerProxy : NSObject

{
    id <WKScriptMessageHandler> _target;
}

@property (weak, nonatomic) id <WKScriptMessageHandler> target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;

@end
