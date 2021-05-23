/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TSWPFont : NSObject

{
    NSString *_fontName;
    NSString *_compatibilityName;
    NSString *_displayName;
    NSString *_familyName;
    unsigned long long _hash;
}

@property (copy, nonatomic) NSString *fontName;
@property (copy, nonatomic) NSString *compatibilityName;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *familyName;

+ (id)fontWithName:(id)arg1;
+ (id)fontWithName:(id)arg1 compatibilityName:(id)arg2;
+ (_Bool)isKeyValueProxyLeafType;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFontName:(id)arg1 compatibilityName:(id)arg2;
- (id)initWithFontName:(id)arg1;

@end
