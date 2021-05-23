/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

#import <Silex/Swift-Protocol.h>

@protocol SXFontAttributes;

@interface SXFontIndexCacheKey : NSObject <Swift>

{
    id <SXFontAttributes> _fontAttributes;
    long long _fontSize;
}

@property (nonatomic, readonly) id <SXFontAttributes> fontAttributes;
@property (nonatomic, readonly) long long fontSize;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFontAttributes:(id)arg1 fontSize:(long long)arg2;

@end
