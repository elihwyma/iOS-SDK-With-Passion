/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <Foundation/NSObject.h>

@interface PIZlibDataCompressionOptions : NSObject

{
    int _compressionLevel;
    int _strategy;
    int _windowBits;
    int _memoryLevel;
    unsigned long long _chunkSize;
}

@property (nonatomic) int compressionLevel;
@property (nonatomic) int strategy;
@property (nonatomic) int windowBits;
@property (nonatomic) int memoryLevel;
@property (nonatomic) unsigned long long chunkSize;

+ (id)defaultOptions;

- (void)setCompressionStrategy:(int)arg1;

@end
