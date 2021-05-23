/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/PHAssetWriter.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface PHImageAssetWriter : PHAssetWriter

{
    NSData *_data;
}

@property (retain, nonatomic) NSData *data;

- (id)request;
- (id)transfer;
- (unsigned long long)estimatedOutputSizeWithError:(id *)arg1;

@end
