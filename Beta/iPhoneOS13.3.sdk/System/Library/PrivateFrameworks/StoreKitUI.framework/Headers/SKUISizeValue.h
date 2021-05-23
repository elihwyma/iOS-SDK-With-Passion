/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

#import <StoreKitUI/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface SKUISizeValue : NSObject <Swift>

{
    long long _height;
    long long _width;
}

@property (nonatomic, readonly) struct CGSize size;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSize:(struct CGSize)arg1;
- (void)unionWithSize:(struct CGSize)arg1;

@end
