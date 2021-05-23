/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <Foundation/NSObject.h>

@interface PFZlibDataCompressionOptions : NSObject

{
    int _compressionLevel;
    int _strategy;
    int _windowBits;
    int _memoryLevel;
    int _chunkSize;
}

@property (nonatomic) int compressionLevel;
@property (nonatomic) int strategy;
@property (nonatomic) int windowBits;
@property (nonatomic) int memoryLevel;
@property (nonatomic) int chunkSize;

+ (id)defaultOptions;

- (void)setCompressionStrategy:(int)arg1;

@end
