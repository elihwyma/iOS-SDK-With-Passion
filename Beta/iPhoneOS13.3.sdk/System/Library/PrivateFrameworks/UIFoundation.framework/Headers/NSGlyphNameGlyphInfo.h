/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <UIFoundation/NSIdentityGlyphInfo.h>

@class NSString;

@interface NSGlyphNameGlyphInfo : NSIdentityGlyphInfo

{
    NSString *_name;
}

+ (void)initialize;
+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)glyphName;
- (id)initWithGlyphName:(id)arg1 glyph:(unsigned int)arg2 forFont:(id)arg3 baseString:(id)arg4;

@end
