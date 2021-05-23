/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

@class WebGeolocationPrivate;

@interface WebGeolocation : NSObject

{
    WebGeolocationPrivate *_private;
}

- (void)dealloc;
- (id)_initWithWebCoreGeolocation:(struct Geolocation *)arg1;
- (void)setIsAllowed:(_Bool)arg1;

@end
