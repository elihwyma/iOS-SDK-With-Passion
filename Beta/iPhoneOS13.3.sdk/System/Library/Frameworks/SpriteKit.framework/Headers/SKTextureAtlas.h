/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface SKTextureAtlas : NSObject

{
    NSDictionary *_textureDict;
    NSString *_atlasName;
    _Bool _isCUIImageAtlas;
    struct unordered_map<std::__1::basic_string<char>, SKTexture *, std::__1::hash<std::__1::basic_string<char>>, std::__1::equal_to<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, SKTexture *>>> _textureMap;
}

@property (nonatomic, readonly) NSArray *textureNames;

+ (_Bool)supportsSecureCoding;
+ (id)lookupCachedTextureNamed:(id)arg1;
+ (id)atlasNamed:(id)arg1;
+ (struct CGImage *)createCGImageFromCUINamedImage:(struct CGImage *)arg1 withSize:(struct CGSize)arg2 atRect:(struct CGRect)arg3;
+ (id)findTextureNamed:(id)arg1;
+ (_Bool)canUseObjectForAtlas:(id)arg1;
+ (void)preloadTextureAtlases:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (id)atlasFromCUIImageAtlas:(id)arg1 withName:(id)arg2;
+ (id)getSupportedPostfixes;
+ (id)atlasWithDictionary:(id)arg1;
+ (void)preloadTextureAtlasesNamed:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)_exportAtlasWithDictionary:(id)arg1 toFile:(id)arg2 forcePOT:(_Bool)arg3;
+ (void)_exportAtlasWithDictionary:(id)arg1 toFile:(id)arg2;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)unload;
- (id).cxx_construct;
- (void)commonInit;
- (id)textureNamed:(id)arg1;
- (void)loadTextures;
- (id)_copyImageData;
- (void)preloadWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_prePopulateCache;
- (void)parseAtlasPropertyList:(id)arg1 withPath:(id)arg2;
- (void)loadTexturesFromCUIImageAtlas:(id)arg1;
- (id)createTextureFromProvider:(struct CGImageProvider *)arg1 andSource:(struct CGImage *)arg2;
- (id)createSubTextureFromTexture:(id)arg1 andCUINamedImage:(id)arg2 andOrigin:(struct CGPoint)arg3;
- (id)findTextureNamedFromAtlas:(id)arg1;
- (_Bool)isEqualToTextureAtlas:(id)arg1;

@end
