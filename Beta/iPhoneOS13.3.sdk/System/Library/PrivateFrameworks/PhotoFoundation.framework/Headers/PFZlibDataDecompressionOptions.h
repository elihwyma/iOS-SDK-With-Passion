/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <Foundation/NSObject.h>

@interface PFZlibDataDecompressionOptions : NSObject

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
