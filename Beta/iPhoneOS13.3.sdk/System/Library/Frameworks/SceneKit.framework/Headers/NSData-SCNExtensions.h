/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSData.h>

@interface NSData (SCNExtensions)

- (id)_operateOnDataUsingCompressionAlgorithm:(int)arg1 operation:(int)arg2;
- (id)scn_compressedDataUsingCompressionAlgorithm:(int)arg1;
- (id)scn_uncompressedDataUsingCompressionAlgorithm:(int)arg1;
- (id)scn_indexedDataEncodingHighWatermarkWithBytesPerIndex:(unsigned long long)arg1;
- (id)scn_indexedDataDecodingHighWatermarkWithBytesPerIndex:(unsigned long long)arg1;
- (id)scn_indexedDataEncodingDeltaWithBytesPerIndex:(unsigned long long)arg1;
- (id)scn_indexedDataDecodingDeltaWithBytesPerIndex:(unsigned long long)arg1;
- (id)scn_indexedDataEncodingTrianglePairsWithBytesPerIndex:(unsigned long long)arg1;
- (id)scn_indexedDataDecodingTrianglePairsWithBytesPerIndex:(unsigned long long)arg1;

@end
