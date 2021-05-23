/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NSGlyphInfo : NSObject

{
    NSString *_baseString;
}

+ (void)initialize;
+ (_Bool)supportsSecureCoding;
+ (id)glyphInfoWithGlyph:(unsigned int)arg1 forFont:(id)arg2 baseString:(id)arg3;
+ (id)glyphInfoWithCharacterIdentifier:(unsigned long long)arg1 collection:(unsigned long long)arg2 baseString:(id)arg3;
+ (id)glyphInfoWithGlyphName:(id)arg1 forFont:(id)arg2 baseString:(id)arg3;
+ (id)glyphInfoWithCGGlyph:(unsigned short)arg1 forFont:(id)arg2 baseString:(id)arg3;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForKeyedArchiver;
- (id)baseString;
- (id)_baseString;
- (unsigned long long)characterIdentifier;
- (unsigned long long)characterCollection;
- (id)glyphName;
- (unsigned int)_glyphForFont:(id)arg1 baseString:(id)arg2;
- (id)initWithBaseString:(id)arg1;
- (unsigned short)glyphID;

@end
