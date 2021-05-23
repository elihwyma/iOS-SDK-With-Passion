/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <PASampling/PAOutputStream.h>

@class NSMutableData;

@interface PAMutableDataOutputStream : PAOutputStream

{
    NSMutableData *_outputData;
}

@property (nonatomic, readonly) NSMutableData *outputData;

- (id)initWithMutableData:(id)arg1;
- (int)printWithFormat:(const char *)arg1;

@end
