/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class IKColor;

__attribute__((visibility("hidden")))
@interface SKUIPlaceholderImageKey : NSObject

{
    long long _height;
    long long _imageTreatment;
    long long _width;
    IKColor *_placeholderBackgroundColor;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithSize:(struct CGSize)arg1 imageTreatment:(long long)arg2 placeholderBackgroundColor:(id)arg3;

@end
