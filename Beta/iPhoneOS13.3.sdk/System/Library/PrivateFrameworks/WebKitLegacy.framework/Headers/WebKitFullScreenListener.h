/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebKitFullScreenListener : NSObject

{
    struct RefPtr<WebCore::Element, WTF::DumbPtrTraits<WebCore::Element>> _element;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id).cxx_construct;
- (id)initWithElement:(struct Element *)arg1;
- (void)webkitWillEnterFullScreen;
- (void)webkitDidEnterFullScreen;
- (void)webkitWillExitFullScreen;
- (void)webkitDidExitFullScreen;

@end
