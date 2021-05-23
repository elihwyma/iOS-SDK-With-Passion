/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSCache;

__attribute__((visibility("hidden")))
@interface _MKMapItemAttributionProviderLogoImageCache : NSObject

{
    NSCache *_cache;
}

+ (id)sharedInstance;

- (id)init;
- (id)imageForKey:(id)arg1;
- (void)setImage:(id)arg1 forKey:(id)arg2;

@end
