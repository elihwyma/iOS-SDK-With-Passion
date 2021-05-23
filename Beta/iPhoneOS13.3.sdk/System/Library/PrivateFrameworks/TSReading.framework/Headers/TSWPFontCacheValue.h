/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@interface TSWPFontCacheValue : NSObject

{
    struct __CTFont *_ctFont;
}

@property (nonatomic, readonly) struct __CTFont *ctFont;

+ (id)cacheValueWithCTFont:(struct __CTFont *)arg1;

- (void)dealloc;
- (id)initWithCTFont:(struct __CTFont *)arg1;

@end
