/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSURL;

@interface TDVectorGlyphReader : NSObject

{
    struct os_unfair_lock_s _lock;
    struct CGSVGDocument *_svgDocument;
    NSURL *_fileURL;
    NSDictionary *_guideNodes;
    NSDictionary *_vectorGlyphNodes;
    NSMutableDictionary *_vectorGlyphWithWeightSize;
    double _sourcePointSize;
    double _defaultPointSize;
}

+ (id)vectorGlyphReaderWithURL:(id)arg1 platform:(long long)arg2 error:(id *)arg3;
+ (id)vectorGlyphReaderWithURL:(id)arg1 error:(id *)arg2;

- (void)dealloc;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)initWithURL:(id)arg1 error:(id *)arg2;
- (id)initWithURL:(id)arg1 platform:(long long)arg2 error:(id *)arg3;
- (_Bool)_commonInitWithData:(id)arg1 platform:(long long)arg2 error:(id *)arg3;
- (id)initWithData:(id)arg1 platform:(long long)arg2 error:(id *)arg3;
- (_Bool)_readSVGNodesError:(id *)arg1;
- (_Bool)_validateVectorGlyphsWithError:(id *)arg1;
- (id)_caplineNodeIDForGlyphSize:(long long)arg1;
- (id)_baselineNodeIDForGlyphSize:(long long)arg1;
- (id)_glyphNodeIDForWeight:(long long)arg1 size:(long long)arg2;
- (double)defaultPointSize;
- (double)_sourcePointSize;
- (unsigned long long)numberOfVectorGlyphs;
- (struct CGSVGDocument *)vectorGlyphWithWeight:(long long)arg1 size:(long long)arg2 error:(id *)arg3;
- (_Bool)vectorGlyphExistsWithWeight:(long long)arg1 size:(long long)arg2 error:(id *)arg3;
- (double)baselineForVectorGlyphWithWeight:(long long)arg1 size:(long long)arg2;
- (double)capHeightForVectorGlyphWithWeight:(long long)arg1 size:(long long)arg2;
- (CDStruct_3c058996)alignmentRectInsetsForVectorGlyphWithWeight:(long long)arg1 size:(long long)arg2;

@end
