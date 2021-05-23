/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface SKTextureAtlasPacker : NSObject

+ (struct CGImage *)copyProcessedImageSource:(id)arg1;

- (void)generateTextureAtlasImages:(id)arg1 outputDictionary:(id *)arg2 forcePOT:(_Bool)arg3;
- (struct CGRect)calcNonAlphaArea:(struct CGImage *)arg1;
- (struct CGImage *)copyRotateCGImage:(struct CGImage *)arg1 direction:(_Bool)arg2;
- (_Bool)isFullyOpaque:(struct CGImage *)arg1;
- (id)partitionTextureFilesByResolution:(id)arg1;
- (id)generateMetaData;
- (id)processPackedTextureAtlas:(const vector_c74fc2b3 *)arg1 suffix:(id)arg2 packer:(shared_ptr_7747cbe3)arg3 sortedTrimArray:(const vector_ea45b3ba *)arg4 sortedTextureArray:(const vector_65e381fc *)arg5;
- (id)getTextureFileList:(id)arg1 modDate:(id *)arg2;

@end
