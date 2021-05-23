/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebGeolocationProviderInitializationListener : NSObject

{
    struct RefPtr<WebCore::Geolocation, WTF::DumbPtrTraits<WebCore::Geolocation>> m_geolocation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id).cxx_construct;
- (id)initWithGeolocation:(struct Geolocation *)arg1;
- (void)initializationAllowedWebView:(id)arg1;
- (void)initializationDeniedWebView:(id)arg1;

@end
