/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <PASampling/PAOutputStream.h>

@interface PAFileOutputStream : PAOutputStream

{
    struct __sFILE *_outputFileStream;
}

@property (nonatomic, readonly) struct __sFILE *outputFileStream;

- (int)printWithFormat:(const char *)arg1;
- (id)initWithFileStream:(struct __sFILE *)arg1;

@end
