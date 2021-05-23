/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface _MKPinAnnotationViewImageCacheKey : NSObject

{
    unsigned long long _mapType;
    UIColor *_pinColor;
    long long _idiom;
    long long _userInterfaceStyle;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithMapType:(unsigned long long)arg1 pinColor:(id)arg2 traits:(id)arg3;

@end
