/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TSWPFontCacheKey : NSObject

{
    NSString *_fontName;
    double _fontSize;
    double _fontWeight;
    unsigned long long _hash;
}

@property (nonatomic, readonly) NSString *fontName;
@property (nonatomic, readonly) double fontSize;
@property (nonatomic, readonly) double fontWeight;

+ (id)cacheKeyWithFontName:(id)arg1 size:(double)arg2 weight:(double)arg3;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithFontName:(id)arg1 size:(double)arg2 weight:(double)arg3;

@end
