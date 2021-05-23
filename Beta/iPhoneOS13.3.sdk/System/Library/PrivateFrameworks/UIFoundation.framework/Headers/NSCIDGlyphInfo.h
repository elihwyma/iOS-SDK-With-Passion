/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <UIFoundation/NSGlyphInfo.h>

@interface NSCIDGlyphInfo : NSGlyphInfo

{
    unsigned short _cid;
    unsigned long long _collection;
}

+ (void)initialize;
+ (_Bool)supportsSecureCoding;
+ (id)glyphInfoWithCharacterIdentifier:(unsigned long long)arg1 collection:(unsigned long long)arg2 baseString:(id)arg3;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)characterIdentifier;
- (unsigned long long)characterCollection;
- (unsigned int)_glyphForFont:(id)arg1 baseString:(id)arg2;
- (id)initWithCharacterIdentifier:(unsigned long long)arg1 collection:(unsigned long long)arg2 baseString:(id)arg3;

@end
