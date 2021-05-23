/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface MKMapAttributionImage : NSObject

{
    NSDictionary *_imageNameForScale;
}

- (id)initWithAttributions:(id)arg1 type:(long long)arg2;
- (id)imageNameForScale:(double)arg1;

@end
