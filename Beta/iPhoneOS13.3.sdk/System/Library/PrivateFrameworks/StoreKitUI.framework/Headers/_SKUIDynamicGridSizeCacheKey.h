/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

#import <StoreKitUI/Swift-Protocol.h>

@class SKUIViewElement;

__attribute__((visibility("hidden")))
@interface _SKUIDynamicGridSizeCacheKey : NSObject <Swift>

{
    long long _position;
    SKUIViewElement *_viewElement;
}

@property (nonatomic) long long position;
@property (retain, nonatomic) SKUIViewElement *viewElement;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)__isSKUIDynamicGridSizeCacheKey;

@end
