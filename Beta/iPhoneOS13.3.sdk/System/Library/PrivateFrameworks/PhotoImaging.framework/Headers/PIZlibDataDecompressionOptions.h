/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <Foundation/NSObject.h>

@interface PIZlibDataDecompressionOptions : NSObject

{
    _Bool _decompressAllAtOnce;
    int _windowBits;
    CDUnknownBlockType _createBuffer;
    CDUnknownBlockType _growData;
}

@property (nonatomic) int windowBits;
@property (copy, nonatomic) CDUnknownBlockType createBuffer;
@property (copy, nonatomic) CDUnknownBlockType growData;
@property (nonatomic) _Bool decompressAllAtOnce;

+ (id)defaultOptions;

@end
