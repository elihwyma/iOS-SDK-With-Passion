/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SKBitmapFont : NSObject

{
    NSString *_fontName;
    NSString *_filePath;
    double _lineHeight;
    double _baseLine;
    NSArray *_characterSprites;
    struct map<unsigned short, SKSpriteNode *, std::__1::less<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, SKSpriteNode *>>> _characterSpriteByChar;
    struct map<unsigned short, double, std::__1::less<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, double>>> _characterAdvanceByChar;
    struct map<unsigned int, double, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, double>>> _characterKerningByCharPair;
    _Bool _internal;
    NSString *_fileName;
}

+ (_Bool)supportsSecureCoding;
+ (id)fontForFileNamed:(id)arg1;
+ (id)fontWithTexture:(id)arg1 fontDataString:(id)arg2;
+ (id)_fontForFileNamed:(id)arg1;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id).cxx_construct;
- (id)fontName;
- (double)lineHeight;
- (id)spriteForCharacterNamed:(unsigned short)arg1;
- (double)kerningForCharacterNamed:(unsigned short)arg1 followedBy:(unsigned short)arg2;
- (double)advanceForCharacterNamed:(unsigned short)arg1;
- (_Bool)loadFontWithTexture:(id)arg1 fontDataString:(id)arg2;

@end
