/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _SKUIFontDescriptorCacheKey : NSObject

{
    const struct __CFString *_textStyle;
    NSString *_sizeCategory;
}

@property (nonatomic, readonly) const struct __CFString *textStyle;
@property (nonatomic, readonly) NSString *sizeCategory;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithTextStyle:(const struct __CFString *)arg1 sizeCategory:(id)arg2;

@end
