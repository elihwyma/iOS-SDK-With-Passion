/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface SKUIImageViewElementCacheKey : NSObject

{
    long long _imageTreatment;
    struct CGSize _size;
    NSURL *_url;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithURL:(id)arg1 size:(struct CGSize)arg2 imageTreatment:(id)arg3;

@end
