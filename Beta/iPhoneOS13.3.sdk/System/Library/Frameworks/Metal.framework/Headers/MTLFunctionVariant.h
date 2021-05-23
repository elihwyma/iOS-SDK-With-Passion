/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

@interface MTLFunctionVariant : NSObject

{
    void *_inputInfo;
    unsigned long long _inputInfoSize;
}

- (void)dealloc;
- (id)initWithCompilerOutput:(id)arg1;
- (const void *)inputInfoAndSize:(unsigned long long *)arg1;
- (void)setInputInfo:(const void *)arg1 size:(unsigned long long)arg2;
- (const void *)outputInfoAndSize:(unsigned long long *)arg1;
- (void)setOutputInfo:(const void *)arg1 size:(unsigned long long)arg2;

@end
